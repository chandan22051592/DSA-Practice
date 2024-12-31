#include <iostream>
#include <vector>
using namespace std;
void bubblesort(vector<int> &v,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;++j){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }

        }
    }
}
void printsorted(vector<int> &v, int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" "<<"\n";
    }
}

int main(){
    vector<int> v = {10,20,32,12,8,4};
    int n =v.size();

    bubblesort(v,n);
    printsorted(v,n);
    return 0;
}