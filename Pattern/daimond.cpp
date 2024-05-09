#include <iostream>
using namespace std;
int main(){
    int a,n;
    cout<<"Enter Value :";
    cin>>a;

    n=a*2;
    int col=0;
    int row=0;
    

    while(n>0){
        if(n>a){
            for(int i=0;i<a-row-1;i++){
                cout<<" ";
            }
            for(int j=0;j<col+1;j++){
                cout<<"* ";
            }
            

        }
        else if(n<=a){
            for(int i=0;i<a-n;i++){
                cout<<" ";
            
            }
            for(int j = 0;j<n;j++){
                cout<<"* ";
            }

        }
        else{
            cout<<"Please Enter Correct Value ";
        }
        
        col++;
        row++;


        n--;
        cout<<" \n";
    }
    return 0;
}