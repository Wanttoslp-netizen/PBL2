#pragma once

#include "../Objects/Assignment.h"
#include <string>

using namespace std;

class AssignmentManager {
private:
    Assignment* arr; 
    int size;
    int capacity;

public:
   
    AssignmentManager();
    AssignmentManager(const AssignmentManager& other);
    AssignmentManager& operator=(const AssignmentManager& other);
    ~AssignmentManager();

    int getSize() const;
    int getCapacity() const;
    Assignment* getArr() const;

    // Nap chong toan tu
    AssignmentManager& operator+=(const Assignment& assignment);    // Them phan cong
    AssignmentManager& operator-=(const string& assignmentId);      // Xoa phan cong theo ma
    Assignment& operator[](int index);                              // Truy xuat theo index
    const Assignment& operator[](int index) const;

    // Quan ly phan cong
    void addAssignment(const Assignment& assignment);
    bool editAssignment(const string& assignmentId, const Assignment& updatedAssignment);
    bool deleteAssignment(const string& assignmentId);

    // Tim kiem va hien thi
    Assignment* findAssignmentById(const string& assignmentId);
    const Assignment* findAssignmentById(const string& assignmentId) const;
    void displayAll() const;

    // Kiem tra trung lich phan cong (nhan vien hoac phuong tien)
    bool checkConflict(const string& employeeId, const string& vehicleId, const string& date, const string& shift) const;
    bool checkConflict(const Assignment& assignment) const;
};
