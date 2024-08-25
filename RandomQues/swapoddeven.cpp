#include <iostream>
#include <vector>
using namespace std;

 void shortevenodd(vector<int> &v){
    int i=0;
    int j = v.size()-1;
    while (i<j)
    {
        
    
    
    if (v[i]%2==1 && v[j]%2==0)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }
     if (v[i]%2==0)
    {
        i++;
    }
    if(v[i]%2==1){
        j--;
    }
    //return ;
   }

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
    shortevenodd(v);

    for (int i = 0; i < n ;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}