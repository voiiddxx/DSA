//abstract class: abstract class is defined as the class which must contain atleast one pure virtiual function

//implementeation of abstract class or we can say implementeation of pure virtiual function

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    int x;
    
   virtual void fun() = 0;


};

class derived : public base{
    public:
    void fun(){
        cout<<"fun called";
    }
};
int main(){
    derived d1;
    d1.fun();
}