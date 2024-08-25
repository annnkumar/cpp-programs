#include <iostream>
#include <stack>
using namespace std;

void f(stack<int>&st, int x){
    if (st.empty())
    {
        st.push(x);
        return;
    }
    int curr = st.top();
    st.pop();
    f(st,x);
    st.push(curr);
}
void reverse(stack<int> &st){
    if (st.empty())
    {
        return;
    }
    int curr = st.top();
    st.pop();
    reverse(st);
    f(st,curr);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);
    while (not st.empty())
    {
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}