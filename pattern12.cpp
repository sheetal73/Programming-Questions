#include <iostream>
using namespace std;

int main(){
	int n=5;
	int i,j,k;
	for(i=0;i<n;i++){
		
		for( j=0;j<i;j++){
			cout<<" ";
		}
		for(k=0;k<2*n-i*2-1;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
