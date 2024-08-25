#include <iostream>
using namespace std;

int powe(int p, int q){
    if (q==0)   return 1;
    return p*f(p,q-1);
    
}
 int f(int n , int d){
    if (n==0){
        return 0;
    }
    return powe(n%10,d) + f(n/10,d);
 }
int main(){
    int n;
    cin>>n;

    int no_of_digits = 0;
    int temp = n;
    while (temp>0)
    {
        n=n/10;
        no_of_digits++;
    }
    int result  = f(n,no_of_digits);
    if (result == n)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}