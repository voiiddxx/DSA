// abstraction: abstraction is defines as the important concept of c++ which is used to display only necessry imformation by hiding all ineer details for real life example a car drived knwo by pressing accelreatotr thr speed of car increase but he did not know how the car actually speed up;


//implementeation of abstraction

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class implementabstraction{
    private:
    int a;
    int b;

    public:
    void showData(int x , int y){
        this->a = x;
        this->b = y;

        cout<<"the value of a and b is " <<a<< " " << b << endl;
    }
};
int main(){


    implementabstraction im;
    im.showData(5,66);

}