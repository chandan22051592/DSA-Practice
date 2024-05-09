#include <iostream>
using namespace std;
int missingele(int arr[],int n){
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1] *= -1;

        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1 << " ";
        }
    }
    
}
int main(){
    int arr[] = {1,2,3,4,4,3};
    int n= 6;
    missingele(arr,n);
    return 0;
}