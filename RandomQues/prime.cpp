#include <iostream>
using namespace std;
bool isprime(int n){
     for (int i = 2; i < n; i++)
     {
        if (n%i==0)
        {
            return 0;
        }
        
     }
     return 1;
}
int main(){
   int num;
   cin>>num;

  int r = isprime(num);
   if (r==1)
   {
     cout<<"given number is prime number"<<endl;
   }

   else{
    cout<<"Not a primr number "<<endl;
   }
   
}