#include "transactionList.h"
#include <vector>

using std::endl;
using std::cout;

TransactionList::TransactionList(const unsigned int& capacity) : m_capacity(capacity){
 m_Transactions.reserve(m_capacity);
 m_size = 0;
}


int TransactionList::addTransaction(const Transaction& transaction) {
    if(m_size >= m_capacity){
        cout<<"Maximum capacity reached"<<endl;
        return 1;
    }
    else
    {
        m_Transactions.push_back(transaction);
        m_size++;
        return 0;
    }
}

int TransactionList::removeTransaction(const unsigned int index) {
    if(index > m_size) {
        cout<<"index out of bounds"<<endl;
        return 1;
    }
    else {
        m_Transactions.erase(m_Transactions.begin() + index);
        m_size--;
        return 0;
    }
}

Transaction TransactionList::getTransaction(const unsigned int index) const {
    return m_Transactions[index];
}

void TransactionList::displayTransaction(const unsigned int index) {
    cout<<"Description: "<<m_Transactions[index].getDescription()<<endl;
    cout<<"Date: "<< m_Transactions[index].getDate()<<endl;
    cout<<"Category: "<<m_Transactions[index].getCategory()<<endl;
    cout<<"Amount: "<<m_Transactions[index].getAmount()<<endl;
}

void TransactionList::displayAllTransactions() {
    for(int index = 0; index < m_size; index++)
    {
        displayTransaction(index);
        cout<<endl;
    }
}