#include <iostream>
using namespace std;
int f(int*arr , int idx, int n){
    if (idx == n-1) 
      return arr[idx];
  // return max(arr[idx],f(arr, idx+1,n));
  
  
    if (arr[idx]>f(arr, idx+1,n))
    return arr[idx];
    else return 
    f(arr,idx+1,n);
}
int main(){
   
   int arr[]= {49,43,8,44,3};
   int n = 5;
   cout<<f(arr, 0, n);
   return 0;
}