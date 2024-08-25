#include <iostream>
#include<vector>
using namespace std;

void sumIn(vector<int> arr, int n){
    if(n==0) return;
    vector<int> temp(n-1);
    for (int i = 0; i < arr.size(); i++)
    {
       cout<<arr[i]<<" ";
       if(i!=0){
          temp[i-1] = arr[i-1] + arr[i];
       }
    }
    cout<<endl;
    sumIn(temp,n-1);
    
}
int main(){
    int n;
cin >> n;
vector<int> arr(n);
for(int i = 0; i < n; ++i) {
  cin>>arr[i];
}

sumIn(arr,n);


}