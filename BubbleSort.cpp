#include <iostream>
using namespace std;

void swap(int *arr,int *arr1 ){
	int temp;
	temp=*arr;
	*arr=*arr1;
	*arr1=temp;

}

void BubbleSort(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
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
	BubbleSort(arr,n);
	return 0;
}


