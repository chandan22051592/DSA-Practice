#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value :";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int spc = 0;spc<n-(n-i);spc++){
            cout<<" ";

        }
        for(int str=0;str<n-i;str++){
            cout<<"* ";

        }
        cout<<"\n";
    }
    return 0;
}