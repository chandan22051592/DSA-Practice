#include <iostream>
using namespace std;

int locatefirsttarget(int arr[],int n,int target){
    int left=0;
    int right=n-1;
    //best Practice
    int mid = left + (right-left)/2;
    
    while(left <= right){
        
        if(target==arr[mid] && target!=arr[mid-1]){
            return mid;
        }
        else if(target == arr[mid-1]){
            mid=mid-1;
            continue;

        }
        else if(target>arr[mid]){
            left = mid+1;
        }
        else if(target<arr[mid]){
            right = mid-1;
        }
        mid = left + (right-left)/2;

    }
    return -1;
}

int locatelasttarget(int arr[],int n,int target){
    int left=0;
    int right=n-1;
    //best Practice
    int mid = left + (right-left)/2;
    
    while(left <= right){
        
        if(target==arr[mid] && target!=arr[mid+1]){
            return mid;
        }
        else if(target == arr[mid+1]){
            mid=mid+1;
            continue;

        }
        else if(target>arr[mid]){
            left = mid+1;
        }
        else if(target<arr[mid]){
            right = mid-1;
        }
        mid = left + (right-left)/2;

    }
    return -1;
}

int total(int arr[],int n,int target){
    int first = locatefirsttarget(arr,n,target);
    int  last= locatelasttarget(arr,n,target);
    int total = last - first + 1;
    return total;

}
int main(){
    int arr[] = {30,30,30,30,50,50,70,80,90};
    int n = sizeof(arr)/sizeof(int);
    int target = 30;
    cout<<"\nfirst Occurance :"<<locatefirsttarget(arr,n,target);
    cout<<"\nLast Occurance :"<<locatelasttarget(arr,n,target);
    cout<<"\nTotal Occurance :"<<total(arr,n,target);
    return 0;
}