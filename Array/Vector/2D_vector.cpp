#include <iostream>
#include <vector>
using namespace std;
int main(){
    //vector<vector <int>> arr -> vector of vector of name arr

    //arr(5 -> means array of 5 size

    //vector<int>(10,0)) -> means each vector contianer i.e. (total 5) will contain 10 blocks with value 0 and there will total
    // 50 blocks.


    vector<vector <int>> arr(5, vector<int>(10,-1)); // Here you can change defualt value from -1 to any other number


    //traversing 2d vector 
    for(int i= 0;i<arr.size();i++){ // arr.size() -> total rows of array
        for(int j=0;j<arr[i].size();j++){  // arr[i].size() -> total columns in each row
            cout<<arr[i][j]<<" ";



        }
        cout<<endl;
    }
    return 0;
}