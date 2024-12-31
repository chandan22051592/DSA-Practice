#include <iostream>
using namespace std;
int oddOccur(int arr[],int n){
    int s=0;
    int e = n-1;
    int mid = s + (e-s) + 2;
   
    while(s <= e){
        if(s == e){
            return s;
        }

        // to check odd value() ; 
        if(mid & 1){//true -> odd
            if(arr[mid -1] == arr[mid]){
                s =mid +1;
            }else{
            e = mid -1;
            }
        }
        else{
            if(arr[mid] == arr[mid + 1]){
                s= mid + 2; // mid +1 has been checked above 

            }
            else{
                e =mid;
            }
        }
        mid = s + (e-s) + 2;
    }
    return -1;
}
int main(){
    int arr[] = {1,1,5,5,2,2,3,3,2,4,4};
    int n =sizeof(arr)/sizeof(int);
    cout<<oddOccur(arr,n);
    return 0;
}