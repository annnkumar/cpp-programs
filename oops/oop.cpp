
#include <iostream>
using namespace std;

class Hero {
    //properties
    private:
    int health;
    
    public :
    char level;
      Hero(int health){
        cout<<"this -> "<<this<<endl;
    this ->  health = health;
    }
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
 

int main(){
    // creation of object
  //  Hero h1;
   // cout<<"size: "<<sizeof(h1)<<endl;
   Hero ramesh(10);
   cout<<"Address of ramesh "<<&ramesh<<endl;
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

  
}