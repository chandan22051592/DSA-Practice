#include <iostream>
using namespace std;

void getSortedArray(int arr[],int n){
    int i=0;
    int j=n-1;
    while(j>i){
        if (arr[i] > arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        
        }
        else if(arr[i]<arr[j])
        {
            i++;
            j--;
        }
    }
    
}
int main(){
   
    int arr[] = {0,1,0,1,0,1};
    int n= sizeof(arr)/sizeof(int);
    getSortedArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// {0,1,0,0,0,0,1,1,1,0,1,0};