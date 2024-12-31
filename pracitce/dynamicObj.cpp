#include <iostream>
using namespace std;


class dynamicObj
// pattern
{
private:
    int option;
    int Plines;
    void rightPattern(int numberOfLines){
        for(int i=0;i<numberOfLines;i++){
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
            cout<<"\n";
        }
    }

    void reverseRightPattern(int numberOfLines){
        for(int i=0;i<numberOfLines;i++){
            for(int j=0;j<=numberOfLines-i-1;j++){
                cout<<"  ";
            }

            for(int k=0;k<=i;k++){
                cout<<"* ";

            }
            cout<<"\n";
        }
    }

    void fullPyramid(int numberOfLines){
        for(int i=0;i<numberOfLines;i++){
            for(int j=0;j<=numberOfLines-i-1;j++){
                cout<<" ";
            }

            for(int k=0;k<=i;k++){
                cout<<"* ";

            }
            cout<<"\n";
        }
    }

    void numberedRightPattern(int numberOfLines){
        for(int i=0;i<numberOfLines;i++){
            for(int j=0;j<=i;j++){
                cout<<i+1<<" ";
            }
            cout<<"\n";
        }
    }

    void reversedNumberedRightPattern(int numberOfLines){
        for(int i=0;i<numberOfLines;i++){
            for(int j=0;j<=numberOfLines-i-1;j++){
                cout<<"  ";
            }

            for(int k=0;k<=i;k++){
                cout<<i+1<<" ";

            }
            cout<<"\n";
        }
        
    }

    void numberedFullPyramid(int numberOfLines){
        for(int i=0;i<numberOfLines;i++){
            for(int j=0;j<=numberOfLines-i-1;j++){
                cout<<" ";
            }

            for(int k=0;k<=i;k++){
                cout<<i+1<<" ";

            }
            cout<<"\n";
        }
        
    }

        

public:

    dynamicObj(int n,int lines){
        option = n;
        Plines = lines;

        switch (option)
        {
            case 1:
                rightPattern(Plines);
                break;

            case 2:
                reverseRightPattern(Plines);
                break;

            case 3:
                fullPyramid(Plines);
                break;

            case 4:
                numberedRightPattern(Plines);
                break;

            case 5:
                reversedNumberedRightPattern(Plines);
                break;

            case 6:
                numberedFullPyramid(Plines);
                break;
        
            default:
                cout<<"Please Enter a valid number";
                break;
        }
        
    }

    

    
};

int main(){

    cout<<"Press 1 for right pattern \nPress 2 for reversed right pattern \nPress 3 for full pyramid \nPress 4 for numbered right pattern \nPress 5 for numbered reversed pattern \nPress 6 for numbered full pyramid \nPress 7 for exit"<<endl;
    char option = 'Y';
    int n;
    int numberOfLines;

    while (option == 'Y'){
        cout<<"Enter Your Option :";
        cin >> n;

        if(n>=7){
            break;
        }

        cout<<"Enter Number Of Lines :";
        cin>>numberOfLines;

        dynamicObj* obj = new dynamicObj(n,numberOfLines);
        delete obj;
    }
    

}

