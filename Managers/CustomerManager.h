#pragma once

#include "../Objects/Customer.h"
#include <string>

using namespace std;

class CustomerManager {
private:
    Customer** arr;
    int size;
    int capacity;

public:
    CustomerManager();
    CustomerManager(const CustomerManager& other);
    CustomerManager& operator=(const CustomerManager& other);
    ~CustomerManager();

    int getSize() const;
    int getCapacity() const;
    Customer** getArr() const;

    // Nap chong toan tu
    CustomerManager& operator+=(Customer* customer);        // Them khach hang
    CustomerManager& operator-=(const string& id);          // Xoa khach hang theo ID
    Customer* operator[](int index);                       // Truy xuat theo index
    const Customer* operator[](int index) const;

    // Quan ly khach hang
    void addCustomer(Customer* customer);
    bool editCustomer(const string& id, Customer* updatedCustomer);
    bool deleteCustomer(const string& id);

    // Tim kiem va hien thi
    Customer* findCustomerById(const string& id) const;
    void displayAll() const;

    // Tinh tong du kien thu phi
    long long calculateTotalExpectedRevenue() const;
};
