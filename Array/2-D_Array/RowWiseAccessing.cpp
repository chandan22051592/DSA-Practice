#include <iostream>
using namespace std;


void RowWiseAccess(int arr[3][4],int row , int col){
    for(int i=0 ; i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

}

void RowWiseSum(int arr[3][4],int row , int col){
    for(int i=0 ; i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum + arr[i][j];
        }
        cout<<"Sum for "<<i<<" row :"<< sum<<"\n";
    }

}
int main(){
    int arr[3][4] = {
        {10,20,30,1},
        {40,50,60,2},
        {70,80,90,3}
    };

    // int n=sizeof(arr)/sizeof(int);

    int row=3;
    int col=4;


    RowWiseAccess(arr,row,col);
    RowWiseSum(arr,row,col);

    return 0;
}