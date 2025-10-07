#include <iostream>
#include<vector>
using namespace std;

class Stack{
private:
    int capacity;
    int top;
    vector<int>arr;

public:
    Stack(int capacity){
        this->capacity = capacity;
        cout<<"constructor capacity :"<<this->capacity<<endl;
        this->top = -1;
    }
    // getTop()
    void getTop(){
        if(top==-1){
            cout<<"No Element in Stack"<<endl;
            return;
        }

        cout<<"Element at the Top is : "<< arr[top]<<endl;
        
    }

    // push
    void push(int data){
        if(capacity==top+1){
            cout<<"StackOverflow , can't insert element"<<endl;
            return;
        }
        top++;
        arr.push_back(data);
        

        cout<<"Element inserted successfully" << endl;
        // cout<<capacity <<" : " <<top <<endl;
    }

    void pop(){
        if(top == -1){
            cout<<"StackUnderFlow, can't pop elements"<<endl;
            return;
        }
        arr.pop_back();
        top--;
        cout<<"Element popped Successful"<<endl;

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;

    }

    int getSize(){
        return arr.size();
    }
    
};

int main(){
    Stack s(2);
    s.pop();//fails
    s.push(10);//success
    s.push(20);//success
    s.push(30);//overflow
    s.getTop();//20
    s.pop();//success
    s.push(30);//success
    s.getTop();//20
    s.isEmpty()?cout<<"Empty":cout<<"non empty"<<endl;
    cout<<"size of stack:" << s.getSize()<< endl;
    s.pop();
    s.pop();
    s.isEmpty()?cout<<"Empty":cout<<"non empty"<<endl;
}