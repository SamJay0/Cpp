#include <iostream>

using namespace std;

int main() {
	int n;
	int count=0;
	double a=0;
	double rating;
	cin >> n;
	for(int i=0;i<n;i++){
	  cin>>rating;
	   if(rating >=90 && rating<=100){
	       a+=rating;
	       count++;
	   }
   }
   double average=a/count;
   cout<< average;	
    string s="sam";

	
	return 0;
}
