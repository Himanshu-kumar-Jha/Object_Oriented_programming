#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char *name;                                       //this memory we will accocate in heap dynamically so we have more space
    char level;

    Hero(){
        cout<<"Simple constructor called "<<endl;
        name=new char[100];                          //dynamic allocation of memory in heap at line 7
    }
    Hero(int health){
        this->health=health;
    }
    Hero(int health,char level){
        cout<<"THis "<<this<<endl;
        this->health=health;  
        this->level=level;                           //this->phone talks about the int  phone at line number 7 
    }

   Hero(Hero & temp){                            // our own copy constructor for deep copy
      char *ch=new char[strlen(temp.name)+1];
      strcpy(ch,temp.name);
      this->name=ch;
    }

    int getphone(){                             //getter function to access private member in  main
        return health;
    }
    void sethealth(int n ){                    //setter function to change private member in main
    this->health=n;
    }
    void printz(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"The level is: "<<this->level<<endl;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    void setlevel(char x){
        this->level=x;
    }
};
int main(){
    Hero h1;
    h1.sethealth(12);
    h1.setlevel('D');
    char name[9]="Himanshu";
    h1.setname(name);
    h1.printz();

    //use default copy constructor
   // Hero hero2(h1);
    Hero hero2=h1;

    hero2.printz();
    h1.name[0]='G';
    h1.printz();
    hero2.printz();              
    //Himanshu has changed to gimanshu in hero2 also where as change was made in h1 only this is due to the fact that char name is a pounter to the memory and h2 also holds the same address so changes made in h1 are also refelected in hero2 this is shallow copy.

    //for deepcopy we need to make our own constructor as in bulit copy constructor only does shallow copy.



    return 0;
}