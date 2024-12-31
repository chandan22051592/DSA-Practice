#include <iostream>
using namespace std;

void swapUsingTwoVar(int a,int b){
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"a: " << a <<" b: "<<b<<endl;
    
}

void swapUsingThreeVar(int a,int b){
    int c = a;
    a=b;
    b=c;
    cout<<"\n"<<"swapped using 3 variable"<<endl;
    cout<<"a: " << a <<" b: "<<b;
}

int main(){
    int a = 10;
    int b = 20;
    swapUsingTwoVar(a,b); 
    swapUsingThreeVar(a,b);
    return 0;
}