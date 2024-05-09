#include <iostream>
using namespace std;


void SearchElement(int arr[3][4],int row , int col,int target){
    for(int i=0 ; i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == target){
                cout<<"Element found at Row "<<i<<" & Column "<<j;
            }

        }
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
    int target;
    cout<<"Enter Value :";
    cin>>target;


    SearchElement(arr,row,col,target);

    return 0;
}