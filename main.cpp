#include "include/transactionList.h"

using std::cout, std::endl;

int main()
{
    TransactionList myTransactionList(10);
    dateType date_1, date_2;
    date_1.day = 12;
    date_1.month = 1;
    date_1.year = 2024;
    
    date_2.day = 13;
    date_2.month = 4;
    date_2.year = 2024;
    Transaction Transaction_1(date_1, CATEGORY_A, 10, "This is transaction 1");
    Transaction Transaction_2(date_2, CATEGORY_B, 5, "This is transaction 2");
    myTransactionList.addTransaction(Transaction_1);
    myTransactionList.addTransaction(Transaction_2);
    
    myTransactionList.displayAllTransactions(); 

    return 0;
}