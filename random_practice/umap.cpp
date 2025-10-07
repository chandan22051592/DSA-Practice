#include <iostream>
#include <unordered_map>
using namespace std;


int main(){
    unordered_map<string,int> umap;
    umap["aman"] = 10;
    umap["krish"] = 20;
    umap["ankit"] = 30;
    umap["suresh"] = 40;

    
    
    if(umap.find("suresh")==umap.end()){
        umap["kim"] = 40;
    }

    for(auto x = umap.begin();x!=umap.end();x++){
            cout<<x ->first <<" "<<x->second<<endl;;

    }


}