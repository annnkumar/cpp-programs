// pop ans pus
// idx 0   1  2   3  4 5  6  7
//arr  100 80 60 81 70 60 75 85
//pge -1 100 80 100 81 70 81 100
//ans  1  1   1  3  1   1  3  7

#include <iostream>
#include<stack>
using namespace std;

int main(){
      int arr[] = {100,80,60,81,70,60,75,85};
      int n = sizeof(arr)/sizeof(arr[0]);
      for (int i = 0; i < n; i++)
      {
            cout<<arr[i]<<" ";
      }
      cout<<endl;

      int nge[n];
      int pgi[n];
      int span[n];
      stack<int> st;
       
       
       pgi[0] = -1;
       st.push(0);
       for (int i = 1; i<n; i++)
       {
            /* code */
            
            while (st.size()>0 && arr[st.top()] <= arr[i])
            {
                  st.pop();
            }
            //if(st.size()==0) nge[i] = -1;
            pgi[i] = st.top();
            st.push(i);

       }
       for (int i = 0; i < n; i++)
       {
           span[i] = i - pgi[i];
       }
       


      for (int i = 0; i < n; i++)
      {
            cout<<span[i]<<" ";
      }
      cout<<endl;
      
}