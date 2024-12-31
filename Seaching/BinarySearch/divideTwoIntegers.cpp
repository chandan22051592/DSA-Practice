#include <iostream>
using namespace std;

int getq(int dividend,int divisor){
        int s  =0;
        int e  = dividend;
        int mid = s + (e-s)/2;
        int ans;
        while(s <= e){
            if(mid * divisor == dividend){
                ans = mid;
            }
            else if(mid * divisor < dividend){
                ans = mid;
                s = mid +1;
            }
            else if (mid * divisor > dividend){
                e = mid -1;
            }
            mid = s + (e-s)/2;

        }
        return ans;
    }

int main(){
    int dividend =21;
    int divisor = 2;
    cout<<getq(dividend,divisor);
    return 0;
}
