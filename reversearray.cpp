#include<bits/stdc++.h>
using namespace std ;

void reversearray(int arr[], int start, int end)
{
    int temp;
    while(start<end)
    {
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start+=1;
    end-=1;
    }
}

void printarray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main () 
{
    int arr[]={1,2,3,4,5,6};

    int n=sizeof(arr)/sizeof(arr[0]);

    printarray(arr,n);

    reversearray(arr, 0,n-1);

    printarray(arr,n);
    return 0;
}