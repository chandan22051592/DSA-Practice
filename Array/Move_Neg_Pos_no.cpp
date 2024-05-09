#include <iostream>
using namespace std;

void moveelement(int arr[],int n){
    int j=0;
    for(int index =0;index<n;index++){
        if(arr[index]<0){
            int temp = arr[index];
            arr[index] = arr[j];
            arr[j]=temp;
            j++;
        }

    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}
int main(){
    int arr[] = {-7,3,4,-35,-20,57,4,-1};
    // int arr[] = {-2,0,-4,-35,-20,-57,-4,-1};
    int n = sizeof(arr)/sizeof(int);
    moveelement(arr,n);
    
    return 0;
}