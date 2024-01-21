#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    int x ;
    int y;

    void show(int x , int y){
        this->x = x;
        this->y= y;

        
            cout<<"the value of x and y is" << x << "  " << y << endl;
       
    }
};

  class deri1{
    public:
    int a ;
    int b;

    void display(int a , int b){
        this->a = a;
        this->b = b;
        cout<<"the value of a and b is " << a << "  " << b<< endl;
        
    }
};

class mein : public base , public deri1{
    public:
    void firstmulti(){
        cout <<"the product of x and y is " <<x*y << " " << endl;
        
    }
    void secondmulti(){
        cout<<"the product of a and b is " << a*b << endl;
    }
};

int main(){
    mein st;
    st.show(2,40);
    st.display(2,8);
    st.firstmulti();
    st.secondmulti();


}