#include <iostream>
using namespace std;

int uniqueElement(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[] = {10,20,30,40,30,10,20};
    int n = 7;
    cout<<uniqueElement(arr,n);
  
    
    return 0;
}

