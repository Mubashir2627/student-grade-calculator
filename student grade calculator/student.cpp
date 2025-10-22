#include "Student.h"
//default constructor
Student::Student() {
    name = "unknown ";
    age = 0;
    rollNo = 0;
    gpa = 0.0;
}
// parameter constructor
Student::Student(string n, int a, int r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
}
// destructor for student 
Student::~Student() {
    cout << "Destructor all the data  of student: " << name << endl;
}
// access the private data throug setter 
void Student::setName(string n) {
    name = n;
}
void Student::setAge(int a) {
    age = a;
}
void Student::setRollNo(int r) {
    rollNo = r;
}
void Student::setGPA(float g) {
    gpa = g;
}
// read private data
string Student::getName() {
    return name;
}
int Student::getAge() {
    return age;
}
int Student::getRollNo() {
    return rollNo;
}
float Student::getGPA() {
    return gpa;
}
// display all the  data of student 
void Student::displayInfo() {
    cout << "Name:| " << name << "  Age: |" << age
        << "  Roll No:| " << rollNo
        << "  GPA: | " << gpa << endl;
}
// calculate grade of student
void Student::displayGrade() {
    char grade;

    if (gpa >= 3.7)
        grade = 'A';
    else if (gpa >= 3.0)
        grade = 'B';
    else if (gpa >= 2.0)
        grade = 'C';
    else if (gpa >= 1.0)
        grade = 'D';
    else
        grade = 'F';

    cout << "Grade for this student is  " << name << ": " << grade << endl;
}
