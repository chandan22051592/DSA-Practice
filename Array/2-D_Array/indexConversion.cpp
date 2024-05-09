#include <iostream>
using namespace std;

void linearIndex(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"of 2D index "<< i<<"," << j << " is present at :"<<(col*i)+j<<" index";
            cout<<"\n";

        }
        cout<<"\n";
    }

}
int main(){

    int arr[3][4] = {
        {10,20,30,40},
        {50,60,70,80},
        {90,100,110,120}
    };

    int col = 4;
    int row = 3;

    linearIndex(arr,row,col);

    return 0;
}