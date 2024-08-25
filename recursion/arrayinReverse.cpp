#include <iostream>
using namespace std;

void reverse(int arr[] , int n, int idx){
   
    if(idx==n){
        // cout<<arr[idx]<<" ";
        return;
    }
     

   reverse(arr,n,idx+1);
   cout<<arr[idx]<<" ";
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    reverse(arr,n, 0);
}