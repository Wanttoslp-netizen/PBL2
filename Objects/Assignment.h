#pragma once
#include <iostream>
#include <string>
using namespace std;

class Assignment {
private:
    string assignment_id;
    string employee_id;
    string vehicle_id;
    string route_id;
    string date;
    string shift;

public:
    Assignment();
    Assignment(string assignment_id, string employee_id, string vehicle_id, string route_id, string date, string shift);

    string getAssignment_id() const;
    void setAssignment_id(const string& assignment_id);

    string getEmployee_id() const;
    void setEmployee_id(const string& employee_id);

    string getVehicle_id() const;
    void setVehicle_id(const string& vehicle_id);

    string getRoute_id() const;
    void setRoute_id(const string& route_id);

    string getDate() const;
    void setDate(const string& date);

    string getShift() const;
    void setShift(const string& shift);

    void Show() const;
};
