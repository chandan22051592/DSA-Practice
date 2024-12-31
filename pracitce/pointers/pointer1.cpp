#include <iostream>
using namespace std;

int main(){
    // wild pointer(will store garbage value/address)
    int *wp ;
    cout<<wp<<endl;


    // void pointer 
    void *ptr;
    int x = 10;
    ptr = &x;
    int* intptr = static_cast<int*>(ptr);
    *intptr = 20;
    cout<<*intptr;


    // Dangling pointer (afte initialization)
    int *dptr = new int;
    *dptr = 20;
    delete dptr;
    cout<<*dptr<<endl;

    return 0;


   

}