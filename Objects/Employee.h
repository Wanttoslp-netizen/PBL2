#pragma once
#include<iostream>
#include<string.h>
using namespace std;
class Employee{


protected:
    string employee_id;
    string employee_name;
    string employee_address;
    long long employee_salary;
    string position;


public:
// constructor
    Employee();
    Employee(
        string employee_id,
        string employee_name,
        string employee_address,
        long long employee_salary,
        string position


    );
// destructor
    virtual ~Employee();
// set get
    string get_id() const;
    void set_id(const string& enployee_id );


    string get_name() const;
    void set_name(const string& employee_name);


    string get_address() const;
    void set_address(const string& employee_address);


    long long get_salary()const;
    void set_salary(const long long& employee_salary);


    string get_position ()const;
    void set_position(const string& positon);


    virtual long long calculate_salary() const = 0;
    virtual void Show() const;


};
