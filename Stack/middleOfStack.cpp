#include <iostream>
#include<stack>
using namespace std;

class K
{
    public:
    int solve(stack<int> &st, int pos)
    {
        int temp = -1;
        if (pos == 1)
        {
            return st.top();
        }

        temp = st.top();
        st.pop();

        int ans = solve(st, --pos);
        st.push(temp);
        return ans;
    }
};

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    int pos = (st.size()%2==0) ?  (st.size()/2) : (st.size()/2+1);
    K obj;
    cout<<obj.solve(st,pos)<<endl;
}
