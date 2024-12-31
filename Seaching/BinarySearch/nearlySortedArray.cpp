#include <iostream>
using namespace std;

int findIndex(int arr[],int n,int target){
    int s=0;
    int e = n-1;
    int mid = s +(e-s)/2;
    int index =-1;
    while(s <= e){
        if(arr[mid-1] == target){
            return mid -1 ;

        }
        else if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid +1] == target){
            return mid +1;
        }

        if(target > arr[mid]){
            s = mid +2;
        }
        else{
            e = mid -2;
        }
        mid = s +(e-s)/2;

    }

        
    }

int main(){
    int arr[] = {20,10,30,50,40,70,60};
    int n =sizeof(arr)/sizeof(int);
    int target = 60;
    cout<<findIndex(arr,n,target);
    return 0;
}