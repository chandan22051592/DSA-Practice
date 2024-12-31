#include <iostream>
using namespace std;

int strLen(string str){
    int count=0;
    int n = str.size();
    for(int i=0;i<n;i++){
        count++;
    }
    return count;
}

int main(){
    string str = "hello";
    cout<<strLen(str);
    return 0;
}