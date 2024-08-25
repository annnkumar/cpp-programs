#include <iostream>
using namespace std;

int main()
{
  int n,remainingamount;
  cout<<"Enter amount :- "<<endl;
  cin>>n;
  int hun = 0;
  int fif= 0;
  int tw =0;
  int ten= 0;

  while (n>=100)
  {
    n = n -100;
     hun++;
  }
  while (n>=50)
  {
    n=n-50;
    fif++;
  }
  while (n>=20)
  {
    n = n-20;
    tw++;
  }
  while (n>=10)
  {
     n = n-10;
     ten++;
  }
  
  cout<<"Number of hundred notes :- "<<hun<<endl;
  cout<<"Number of fifty notes :- "<<fif<<endl;
  cout<<"Number of twenty notes :- "<<tw<<endl;
  cout<<"Number of ten notes :- "<<ten<<endl;

  return 0;

}