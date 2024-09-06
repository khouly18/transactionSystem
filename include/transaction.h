#include <iostream>
#include <string>

// add custom operators later for copying = and printing <<

struct dateType{
    int day;
    int month;
    int year;
};

enum categoryType{
    CATEGORY_A,
    CATEGORY_B,
    CATEGORY_C
};

class Transaction{
    public:
    //default constructor
    Transaction() = default;
    //normal constructor
    Transaction(const dateType& date, const categoryType& category, const int& amount, const std::string& description);
    //destructor
    ~Transaction(){};
    //getter functions
    const dateType& getDate() const;
    const int& getAmount() const;
    const categoryType& getCategory() const;
    const std::string& getDescription() const;
    void setDate(const dateType&);
    void setAmount(const int& amount);
    void setCategory(const categoryType& category);
    void setDescription(const std::string& description);
    void transactionDetails();
    private:
    //member variables
    dateType m_date;
    int m_amount;
    categoryType m_category;
    std::string m_description;

};