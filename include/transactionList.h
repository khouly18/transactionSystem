#include "transaction.h"
#include <vector>

// add smart pointers and use vectors later, now just raw pointers

class TransactionList {
public:
    TransactionList() = delete;
    explicit TransactionList(const unsigned int& capacity);
    int addTransaction(const Transaction& transaction);
    int removeTransaction(const unsigned int index);
    Transaction getTransaction(const unsigned int index) const;
    void displayTransaction(const unsigned int index);
    void displayAllTransactions();
    ~TransactionList() = default;


private:
    std::vector<Transaction> m_Transactions;
    unsigned int m_size;
    unsigned int m_capacity;

};