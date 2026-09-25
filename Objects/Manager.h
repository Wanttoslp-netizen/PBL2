#pragma once
#include<iostream>
#include<string.h>
#include "Employee.h"
using namespace std;
class Manager : public Employee
{


private:
    long long managerAllowance;




public:
// constructor
    Manager();
    Manager (
        string employee_id,
        string employee_name,
        string employee_address,
        long long employee_salary


    );
// ham get, set
    long long get_managerAllowance() const;
    void set_managerAllowance(long long allowance);


    long long calculate_salary() const override;
    void Show() const override;




};



