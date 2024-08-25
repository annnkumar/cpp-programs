#include <iostream>
using namespace std;
int main(){
    int n,sum = 0,i=1;
    cout<<"Enter a number "<<endl;
    cin>>n;
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout<<"Sum of n number is :- "<<sum;
    return 0;
}