#include <iostream>
//we use getters and setters to access attributes that are private in a class
using namespace std;
class Student
{
private:
    char grade;

public:
    string name;
    string reg;

    //constructor
    Student(string aName,string aReg,char aGrade)
    {
        name=aName;
        reg=aReg;
      setGrade(aGrade);
    }
    //setters

    void setGrade(char aGrade)
    {
        if(aGrade=='A' || aGrade=='B' || aGrade=='C' || aGrade=='D')
        {
            grade=aGrade;
        }
        else
        {
            grade='E';
        }
    }
    //getters
    char getGrade()
    {
        return grade;
    }

};

int main()
{
    Student student1("Juma","TU01-SC-211-0630/2016",'T');
    cout<<"grade: "<<student1.getGrade();

    return 0;
}
