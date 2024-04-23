#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter height(line) of pyramid ";
    cin>>n;
    for(int i=0;i<n;i++){

      // for space n-row-1
        for(int col=0;col<n-i-1;col++){
            cout<< " ";
        }
      // for star row + 1
        for(int str = 0; str < i+1;str++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;git remote add origin https://github.com/chandan22051592/DSA-Practice.git
}