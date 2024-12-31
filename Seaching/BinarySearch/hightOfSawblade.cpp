#include <iostream>
#include <vector>
using namespace std;

bool isPossibleSol(vector <long long int> trees, long long int m, long long int mid){
    long long int woodcollected = 0;
    for(int i =0 ; i<trees.size() ; i++){
        if(trees[i] > mid ){
        woodcollected += trees[i] - mid ;
        }

        
    }
    return woodcollected >= m;
        

}

long long int maxheight(vector <long long int> trees,long long int m){
    long long int s = 0,e=0;
    for(int i=0; i<trees.size();i++){
        if(trees[i]> e){
            e = trees[i];
        }
    }
   
    int ans = -1;

    while(s <= e){
        long long int mid = (s + e)/2;
        if(isPossibleSol(trees,m,mid)){
            ans = mid ;
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        
    }
    return ans;
}


int main(){
    long long int  m,n; // n = no. of trees & m = hieght of wood required
    cin >> n >> m;
    vector <long long int> trees;
    while(n--){
        long long int height;
        cin >> height;
        trees.push_back(height);
    }; 

    cout<< maxheight(trees,m)<<endl;

    return 0;
}