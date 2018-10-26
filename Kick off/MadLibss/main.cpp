#include <iostream>

using namespace std;

int main()
{
    string color,pluralNoun,celebrity;
    cout << "enter a color: ";
    getline(cin,color);
    if(color=="purple"){
    	cout <<"good guess\n";
	}
	else{
		cout<<"You tried anyway \n";
	}
    cout << "enter a plural noun: ";
    getline(cin,pluralNoun);
    cout << "enter a celebrity: ";
    getline(cin,celebrity);
    cout <<"\n\tRoses are "<<color <<"\n\t" <<pluralNoun <<" are blue"
         <<"\n"<<"\tI love"<<celebrity+"\n";
    cout<<"\n\tRoses are "+color+"\n\t"+pluralNoun+" are blue"+"\n\tI love "+celebrity ;
    return 0;
}

