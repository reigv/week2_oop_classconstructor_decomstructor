// function file.cpp

#include "student.h"
#include <iostream>
#include <cstring> // for strncpy


// constructor
Student::Student()
{
    email_[0] = '\0';
    gpa_ = 0;
}
// overloaded constructor
Student::Student(char email[], float gpa)
{
    std::strncpy(email_, email, sizeof(email_) - 1);
    email_[sizeof(email_) - 1] = '\0';
    gpa_ = gpa;
}
// Copy constructor
Student::Student(const Student &other)
{
    std::strncpy(email_, other.email_, sizeof(email_) - 1);
    email_[sizeof(email_) - 1] = '\0';
    gpa_ = other.gpa_;
}
// destructor
Student::~Student()
{
    std::cout << "Destructor Called" << std::endl;
}
void Student::edit()
{
    std::cout << "email: " << std::endl;
    std::cin >> email_;
    std::cout << "gpa: " << std::endl;
    std::cin >> gpa_;
}
void Student::display()
{
    std::cout << "-----------------" << std::endl;
    std::cout << "Email: " << email_ << std::endl;
    std::cout << "gpa: " << gpa_ << std::endl;
}

// void call_display(Student student)
// {
//     student.display();
// }

// Student copy(Student student)
// {
//     return student;
// }

