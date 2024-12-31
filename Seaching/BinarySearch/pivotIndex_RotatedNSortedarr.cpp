#include <iostream>
using namespace std;

int findpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }

        if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1]){
            return mid-1;
        }
        else{
            
        }
    }

};
int main(){
    int arr[] = {12,14,16,2,4,6,8,10};
    int n = sizeof(arr)/sizeof(int);
    findpivot(arr,n);

    return 0;
}