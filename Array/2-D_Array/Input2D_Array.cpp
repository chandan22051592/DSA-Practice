#include <iostream>
using namespace std;

void show(int arr[3][3]){
    cout<<"\nPrinting 2d array\n";
    for(int i= 0;i<3;i++){
        for(int j = 0;j<3;j++){
            
            cout<<arr[i][j]<<" ";
            
        }
        cout<<"\n";
    }

}
int main(){

    int arr[3][3];

    for(int i= 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<"Enter value for "<<i<<","<<j <<" :";
            cin>>arr[i][j];
        }
    }

    show(arr);
    return 0;
}