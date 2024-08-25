#include <iostream>
using namespace std;
bool f(int*arr , int n , int x, int i){
   if (i==n)
   {
    return false;
   }
   return (arr[i]==x || f(arr ,n ,x,i+1));
    
}
    int main(){
        int arr[]= {1,2,3,4,5};
        int n=5;
        int x = 3;
        bool results = f(arr,n,x,0);
        if (results==1)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        return 0;
    }
