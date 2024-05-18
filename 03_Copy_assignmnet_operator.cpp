#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int roll;

    public:

    string name;
    int age=21;
    int class_=12;
    void setname(string name){
        this->name=name;
    }
    void getname(){
        cout<<this->name<<" ";
    }
    void setroll(int roll){
        this->roll=roll;
    }
    void getroll(){
        cout<<this->roll<<" ";
    }
    void printz(){
        cout<<"Name "<<this->name<<" "<<endl;
        cout<<"roll "<<this->roll<<" "<<endl;
    }

    ~student(){
        cout<<"Object Distructed "<<endl;
    }

};

int main(){

student Him;
Him.setname("Himanshu kumar jha");
Him.setroll(101);
Him.printz();

student Him2;
Him2=Him;

Him2.printz();

Him2.setname("Sanchita");

Him2.printz();

student *Bizz=new student();  //for dyamically allocated objects we need to delete the objects by our own , in built destructor is not called.

delete Bizz;
    return 0;
}