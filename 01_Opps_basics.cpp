#include<bits/stdc++.h>
using namespace std;
#include "mylib.cpp"
class Hero{
    //properties
    private:
    int phone=494;
    string name="Himanshu";
    int age;
    string dob;
    
    public:
        Hero(){  // our own constructor
       
        cout<<"Hello friends";
    }
    //paramatrised constructor
    Hero(int phone,string name){
        cout<<"THis "<<this<<endl;
        this->phone=phone;  
        this->name=name;                   //this->phone talks about the int  phone at line number 7 
    }

    Hero(Hero & temp){                            // our own copy constructor
       cout<<"copy constructor called"<<endl;
       this->phone=temp.phone;
       this->name=temp.name;
    }

    int getphone(){                             //getter function to access private member in  main
        return phone;
    }
    void setphone(int n ,string name){         //setter function to change private member in main
        if(name=="Himanshu")
        phone=n;
        else
        cout<<"Fuck you";
    }
    void printz(){
        cout<<this->phone<<endl;
        cout<<this->name<<endl;
    }

};
int main(){
  Hero Himanshu;
  cout<<sizeof(Himanshu)<<endl; //total space of properties like string+int+float etc
                               //In case of empty class where there are no properties the sizeof(object_name) is 1;
  Hero golu;
  Hero papa;
  cout<<"size of golu is "<<sizeof(golu)<<endl;
  cout<<"size of papa is "<<sizeof(papa)<<endl;
  golu.setphone(748,"Himanshu");
  cout<<endl;
  cout<<papa.getphone();
  cout<<golu.getphone();

  //dynamically declared object vs statically declared object

   Hero *H=new Hero;     // the memory is allocate din heap
   cout<<"Phone number is "<<(*H).getphone()<<endl;     //need to deref H as H is holding the memory address

   Hero P;
   cout<<"P ka number is "<<P.getphone()<<endl;              //other way to write this is P->getphone()


   //To be continued with constructor
   // paramtrised constructor
   Hero bb(232324,"brrrr");
   cout<<"Bb ka address "<<&bb<<endl;
   cout<<"BB ka number "<<bb.getphone();

   Hero good_boy;
   cout<<good_boy.getphone();

   //copy constructor
   Hero shlok(6969,"shlok");
   shlok.printz();
   Hero Harshil(shlok);  //copy constructor called here
   Harshil.printz();











  




    return 0;
}