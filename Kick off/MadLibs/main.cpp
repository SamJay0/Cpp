#include <iostream>

using namespace std;

int main()
{
    string color,pluralNoun,celebrity;
    cout << "enter a color: ";
    getline(cin,color);
    cout << "enter a plural noun: ";
    getline(cin,pluralNoun);
    cout << "enter a jhbjvhas ncelebrity: ";
    getline(cin,celebrity);
    cout <<"\n\tRoses are "<<color <<"\n\t" <<pluralNoun <<" are blue"
         <<"\n"<<"\tI love"<<celebrity+"\n";

    cout<<"\n\tRoses are "+color+"\n\t"+pluralNoun+" are blue"+"\n\tI love "+celebrity +"\n";
    return 0;
}
