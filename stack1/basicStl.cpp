#include <iostream>
#include <stack>
using namespace std;
 void print(stack<int> st){
      while (st.size()>0)
      {
            /* code */
            cout<<st.top()<<" ";
            st.pop();
      }
      
 }
 void reverse(stack<int> &st){
      stack<int> gt;

      while (st.size()>0)
      {
            cout<<st.top()<<" ";
            gt.push(st.top());
            st.pop();
      }
      cout<<endl;
       while (gt.size()>0)
      {     
            cout<<gt.top()<<" ";
            st.push(gt.top());
            gt.pop();
      }
 }
 void pushAtBottom(stack<int> &st, int val){
      stack<int> temp;
      while(st.size()>0){
            temp.push(st.top());
            st.pop();
      }
      st.push(val);
       while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
      }
 }
 void pushAtIndex(stack<int> &st, int val, int idx){
      stack<int> temp;
      while(st.size()>idx){
            temp.push(st.top());
            st.pop();
      }
      st.push(val);
       while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
      }
 }
 void displayRev(stack<int> &st){
      if(st.size()==0 ) return;
      int x = st.top();
      cout<<x<<" ";
      st.pop();
      displayRev(st);
      cout<<endl;
      cout<<x<<" ";
      st.push(x);
 }
void pushAtBottomRev(stack<int> &st, int val){
      if(st.size()==0 ){ 
            st.push(val);
            return;  
      }
      int x = st.top();
      cout<<x<<" ";
      st.pop();
      displayRev(st);
      st.push(x);
 }

int main(){
      stack<int> st;
      st.push(10);
      st.push(20);
      st.push(30);
      st.push(40);
      st.push(40);
      st.push(40);
      
      cout<<st.size();
      cout<<endl;
      print(st);
      cout<<endl;
      reverse(st);
      cout<<endl;
      pushAtBottom(st,23);
      print(st);
      cout<<endl;
      pushAtIndex(st,99,2);
      cout<<st.size();
      cout<<endl;
      print(st);
}