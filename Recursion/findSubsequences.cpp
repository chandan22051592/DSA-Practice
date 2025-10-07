#include <iostream>
using namespace std;


void findSubsequence(string str, int idx, string newString){

    if(idx == str.length()){
        cout<<newString<<endl;
        return;
    }
    char currchar = str[idx];

    findSubsequence(str, idx+1, newString + currchar);
    findSubsequence(str, idx+1, newString);


}
int main(){
    string str = "abc";
    findSubsequence(str,0,"");
    return 0;

}