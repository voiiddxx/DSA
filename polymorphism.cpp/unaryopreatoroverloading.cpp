//unary opreator overloading

//post incerement and decrement

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class weight{
    public:
    int x;

    void showweight(){
        cout<<"the weight is "<< x << endl;
    }

    void operator ++(){
        ++x;
    }
};
int main(){

    weight w;
    w.showweight();
    ++w;
    w.showweight();
    ++w;
    w.showweight();
}