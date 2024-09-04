#include "transaction.h"

// add smart pointers and use vectors later, now just raw pointers

class TransactionList {
public:
    TransactionList(const unsigned int& capacity);
    int addTransaction(const Transaction& transaction);
    void removeTransaction(unsigned int index);
    Transaction getTransaction(unsigned int index) const;
    void displayTransaction(unsigned int index);
    void displayAllTransactions();
    ~TransactionList();


private:
    TransactionList();
    Transaction* m_Transactions;
    unsigned int m_size;
    unsigned int m_capacity;

};