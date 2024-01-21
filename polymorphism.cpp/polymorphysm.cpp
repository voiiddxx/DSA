//polymorphysm : by the name indicate poly meany many and morphism means many forms by all means that a single element have many forms 

//realtime exmaple : a man is father a son , a husband , a grandparent

//types of polymorphism: two types-> run time and compile time

//compile time: the polymorphism which is acheived during complile time known as compile  time polymorphysm it can be acheived by method overloading 

//runtime: the runtime polymorphism can be acheived during run time known as run time polymorphism , it can be acheived by method overriding


///////////////method overloading (function and opreator overloading)==========


//method overloading

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class compiletime{
    public:
    void func(){
        cout<<"this is without argument " << endl;
    }
    void func(int x){
        cout<<"this is with intger argument" << endl;
    }

    void func(double x){
        cout<<"this is with long argument" << endl;
    }
};

int main(){
    compiletime ct;
    ct.func();
    ct.func(2);
    ct.func(4.3);
}