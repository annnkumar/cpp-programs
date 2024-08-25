#include <iostream>
using namespace std;

// int Hcf(int a, int b, int i){
//     if ((a%i && b%i)==0)
//     {
//         return i;
//     }
    
//     Hcf(a,b,i--);

//     return 1;
// }

int Hcf(int a , int b){
     if(a==0 ){
        return b;
     }

    return Hcf(b%a , a);

}

int main(){
    int a= 24;
    int b =60;
    // int i = min(a,b);
  int h  =  Hcf(a,b);
  
  cout<<h;
    
}