#pragma once
#include <iostream>
#include <string.h>
using namespace std;


class Customer {
private:
    string customer_id;
    string customer_type;
    string customer_name;
    string customer_phone;
    string customer_address;
public:
    Customer();
    Customer(
    string customer_id,
    string customer_type,
    string customer_name,
    string customer_phone,
    string customer_address


    );


    string getCustomer_id()const;
    void setCustomer_id (const string& customer_id);


    string getCustomer_type()const;
    void setCustomer_type (const string& customer_type);


    string getCustomer_name()const;
    void setCustomer_name(const string& customer_name);


    string getCustomer_phone()const;
    void setCustomer_phone(const string& customer_phone);


    string getCustomer_address()const;
    void setCustomer_address(const string& customer_address);


    virtual long long calculate_fee() const = 0;
    void Show() const;


};

