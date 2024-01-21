#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    class base{
        public:
        int x , y;

        void show(int x , int y){
            this->x = x;
            this->y = y;
            cout<<"the value of x is " << x <<endl;
            cout<<"the value of y is " << y <<endl;

        }
    };

    class derived : public base{
        public:
        void product(){
            cout<<"the product of x and y is " << x*y <<endl;
        }
    };
int main(){

    derived d;
    d.show(2,5);
    d.product();
}