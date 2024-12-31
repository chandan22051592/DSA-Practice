#include <iostream>
using namespace std;
void selectionsort(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j = i +1; j<n;j++){
            if(arr[j]<arr[i]){
                temp = j;
            }

        }
        swap(arr[i],arr[temp]);
    }

}
void printsorted(int arr[],int n ){
    for(int i =0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {10,4,3,2,5,32,50,2};
    int n = sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
    printsorted(arr,n);
    return 0;
}