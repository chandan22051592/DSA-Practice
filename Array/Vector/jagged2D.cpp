#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector <vector<int>> arr(5,vector <int>(10,-1));
    vector <vector<int>> arr;

    vector <int> vec1(5,0);
    vector <int> vec2(6,1);
    vector <int> vec3(2,2);
    vector <int> vec4(7,4);
    vector <int> vec5(9,6);

    arr.push_back(vec1);
    arr.push_back(vec2);
    arr.push_back(vec3);
    arr.push_back(vec4);
    arr.push_back(vec5);

    for(int i =0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<"\n";
    }
    return 0;
}