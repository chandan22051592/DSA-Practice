#include <iostream>
using namespace std;

int getPairs(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i]<<","<<arr[j]<<"\n";
            
        }
        cout<<"\n";
    }

}
int main(){
    int arr[] = {10,20,30,40};
    int n= sizeof(arr)/sizeof(int);
    getPairs(arr,n);
    return 0;
}