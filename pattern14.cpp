#include <iostream>
using namespace std;

int main(){
	int n=5;
	int i,j,k;
	for(i=1;i<=n;i++){
			
			for( j=0;j<n-i;j++){
				cout<<" ";
			}
			//below loop is to print the first half.
			for(k=0;k<i;k++){
				cout<<k+1;
			}
			//below loop is to print the rest in descending order
			for(k=i-1;k>=1;k--){
				cout<<k;
			}
			cout<<endl;
		}
		//for inverted triangle
		for(i=1;i<=n;i++){
			
			for( j=0;j<i;j++){
				cout<<" ";
			}
			//below loop is to print the first half.
			for(k=0;k<n-i;k++){
				cout<<k+1;
			}
			//below loop is to print the rest in descending order
			for(k=n-i-1;k>=1;k--){
				cout<<k;
			}
			cout<<endl;
		}
	
	return 0;
}