#pragma once
#include <iostream>
#include <string>
using namespace std;

class Invoice {
private:
    string invoice_id;
    string customer_id;
    long long amount;
    string issue_date;
    string payment_status; // "Da thanh toan" / "Chua thanh toan"

public:
    Invoice();
    Invoice(string invoice_id, string customer_id, long long amount, string issue_date, string payment_status);

    string getInvoice_id() const;
    void setInvoice_id(const string& invoice_id);

    string getCustomer_id() const;
    void setCustomer_id(const string& customer_id);

    long long getAmount() const;
    void setAmount(long long amount);

    string getIssue_date() const;
    void setIssue_date(const string& issue_date);

    string getPayment_status() const;
    void setPayment_status(const string& payment_status);

    void Show() const;
};
