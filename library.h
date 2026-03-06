// library.h -- Header file for the Course and Student classes
// distinguishes between COMPOSTION & ASSOCIATION

// Association -- general relationship 
//              -- objs are independent (exist without the others)
//              -- weakest
//              -- poiters || reference

// Composition  -- strong ownership
                // -- the life of the part depends on the whole 
                // -- destroyed && destroyed
                // -- direct member obj


#ifndef LIBRARY_H_
#define LIBRARY_H_

const int SIZE = 30;
#include <string>

//----------------------------------------------------------------

class StudentID
{
private:
    std::string first_name;
    std::string last_name;
    int id;

public:
    StudentID(std::string stname, std::string lstname, int _id);
    void display() const;

};

//----------------------------------------------------------------

class CourseID {
private:
    std::string code;
    std::string name;

public:
    CourseID(std::string _code, std::string _name);
    void display() const;
};

//----------------------------------------------------------------

class Course
{
private:
    CourseID course_id_;
    Student* students_

};

class Student 
{
private: 

};

#endif // LIBRARY_H_