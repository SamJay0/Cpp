#include <iostream>

using namespace std;

int main() {
	int a=2;
	//address/pointer
	int *pA=&a;
	
	double b=4.6;
	string s="Hello";
	//print pointer
	cout<< pA<<endl;
	cout<< &a<<endl;
	//dereferncing pointer
	cout<<*pA<< endl;
	cout<<*&a;
	return 0;
}
