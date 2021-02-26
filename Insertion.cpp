
#include <iostream>
using namespace std;


void InsertionSort(int arr[],int n){
	int i,j;
	int temp,index;
	for(i=1;i<n;i++){
		temp=arr[i];
		j=i-1;
		while( j>=0 && arr[j]>temp ){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;

	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}


}


int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	InsertionSort(arr,n);
	return 0;
}