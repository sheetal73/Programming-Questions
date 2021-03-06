#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    
    int i=0,j=0;
    int tempa[n1];
    int tempb[n2];

    while(i<n1){
        tempa[i]=arr[l+i];
        i++;
    }

    while(j<n2){
        tempb[j]=arr[mid+1+j];
        j++;
    }

    i=0,j=0;
    int k=l;

    while(i<n1 && j<n2)
    {
        if(tempa[i]<=tempb[j])
            {
              arr[k++]=tempa[i++];
           }
        else
           {
             arr[k++]=tempb[j++];
           }
    }

    while(i<n1)
    {
        arr[k++]=tempa[i++];
    }

    while(j<n2)
    {
        arr[k++]=tempb[j++];
    }

 

}



void merge_sort(int arr[],int l,int r)
{
   
    if(l<r)
    {
        int mid=l+(r-l)/2;
        merge_sort(arr,l,mid);//till mid because we gotta include the mid element too since not sorted
        merge_sort(arr,mid+1,r);//from mid+1 same reason
        merge(arr,l,mid,r);//we'll start merging t(N)=O(n)
    }
    
}




int main()
{    


    int testcase,n,i;
    scanf("%d",&testcase);
    while(testcase!=0)
    {
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        merge_sort(arr,0,n-1);

        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
       
    }
    return 0;
}