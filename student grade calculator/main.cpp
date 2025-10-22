#include"student.h"
int main() {
    // call constructor default 
    Student s1;
    // after call set or update the value using setter 
    s1.setName("mubashir");
    s1.setAge(21);
    s1.setRollNo(0020);
    s1.setGPA(3.8);
    s1.displayInfo();
    s1.displayGrade();
    cout << endl;
    // passing parameter to  function using parameter constructor
    Student s2("fahad", 22, 003, 2.9);
    s2.displayInfo();
    s2.displayGrade();
    cout << endl;
   
    Student s3("atir", 22, 12 );
    s3.setGPA(1.5);
    s3.displayInfo();
    s3.displayGrade();

    system("pause");
    return 0;
}