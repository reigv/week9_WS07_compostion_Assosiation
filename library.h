// library.h -- Header file for the Course and Student classes
// distinguishes between COMPOSTION & ASSOCIATION

#ifndef LIBRARY_H_
#define LIBRARY_H_

const int SIZE = 30;
#include <string>
class StudentID
{
private:
    std::string first_name;
    std::string last_name;
    int id;

public:
    StudentID();
    void display() const;

};


#endif // LIBRARY_H_