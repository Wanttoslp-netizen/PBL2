#pragma once

#include "../Objects/Invoice.h"
#include <string>

using namespace std;

class InvoiceManager {
private:
    Invoice* arr; 
    int size;
    int capacity;

public:
    InvoiceManager();
    InvoiceManager(const InvoiceManager& other);
    InvoiceManager& operator=(const InvoiceManager& other);
    ~InvoiceManager();

    // Getter
    int getSize() const;
    int getCapacity() const;
    Invoice* getArr() const;

    // Nap chong toan tu
    InvoiceManager& operator+=(const Invoice& invoice);            // Them hoa don
    InvoiceManager& operator-=(const string& invoiceId);           // Xoa hoa don theo ma
    Invoice& operator[](int index);                                // Truy xuat theo index
    const Invoice& operator[](int index) const;

    // Quan ly hoa don
    void addInvoice(const Invoice& invoice);
    void generateInvoiceFromCustomer(const string& customerId, long long amount, const string& invoiceId, const string& date);
    bool updatePaymentStatus(const string& invoiceId, const string& newStatus);
    bool deleteInvoice(const string& invoiceId);

    // Tim kiem va hien thi
    Invoice* findInvoiceById(const string& invoiceId);
    const Invoice* findInvoiceById(const string& invoiceId) const;
    void displayAll() const;

    // Loc va Tinh toan
    void displayUnpaidInvoices() const;
    long long calculateTotalRevenue() const;
};
