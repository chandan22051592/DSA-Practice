#include <iostream>
#include <string>
using namespace std;



void reverseUsingRec(string &str, int start, int end){
    if(start >= end){
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseUsingRec(str,start+1, end-1);
}
int main(){
    string str = "chandan";
    int start = 0;
    int end = str.size()-1;
    reverseUsingRec(str,start,end);
    cout<<str;

    return 0;
}