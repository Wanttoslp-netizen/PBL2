#pragma once
#include <iostream>
#include <string>
using namespace std;

class Expense {
private:
    string expense_id;
    string category; // "Nhien lieu", "Bao tri", "Khac"
    long long amount;
    string date;
    string description;

public:
    Expense();
    Expense(string expense_id, string category, long long amount, string date, string description);

    string getExpense_id() const;
    void setExpense_id(const string& expense_id);

    string getCategory() const;
    void setCategory(const string& category);

    long long getAmount() const;
    void setAmount(long long amount);

    string getDate() const;
    void setDate(const string& date);

    string getDescription() const;
    void setDescription(const string& description);

    void Show() const;
};
