#pragma once

#include "../Objects/Employee.h"
#include "../Objects/Manager.h"
#include "../Objects/Driver.h"
#include "../Objects/Janitor.h"
#include <string>

using namespace std;

class EmployeeManager {
private:
    Employee** arr; 
    int size;
    int capacity;

public:
    EmployeeManager();
    EmployeeManager(const EmployeeManager& other);
    EmployeeManager& operator=(const EmployeeManager& other);
    ~EmployeeManager();

    // Getter
    int getSize() const;
    int getCapacity() const;
    Employee** getArr() const;

    // Nap chong toan tu
    EmployeeManager& operator+=(Employee* emp);            // Them nhan vien
    EmployeeManager& operator-=(const string& id);          // Xoa nhan vien theo ID
    Employee* operator[](int index);                       // Truy xuat theo index
    const Employee* operator[](int index) const;

    // Quan ly du lieu nhan vien
    void addEmployee(Employee* employee);
    bool editEmployee(const string& id, Employee* updatedEmployee);
    bool deleteEmployee(const string& id);

    // Tim kiem va hien thi
    Employee* findEmployeeById(const string& id) const;
    void displayAll() const;

    // Tinh toan & Thong ke
    long long calculateTotalSalaryFund() const;
    void displayByPosition(const string& position) const;
};
