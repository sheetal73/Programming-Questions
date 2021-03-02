#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int *arr,int *arr2){
	int temp;
	temp=*arr;
	*arr=*arr2;
	*arr2=temp;
}

void randomize(int arr[],int l,int r){
int n=r-l+1;
int temp=rand()%n;
swap(arr[l+temp],arr[r]);
}


int partition(int arr[],int l,int h){
	int pivot=arr[h];
	int i=l-1;
	for(int j=l;j<h;j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
		}
		
		swap(&arr[i+1],&arr[h]);
		return i+1;

}


void QuickSort(int arr[],int l,int h){
	int pivot;
	if(l<h){
		randomize(arr,l,h);
		pivot=partition(arr,l,h);
		QuickSort(arr,l,pivot-1);
		QuickSort(arr,pivot+1,h);
			}}

	


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
	QuickSort(arr,0,n-1);
	for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}

	return 0;
}