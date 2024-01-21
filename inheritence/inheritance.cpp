//Inheritence: inheritance is defined as when we accessing some properies from diffrent class to our class
//inheritance make the code reusable so we dont have to write the same properties for the diffrent diffrent class 

//advantage: make code reusable  , we dont have to write the same code again and again


//type of inheritance 
//single inheritance
//multilevel inheritence
//multiple inheritence
//herirachy inheritence
//hybrid inheritence


////simple program for inheritence


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    class base{
        public:
        int x;
        int y;


        void show(int x , int y){
            this->x = x;
            this->y = y;
            cout<<"the value of x is "<<x<<endl;
            cout<<"the value of y is" <<y <<endl;

        }

    };

    class derived : public base{
        public:
        void multiply(){
            cout<<"the value of product is " << x*y<<endl;

        }
    };
int main(){
    derived d;
    d.show(2,4);
    d.multiply();
}