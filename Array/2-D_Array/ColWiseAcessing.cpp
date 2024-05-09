#include <iostream>
using namespace std;


void PrintColWise(int arr[3][4],int row , int col){
    for(int i=0 ; i<col;i++){
        for(int j=0;j<row;j++){

            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }

}
int main(){
    int arr[3][4] = {
        {10,20,30,1},
        {40,50,60,2},
        {70,80,90,3}
    };

 

    int row=3;
    int col=4;


    PrintColWise(arr,row,col);

    return 0;
}