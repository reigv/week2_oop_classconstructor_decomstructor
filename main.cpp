// main.cpp file

#include "student.h"

int main()
{

    Student student("john@email.com", 3.8);

    student.display();

    Student student2(student);
    // call_display(student2);
    student2.display();

    // Student student3;
    // student3 = copy(student2);

    return 0;
}