#include<iostream>
#include<string.h>
using namespace std;

class Assignment
{
private:
    string assignment_id;
    string Employee_id;
    string Vehicle_id;
    string Shift_id;
    string assignment_date;
    string assignmet_status;
public:
//constructor
    Assignment();
    Assignment(
    string assignment_id,
    string Employee_id,
    string Vehicle_id,
    string Shift_id,
    string assignment_date,
    string assignmet_status
    );
//Get,set

string getAssignment_id ()const;
void setAssignment_id(const string& assignment_id);

string getEmployee_id() const;
void setEmployee_id(const string& Employee_id);

string getVehicle_id() const;
void setVehicle_id(const string& Vehicle_id);

string getShift_id() const;
void setShift_id(const string& Shift_id);

string getAssignment_date() const;
void setAssignment_date(const string& assignmnet_date);

string getAssignment_status() const;
void setAssignment_status(const string& assignment_status);

void Show() const;



};
