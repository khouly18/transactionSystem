#include "transactionList.h"
#include <vector>

using namespace std;

TransactionList::TransactionList(const unsigned int& capacity) : m_capacity(capacity){
 m_Transactions.resize(capacity);
 m_size = 0;
}

TransactionList::TransactionList(){
}

int TransactionList::addTransaction(const Transaction& transaction) {
    if(m_size >= m_capacity){
        cout<<"Maximum capacity reached"<<endl;
        return 1;
    }
    else
    {
        m_Transactions[m_size].setAmount(transaction.getAmount());
        return 0;
    }
}
void TransactionList::removeTransaction(unsigned int index) {};
Transaction TransactionList::getTransaction(unsigned int index) const {
    return m_Transactions[index];
}
void TransactionList::displayTransaction(unsigned int index) {};
void TransactionList::displayAllTransactions() {};