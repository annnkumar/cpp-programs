#include <iostream>
using namespace std;

// pass by reference
 void swap(int* x, int* y)
{
   int temp;
   temp = *x;
   *x= *y;
   *y = temp;
}
int main(){
    int x = 10;
    int y = 20;
    //cin>>x;
    //cin>>y;
    int *p1=&x;
    int *p2=&y;
    swap(&x, &y);

    cout<<x<<" "<<y;
    return 0;
}