#pragma once

#include "../Objects/Attendance.h"
#include <string>

using namespace std;

class AttendanceManager {
private:
    Attendance* arr; 
    int size;
    int capacity;

public:
    AttendanceManager();
    AttendanceManager(const AttendanceManager& other);
    AttendanceManager& operator=(const AttendanceManager& other);
    ~AttendanceManager();

    int getSize() const;
    int getCapacity() const;
    Attendance* getArr() const;

    // Nap chong toan tu
    AttendanceManager& operator+=(const Attendance& attendance);    // Them ban ghi cham cong
    AttendanceManager& operator-=(const string& attendanceId);      // Xoa ban ghi theo ID
    Attendance& operator[](int index);                              // Truy xuat theo index
    const Attendance& operator[](int index) const;

    // Ghi nhan Check-in va Check-out
    void checkIn(const string& employeeId, const string& date, const string& time);
    void checkOut(const string& employeeId, const string& date, const string& time);
    void addAttendance(const Attendance& attendance);

    // Xoa ban ghi cham cong
    bool deleteAttendance(const string& attendanceId);

    // Tim kiem va Hien thi
    void findByEmployeeId(const string& employeeId) const;
    void displayAll() const;
    void displayAttendanceTable() const;
    void displayByDate(const string& date) const;
};
