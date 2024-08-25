#include <iostream>
#include <vector>
using namespace std;
void zeroatend(vector<int> &v){
    int n = v.size();
    int count = 0;
     for (int i = n-1; i >0; i--)
     {
        int j =0;
        while (i!=j)
        {
            /* code */
            if (v[j]==0 && v[j+1]!=0)
            {
                swap(v[j],v[j+1]);
            }
            j++;
        }
        
        
     }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    zeroatend(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}