#include<bits/stdc++.h>
using namespace std;
class Animals{
    public:
    //animal constructor
    string name;
    int age;
    bool alive;
    Animals(string n,int x ,bool f ):name(n),age(x),alive(f) {}

    void setname(string name){
        this->name=name;
    }
    void setage(int n){
        this->age=n;
    }
    void isalive(bool x){
        this->alive=x;
    }
    void printf(){
        cout<<"Name is "<<this->name<<endl;
        cout<<"Age is "<<this->age<<endl;
        cout<<"Alive is "<<this->alive<<endl;
    }

};
int main(){
    Animals dog("DOGO",12,true);
    dog.printf();
    Animals Lion=dog;
    Lion.setname("gogo");
    Lion.printf();


    return 0;
}