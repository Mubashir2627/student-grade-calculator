//first file humne create ki student.h k name se jisme  student k tamam function declare hoge
#include<iostream>
#include<string>
using namespace std;
// first we declare class jiska name student hy 
class Student {
    // yaha humne name age roll number  aur gpa(data members) ko encapsulate kya 
private:
    string name;
    int age;
    int rollNo;
    float gpa;
    // baqi tamam (memberfunction) humne public me rahke 
public:
    Student();// default constructor use howa jo k automatically object creation time call hojyega
    Student(string n, int a, int r, float g=0.0);// ye parameter constructor hy jo k hum pass krege
    ~Student();// desctructor program katam hone k bad data ko destruct krdega
    // setter fuction use kya jo private me encapsulate value ko easily access krle aur unhe update krle
    void setName(string n);
    void setAge(int a);
    void setRollNo(int r);
    void setGPA(float g);
    // getter function use kya jo encapsulate data ko read kre 
    string getName();
    int getAge();
    int getRollNo();
    float getGPA();
    // display all the student data
    void displayInfo();
    // calculate student grade according to their marks
    void displayGrade();
};
