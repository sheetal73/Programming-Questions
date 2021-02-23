#include <iostream>
using namespace std;

int main(){
	int n=5;
	int i,j,k;
	for(i=0;i<n;i++){
		for( k=0;k<i;k++)
			cout<<" ";
		for( j=0;j<n-i;j++){
			cout<<n-j-i;
		}
		cout<<endl;
	}
	return 0;
}

