#include <iostream>
using namespace std;
int main(){
	int maxGuess=3;
	bool outOfGuesses=false;
	int secreteNum=7;
	cout <<"enter guess: "	;
	int guess;
	cin>> guess;
	int count=0;
	while(guess !=secreteNum && !outOfGuesses){
	  if(count<maxGuess){
	  	cout <<"enter guess again: ";
	   cin>>guess;
	   count++;
	  } else{
	  	outOfGuesses=true;
	  }
	  
	}
	if(outOfGuesses){
		cout<<"You Lose!!";
	}else{
	    cout<<"You win";
	}
	

	return 0;
	
}
