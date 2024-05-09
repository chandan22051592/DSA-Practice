#include <iostream>
using namespace std;

void wave(int arr[3][4],int row,int col){
    for(int i = 0 ;i<col;i++){
        if(i%2==0){
            for(int j = 0; j<row;j++){
                cout<<arr[j][i]<< " ";
            }
        }
        else{
            for(int j = row-1; j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<"\n";


    }
}
int main(){
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}

    };
    int row = 3;
    int col = 4;

    wave(arr,row,col);
    return 0;
}