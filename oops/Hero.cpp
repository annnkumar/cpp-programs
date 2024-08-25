#include <iostream>
using namespace std;

class Hero {
    //properties
    private:
    int health;
    
    public :
    char level;
     
     int gethealth(){
        return health;
     }

     char getlevel(){
        return level;
     }

     void sethealth(int h){
        health = h;
     }

     void setlevel(char ch){
        level = ch;
     }
    void print(){
        cout<<health<<endl;
    }
    // constructor
   /* int x;
    public :
    Hero(){
        cout<<"Default constructur"<<endl;
    }
    Hero(int a){
        x=a;
        cout<<"constructor 1"<<endl;
    }*/

    //paramertarised constructer

    Hero(int health){
        
    }
    // Destructor 

    int *p;
    Hero (){
        p = new int ;
        cout<<"constructor of a"<<endl;
    }
     ~Hero(){
         delete p;
         cout<<"destrucor call"<<endl;
     }

    
};
 void fun(){
        Hero obj2;
     }

int main(){
    // creation of object
  //  Hero h1;
   // cout<<"size: "<<sizeof(h1)<<endl;
   Hero ramesh;
  // ramesh.health = 70;
  ramesh.sethealth(70);
   cout<<"Ramesh health is "<< ramesh.gethealth()<<endl;
   ramesh.setlevel('A');
   cout<<"HEalth is "<<ramesh.gethealth()<<endl;
   cout<<"level is "<<ramesh.level<<endl;
   // dynamically
   Hero*b = new Hero;
   cout<<"level is "<< (*b).level<<endl;
   cout<<"Health is "<<(*b).gethealth()<<endl;

   // alternatives 

   b-> setlevel('B');
   b->  sethealth(70);

   cout<< " level is "<<b-> level<<endl;
   cout<< " health is "<< b-> gethealth()<<endl;

   /// constructor

  // Hero obj1;
   //Hero obj(1);

   // destructor
   
   Hero obj;
   fun();
   cout<<"After fun"<<endl;
}