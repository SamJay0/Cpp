#include <iostream>

using namespace std;

int getMax(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int main() {
//	bool isMale=false;
//	if(isMale){
//		cout<<"Male";
//	}
//	else{
//		cout<<"Female";
//	}
cout<<getMax(30,24)<<endl;
	return 0;
}
