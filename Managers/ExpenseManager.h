#pragma once

#include "../Objects/Expense.h"
#include <string>

using namespace std;

class ExpenseManager {
private:
    Expense* arr; 
    int size;
    int capacity;

public:
    ExpenseManager();
    ExpenseManager(const ExpenseManager& other);
    ExpenseManager& operator=(const ExpenseManager& other);
    ~ExpenseManager();

    // Getter
    int getSize() const;
    int getCapacity() const;
    Expense* getArr() const;

    // Nap chong toan tu
    ExpenseManager& operator+=(const Expense& expense);           // Them khoan chi
    ExpenseManager& operator-=(const string& expenseId);           // Xoa khoan chi theo ma
    Expense& operator[](int index);                                // Truy xuat theo index
    const Expense& operator[](int index) const;

    // Quan ly chi phi
    void addExpense(const Expense& expense);
    bool editExpense(const string& expenseId, const Expense& updatedExpense);
    bool deleteExpense(const string& expenseId);

    // Tim kiem va hien thi
    Expense* findExpenseById(const string& expenseId);
    const Expense* findExpenseById(const string& expenseId) const;
    void displayAll() const;

    // Tinh tong chi phi
    long long calculateTotalExpenses() const;
};
