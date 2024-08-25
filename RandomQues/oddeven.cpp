#include <iostream>
using namespace std;
bool iseven(int a){
    if (a&1)
    {
        return 0;
    }
    return 1;
}
int main(){
    int num;
    cin>>num;

   int r = iseven(num);
   if (r==1)
   {
     cout<<"NUMber is even"<<endl;
   }
   else{
    cout<<"Number is odd"<<endl;
   }
   
}