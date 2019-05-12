#include <iostream>

using namespace std;

class Chef
{
public:
    void makeChicken()
    {
        cout<<"The chef makes chicken";
    }
    void makeSalad()
    {
        cout<<"The chef makes Salad";
    }
};

//inheritance
class ItalianChef : public Chef{
};

int main()
{
    return 0;
}
