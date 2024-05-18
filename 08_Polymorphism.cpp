#include<bits/stdc++.h>
using namespace std;

//Polymorphism means existing in many staes at same time 
//Imagine your your dad , he is a husband to someone , he is son to someone and father to someone at the same times is called polymorphism . There are teo type of polymorphism one is run time and other is compile time.
//compile time polymorphism
//it happnes in two ways by operator overloading and function overloading .

//FUNCTION OVERLOADING 
class Kitkat{
public:
void speak(){
    cout<<"Hello guys "<<endl;
}
void speak(string k){
    cout<<"Hello "+k<<endl;
}
/*int speak(){ //chaing the return type dosn't hepls
    cout<<"Hola Amigo"<<endl;
    return 1;
}*/
};

//OPERATOR OVERLOADING 
//Like when I do a+b it should do a-b;
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+(B & obj){
        int val1=this->a;
        int val2= obj.a;
        cout<<"output"<<val2-val1<<endl;
    }
    void operator() (){
        cout<<"I am Bracket "<<this->a<<endl;
    }
};

int main(){
Kitkat oreo;
oreo.speak("Himanshu");

//Operator overloading

B obj1 ,obj2;
obj1.a=4;
obj2.a=7;
cout<<endl;
obj1+obj2;
obj1();

    return 0;
}

