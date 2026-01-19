// .h file

// #include <iostream>
// #include <cstring> // for strncpy

class Student
{
private:
    char email_[32];
    float gpa_;

public:
    // constructor
    Student();
    
    // overloaded constructor
    Student(char email[], float gpa);
    
    // Copy constructor
    Student(const Student &other);
   
    // destructor
    ~Student();
    
    void edit();

    void display();

};

// void call_display(Student student)
// {
//     student.display();
// }

// Student copy(Student student)
// {
//     return student;
// }

