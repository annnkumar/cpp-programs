#include <iostream>
#include <vector>
using namespace std;
 bool checksufixprefix(vector<int> &v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum = sum + v[i];
    }
    int presum= 0;
    
    for (int i = 0; i < v.size(); i++)
    {
        presum = presum + v[i];
       int  sufsum = sum -presum;
     if (presum==sufsum)
    {
        return true;
    }

    }
    
    
    return false;
 }
int main(){
    int n;
    cin>>n;
     vector<int> v;
     for (int i = 0; i < n; i++)
     {
        int ele;
        cin>>ele;
        v.push_back(ele);
     }
     
     cout<<checksufixprefix(v)<<endl;
     return 0;
}