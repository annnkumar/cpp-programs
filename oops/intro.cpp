#include <iostream>
using namespace std;
class Hero
{
private:
    int health;
public:
    char level;
    Hero(int health){
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
};




int main(){
  Hero ramesh;
}