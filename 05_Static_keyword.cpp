#include<bits/stdc++.h>
using namespace std;
class Hero{
private:
int power;
int rank;
string name;

public:

static int time;     //this data member is independent of the class we don't need to access it by making an object we access it using
                     //scope resolution opertor (::)
void setpower(int k){
    this->power=k;
}
void setrank(int x){
    this->rank=x;
}
void set_name(string name){
    this->name=name;
}
void get_time(){
    cout<<this->time<<" "<<endl;
}

};
int Hero :: time=5;
int main(){
    //How to access a static member?
    //data_type class :: name_of_static_member=value
    cout<<Hero::time<<endl;  // this is the recommended format not by using the object as shown below
    Hero Himanshu;
    cout<<Himanshu.time<<endl;

    Himanshu.get_time();

    

    

    return 0;
}