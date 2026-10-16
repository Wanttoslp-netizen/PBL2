#include<iostream>
#include<string.h>
using namespace std;

class Attendance
{
private:
    string attendance_id;
    string Employee_id;
    string Assignment_id;
    string attendace_date;
    string check_in;
    string check_out;

public:
    Attendance();
    Attendance(
    string attendance_id,
    string Employee_id,
    string Assignment_id,
    string attendace_date,
    string check_in,
    string check_out

    );

    string getAttendance_id() const;
    void setAttendance_id (const string& attendance_id);

    string getEmployee_id() const;
    void setEmployee_id(const string& Employee_id);

    string getAssignment_id() const;
    void setAssigment_id(const string& Assignment_id);

    string getAttendance_date() const;
    void setAttendance_date(const string& attendance_date);

    string getCheck_in() const;
    void setCheck_in(const string& check_in);

    string getCheck_out() const;
    void setCheck_out(const string& check_out);

    void Show() const;


};

