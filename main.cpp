#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout<<"value of a is :"<<a<<endl;
    cout<<"addres of a is :"<<&a<<endl;
    cout<<"address of *p is " <<p<<endl;
    cout<<"derefrancing p "<< *p<<endl;
    cout<<"(p+1) :"<<(p+1)<<endl;
    cout<<"(p+2) :"<<(p+2)<<endl;
    cout<<"*(p+2) :"<<*(p+2)<<endl;


    return 0;
}