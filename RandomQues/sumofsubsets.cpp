#include <iostream>
#include <vector>
using namespace std;
void f(int*arr,int n,int sum,int i, vector<int> &results){
    if (i==n)
    {
        results.push_back(sum);
        return;
    }
    f(arr,n,sum+arr[i],i+1,results);
    f(arr,n,sum,i+1,results);
}
int main(){
    int arr[] = {2,4,5};
    int n = 3;
    vector<int> results;
    f(arr,n,0,0,results);
    
    for (int i = 0; i < results.size(); i++)
    {
       cout<<results[i]<<" ";
    }
    return 0;
}