#include <iostream>
using namespace std;
int f(int a, int b){
    if (b==0)   return 1;
    return a*f(a,b-1);
    
}
int main(){
    int result = f(3,4);
    cout<<result;
}
