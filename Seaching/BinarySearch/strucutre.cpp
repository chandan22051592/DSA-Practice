#include <iostream>
using namespace std;

int locatetarget(int arr[],int n,int target){
    int left=0;
    int right=n-1;
    int mid = (left+right)/2;
    
    while(left <= right){
        
        if(target==arr[mid]){
            return mid;
        }
        else if(target>arr[mid]){
            left = mid+1;
        }
        else if(target<arr[mid]){
            right = mid-1;
        }
        mid = (left+right)/2;

    }
    return 0;
}
int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = sizeof(arr)/sizeof(int);
    int target = 90;
    cout<<locatetarget(arr,n,target);
    return 0;
}