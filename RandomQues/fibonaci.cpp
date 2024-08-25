#include <iostream>
using namespace std;

int fibonaci(int n){
    int a= 0;
    int b= 1;
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = a+b;
        a=b;
        b=sum;
    }
    return sum;
}
int main(){
    int m;
    cin>>m;

  int  s= fibonaci(m);
 
     cout<<"sum of fibonaci series is :- "<<s<<endl;
}