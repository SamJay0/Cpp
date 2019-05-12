#include <iostream>

  using namespace std;
int main() {
	int  arrays[3][2]={
		{2,4},
		{3,5},
		{6,7}
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<< arrays[i][j]<<" ";
		}
		cout<<endl;
	}
	//printing out address
	cout<<&arrays[0][0];
	
	
	return 0;
}
