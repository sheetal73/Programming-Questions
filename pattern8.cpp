#include <iostream>
using namespace std;

int main(){
	int n=5;
	int i,j,k;
	for(i=0;i<n;i++){
		
		for( j=n-i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
