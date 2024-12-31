#include <iostream>
using namespace std;

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


int main(){
    cout<<"Press 1 for right pattern \nPress 2 for reversed right pattern \nPress 3 for full pyramid \nPress 4 for numbered right pattern \nPress 5 for numbered reversed pattern \nPress 6 for numbered full pyramid \nPress 7 for exit"<<endl;
    char option = 'Y';
    int n;
    while (option == 'Y')
    {
        cout<<"Enter Your Option :";
        cin >> n;

        switch (n)
        {
            case 1:
            rightPattern(4);
            break;

            case 2:
            reverseRightPattern(4);
            break;

            case 3:
            fullPyramid(4);
            break;

            case 4:
            numberedRightPattern(4);
            break;

            case 5:
            reversedNumberedRightPattern(4);
            break;

            case 6:
            numberedFullPyramid(4);
            break;

            case 7:
            cout<<"Exiting......";
            option = 'N';
            break;
        
            default:
            cout<<"Please Enter a valid number";
            break;
        }

        


        
    }
    
    
}