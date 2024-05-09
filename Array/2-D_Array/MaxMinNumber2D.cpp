#include <iostream>
#include <limits.h>
using namespace std;


int MaxElement(int arr[][4],int row, int col){
    int max = INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    return max;

}
int MinElement(int arr[][4],int row, int col){
    int min = INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    return min;

}
int main(){
    int arr[3][4] = {
        {10,20,30,1},
        {40,50,60,2},
        {70,80,90,3}
    };

    int row=3;
    int col=4;
    


    cout<<"Maximum Element :"<<MaxElement(arr,row,col)<<"\n";
    cout<<"Minimum Element :"<<MinElement(arr,row,col);

    return 0;
}