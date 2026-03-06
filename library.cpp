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

