#include<bits/stdc++.h>
using namespace std;
class student{
private:
//all o fthe data members are private that's what encapsulation is
int roll;
int standard;
string name;
string address;
public:
void setroll(int x){
    this->roll=x;
}
void getroll(){
    cout<<this->roll<<endl;
}

};
int main(){
    student Himanshu;
    Himanshu.setroll(110);
    Himanshu.getroll();

    return 0;
}
