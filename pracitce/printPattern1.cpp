#include <iostream>
using namespace std;

int main(){
    int numberOfLines;
    cout<<"Enter number of lines :";
    cin>>numberOfLines;
    cout<<"\n";

    for(int i=0;i<numberOfLines;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}