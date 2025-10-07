#include <iostream>
#include <vector>      
using namespace std;

class K{
public:
    vector<int> arr;
    int top1 = 0;
    int top2 = arr.size()-1;


    K(int size) : arr(size, 0) { // initialize vector with `size` zeros
        top1 = 0;
        top2 = arr.size() - 1;
    }

    void push1 (int data){
        if(top1 < top2){
            arr[top1] = data;
            top1++;
            cout<<"push1 success"<<endl;
        }
        else{
            cout<<"Stack overflow !! 1"<<endl;
        }
    
    }

    void push2 (int data){
        if(top2>top1){
            arr[top2] = data;
            top2--;
            cout<<"push2 success"<<endl;
            
        }else{
            cout<<"Stack overflow !! 2 "<<endl;
        }
    
    }

    void pop1(){
        if(top1 > 0 ){
            arr[top1] = 0;
            top1--;
            if(top1<1){
                top1 = 0;
            }
            cout<<"stack1 popped !!"<<endl;

        }else{
            cout<<"can't pop from stack 1 " <<endl;
        }
    }

    void pop2(){
        if(top2 >=0 ){
            arr[top2] = 0;
            top2++;
            if(top2>=arr.size()){
                top2 = arr.size();
            }
            cout<<"stack1 popped !!"<<endl;
        }
        else{
            cout<<"can't pop from stack2"<<endl;
        }
    }

    void printArray(){
        for(int x : arr){
            cout<< x << " ";
        }
    }

};

int main(){

    K obj(6);
    obj.pop1();
    obj.push2(10);
    obj.push2(20);
    obj.push2(45);
    obj.push1(54);
    obj.push1(20);
    obj.push1(1);
    obj.push1(1);
    obj.push1(1);
    obj.printArray();
    return 0;
}