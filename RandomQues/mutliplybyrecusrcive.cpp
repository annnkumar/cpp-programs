#include <iostream>
using namespace std;
void f(int p , int q){
     if (q==0)
     {
        return;
     }
    f(p,q-1);
    cout<<p*q<<" ";

}
int main(){
    f(12,5);
    return 0;
}