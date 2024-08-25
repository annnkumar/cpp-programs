#include <iostream>
using namespace std;
int factorial(int f){
    int fac = 1;
    for (int i = 1; i <= f; i++)
    {
        fac = fac*i;
    }
    return fac;
}
int ncr(int n ,int r){
    int num = factorial(n);
    int den = factorial(r)*factorial(n-r);
    
    int ans = num/den;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<"Ncr :-  "<<ncr(n,r)<<endl;
}