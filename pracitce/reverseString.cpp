#include <iostream>
using namespace std;


void reverseStr(string &str){

    int i=0;
    int j=str.size()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }

}

int main(){
    string str = "Honey Singh";
    cout<<"Original String: " << str<<endl;
    reverseStr(str);
    cout<<"Reversed String: "<<str;
    return 0;
}