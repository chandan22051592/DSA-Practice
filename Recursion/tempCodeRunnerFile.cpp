#include <iostream>
#include <string>
using namespace std;

int recur(string str, int n,char target){
    if(n>0){
        return -1;
    }
    if(str[n]==target){
        return n;

    }else{
        recur(str,n-1,target);
    }
    

} 
int main(){
    string str = "chandan";
    char ch = 'n';
    int n = str.size()-1;
    cout<<recur(str,n,ch)<<endl;
    return 0;
}