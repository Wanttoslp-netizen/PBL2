#pragma once
#include<iostream>
#include<string.h>
#include "Employee.h"
using namespace std;
class Driver : public Employee
{


public:
    Driver();
    Driver(
        string employee_id,
        string employee_name,
        string employee_address,
        long long employee_salary


    );
    long long calculate_salary() const override;
    void Show() const override;


};



