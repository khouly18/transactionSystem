#include <transaction.h>
using namespace std;

const int& Transaction::getAmount() const{
    return this->m_amount;
}

const dateType& Transaction::getDate() const{
    return this->m_date;
}

const categoryType& Transaction::getCategory() const{
    return this->m_category;
}

const string& Transaction::getDescription() const{
    return this->m_description;
}

void Transaction::setDate(const dateType& date){
    this->m_date.day = date.day;
    this->m_date.month = date.month;
    this->m_date.year = date.year;
}

void Transaction::setAmount(const int& amount){
    this->m_amount = amount;
}

void Transaction::setCategory(const categoryType& category)
{
    this->m_category = category;
}

void Transaction::setDescription(const std::string& description)
{
    this->m_description = description;
}


void Transaction::transactionDetails(){
    cout<<"Description: "<<this->m_description<<endl;
    cout<<"Date: "<< this->m_date.day << "/"<< this->m_date.month<<'/'<<this->m_date.year<<endl;
    cout<<"Category: "<< this->m_category <<endl;
    cout<<"Amount: "<<this->m_amount<<endl;
}

Transaction::Transaction(const dateType& date, const categoryType& category, const int& amount, const std::string& description):m_amount(amount), m_date(date), m_description(description), m_category(category){}