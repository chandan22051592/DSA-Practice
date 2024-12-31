#include <iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1] = key;
    }

}
void printsorted(int arr[],int n ){
    for(int i =0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    insertionsort(arr,n);
    printsorted(arr,n);
    return 0;
}