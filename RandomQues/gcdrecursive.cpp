#include <iostream>
using namespace std;
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
    
}