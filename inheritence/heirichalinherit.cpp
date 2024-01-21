//herichal inheritence 

//herichal inheritence is defined as when parent class is inherited by more than two class

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    int x;
    int y;

    void show(int x , int y ){
        this->x=x;
        this->y=y;

        cout<<"The value of x and y is " << x << " " <<y<< endl;

    }
};

class leftnode : public base{
    public:
    void product(){
        cout<<"the product of x and y is " <<x*y << endl;
    } 
};


class rightNode : public base{
    public:
    void divide(){
        cout<<"the divide of x and y is " << x/y << endl;

    }
};


int main(){


    leftnode nd;
    rightNode rt;
    nd.show(10,2);
    nd.product();
    rt.show(10,2);
    rt.divide();
}