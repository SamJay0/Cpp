#include<iostream>
using namespace std;
int factorial(int n){
   
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
    
}
int main(){
    int n;
    cout<<"enter number to get factorial: ";
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}