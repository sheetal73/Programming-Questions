#include <iostream>
using namespace std;

int main(){
	int n=5;
	int i,j,k;
	for(i=0;i<n;i++){
		for( k=0;k<n-i-1;k++)
			cout<<" ";
		for( j=0;j<i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

