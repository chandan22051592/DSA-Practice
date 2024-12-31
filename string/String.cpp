#include <iostream>
using namespace std;

class StringUtils{
private:
    void reverse(string &str){
        int i=0;
        int j = str.size()-1;
        while(i<j){
            swap(str[i],str[j]);
            i++,j--;
        }
    }

public:
    string upperToLower(string str=" "){
        string ans;

        for(int i=0;i<str.size();i++){
            char ch = str[i];
            if(str[i]>=int('A') && str[i]<=int('Z')){
                ch += 32;
            }
            ans.push_back(ch);   
        }
        return ans;
    }

    string lowerToUpper(string str=" "){
        string ans;

        for(int i=0;i<str.size();i++){
            char ch = str[i];
            if(str[i]>=int('a') && str[i]<=int('z')){
                ch -= 32;
            }
            ans.push_back(ch);   
        }
        return ans;
    }

    int stringToNum(string str){
        int num =0;
        int multiplier=1;

        for(int i=str.size()-1;i>=0;i--){
            if(str[i] >= 48 && str[i]<=57){
                num += (str[i] - '0')*multiplier;
                multiplier *= 10;
                
            }
            else{
                cout<<"Please Enter A valid Integer string"<<endl;
                return -1;
            }
        }

        return num;
    }

    string numToString(int num){

        string ans= "";

        if (num == 0) {
            return "0";  
        }

        while (num > 0) {
            int singleNum = num % 10;
            char ch = (char)(singleNum + '0');
            ans.push_back(ch);
            num /= 10;
        }

        reverse(ans);  
        return ans;
        
    }

};


int main() {
    
    StringUtils utils;

    
    char str1[] = "HELLO";
    cout << "Upper to Lower: " <<   utils.upperToLower(str1) << endl;

    char str2[] = "world";
    
    cout << "Lower to Upper: " << utils.lowerToUpper(str2) << endl;

  
    char str3[] = "328732";
    cout << "String to Num: " << utils.stringToNum(str3) << endl;


    
    cout << "Num to String: " << utils.numToString(1000) << endl;

    return 0;
}


