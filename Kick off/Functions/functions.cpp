#include <iostream>

using namespace std;

//function stab
int add(int a,int b);

void sayHi(){
	cout<< "enter your name: ";
	string name;
	cin>>name;
	cout<<"Hello "+name+"?"<<endl;
}

int main() {
	sayHi();
	//___________________________________________
	cout<<add(3,6);
	return 0;
}
int add(int a ,int b){
   return a+b;
}

