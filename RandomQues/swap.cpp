#include <iostream>
using namespace std;

// call by reference
 void swap(int x, int y)
{
   int temp;
   temp = x;
   x= y;
   y = temp;
}
int main(){
    int x = 10;
    int y = 20;
    //cin>>x;
    //cin>>y;

    swap(x, y);

    cout<<x<<" "<<y;
    return 0;
}

