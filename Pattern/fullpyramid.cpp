#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number :";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int col = 0;col<n-i-1;col++){
            cout<<" ";

        }
        for(int str = 0;str< i+1;str++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}