// library.cpp -- Implementation file for the Course and Student classes

#include "library.h"
#include <string>
#include <iostream>

StudentID::StudentID(std::string stname, std::string lstname, int _id): 
first_name(stname), last_name(lstname), id(_id) {}

void StudentID::display() const {
    std::cout << "Student Last Name: " << last_name << std::endl;
    std::cout << "Student First Name: " << first_name << std::endl;
    std::cout << "Student ID: " << id << std::endl;
}

CourseID::CourseID(std::string _code, std::string _name): 
code(_code), name(_name) {}

void CourseID::display() const {
    std::cout << "Course Name: " << name << std::endl;
    std::cout << "Course Code: " << code << std::endl;   
}

Course::Course(std::string _code, std::string _name, Student* _student, int _num_stu): 
course_id_(_code, _name), num_students(_num_stu) {
    for (int i = 0; i < SIZE; i++)
    {
        students_[i] = _student;
    }
    
}

void Course::display() const {
    course_id_.display();
    // students_.display();
    // std::cout << "Number of Students: " << num_students << std::endl;
}

void Course::display_students() const{
    students_.display();
}

