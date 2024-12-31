#include <iostream>
using namespace std;


int bs(int arr[],int s,int e, int x){
    
    while(s<=e){
        int mid = s + (e-s)/2;
        
        if(arr[mid] == x){
            return mid;

        }
        else if ( arr[mid] > x){
            e =mid -1;
            
        }
        else{
            s = mid +1;
            
        }
    }
    return -1;

}


int exp(int arr[],int n,int x){
    if(arr[0]== x)return 0;
    int i =1 ;
    while(i<n && arr[i] <= x){
        i = i*2;

    }
    return bs(arr,i/2,min(i,n-1),x);
}




int main(){
    int arr[] = {3,4,5,6,11,13,14,56,70};
    int n = sizeof(arr)/sizeof(int);
    int x =13;
    int ans = exp(arr,n,x);
    cout<<ans<<endl;
    cout<<arr[ans];
   return 0;
}