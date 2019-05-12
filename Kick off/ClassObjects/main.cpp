#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    string regno;
    int ID;
    char grade;
    //constructor...just like java it can take parameters
    Student()
    {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter regno:";
        cin>>regno;
        cout<<"enter ID:";
        cin>>ID;
        cout<<"enter grade:";
        cin>>grade;
    }

    //functions
    bool hasHonors()
    {
        if(grade=='A')
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Student std1;
    cout<<"\n\t"<<std1.name<<"\n\t"<<std1.regno<<"\n\t"<<std1.ID<<endl;
    //displays 1 for true and 0 for false
    if(std1.hasHonors()){
        cout<<"Has honors";
    }else{
        cout<<"Has no honors";
    }
    return 0;
}
