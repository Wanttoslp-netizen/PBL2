#include<iostream>
#include<string>
using namespace std;

class Invoice
{

private:
    string invoice_id;
    string invoiceCustomer_id;
    string invoice_date;
    string invoice_status;
    long long total_amount;

public:
//constructor
    Invoice();
    Invoice(
        string invoice_id,
        string invoiceCustomer_id,
        string invoice_date,
        string invoice_status,
        long long total_amount

    );
string getInvoice_id ()const;
void setInvoice_id(const string& invoice_id);

string getInvoiceCustomer_id()const;
void setInvoiceCustomer_id(const string& invoiceCustomer_id);

string getInvoice_date()const;
void setInvoice_date(const string& invoice_date);

string getInvoice_status()const;
void setInvoice_status(const string& invoice_status);

long long getTotal_amount()const;
void setTotal_amout(const long long& total_amount);

long long calculate_totalcost() const;
void Show() const;
    

};

    string getIssue_date() const;
    void setIssue_date(const string& issue_date);

    string getPayment_status() const;
    void setPayment_status(const string& payment_status);

    void Show() const;
};
