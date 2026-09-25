#pragma once
#include <iostream>
#include <string>
using namespace std;

class Attendance {
private:
    string attendance_id;
    string employee_id;
    string date;
    string check_in_time;
    string check_out_time;
    string status;

public:
    Attendance();
    Attendance(string attendance_id, string employee_id, string date, string check_in_time, string check_out_time, string status);

    string getAttendance_id() const;
    void setAttendance_id(const string& attendance_id);

    string getEmployee_id() const;
    void setEmployee_id(const string& employee_id);

    string getDate() const;
    void setDate(const string& date);

    string getCheck_in_time() const;
    void setCheck_in_time(const string& check_in_time);

    string getCheck_out_time() const;
    void setCheck_out_time(const string& check_out_time);

    string getStatus() const;
    void setStatus(const string& status);

    void Show() const;
};
