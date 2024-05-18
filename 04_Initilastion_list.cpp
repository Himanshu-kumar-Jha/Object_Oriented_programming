#include<bits/stdc++.h>
using namespace std;
class person{
private:
int val1;
int val2;
int val3;

string name;
string state;
public:
person(int v1, int v2, int v3):val1(v1) , val2(v2) , val3(v3){
    cout<<"constructor called "<<endl;

}

};
int main(){
person himanshu(10,12,13);

    return 0;
}