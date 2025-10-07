#include <iostream>
#include <vector>
#include <unordered_map>   
using namespace std;

int prefixCount(int arr[],int n, int k){
    int count = 0;
    vector<int> prefixSum(n,0);
    prefixSum[0] = arr[0];

    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+arr[i];
    }

    unordered_map<int,int> m;
    m[0]=1;

    for(int j=0;j<n;j++){
        if(prefixSum[j]==k)count++;

        int val = prefixSum[j]-k;

        if(m.find(val)!=m.end()){
            count += m[val];
        }

        m[prefixSum[j]]++;
    }
    return count;
}


int main(){
    int arr[] = {10,2,-2,-20,10};
    int target = -10;
    int n= sizeof(arr)/sizeof(int);
    cout<<prefixCount(arr,n,target);
    // system("pause");
}
