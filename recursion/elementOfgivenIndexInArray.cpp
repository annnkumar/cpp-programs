#include<iostream>
#include<vector>
using namespace std;

int index(int arr[], int idx ,int n,int k){
    if(idx==n){
        return -1;
    }

    if(arr[idx]==k) return idx;
    index(arr,idx+1,n,k);

  //  return -1;
}

int main(){
   
int arr[5] = {1,2,3,4,5};
int n = 5;
int k = 40;
 cout<< index(arr, 0, n,k);

return 0;

}