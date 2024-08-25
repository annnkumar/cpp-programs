#include <iostream>
using namespace std;

class student{
     public:
     string name;
     int rno;
     float marks;
     student(string name, int rno){
        this-> name = name;
        this->rno = rno;
     }
};

void change(student*s){
      s->name = "Harsh";
}

int main(){
      student *s = new student("Ragahv",76);
      s->marks = 92.6;
      cout<<s->name<<endl;
      change(s);
      cout<<s->name<<endl;
}