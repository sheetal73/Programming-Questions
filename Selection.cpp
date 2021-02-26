
#include <iostream>
using namespace std;


void swap(int *arr,int *arr2){
	int temp;
	temp=*arr;
	*arr=*arr2;
	*arr2=temp;
}

void SelectionSort(int arr[],int n){
	int i,j;
	int temp,index;
	for(i=0;i<n-1;i++){
		temp=arr[i];
		index=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<temp){
				temp=arr[j];
				index=j;
			}		}
			swap(&arr[i],&arr[index]);

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
	SelectionSort(arr,n);
	return 0;
}