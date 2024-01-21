// hybrid inheritence

//hybrid inheritence is define as the combination of 1 type of inheritence 
// for example : the combination of single inheritence and multiple inheritence is defined as hybrid inheritence 


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    void baseshow(){
        cout<<"this is base class " << endl;

    }

};

class singleinherit : public base{
    void display(){
        cout<<"this is single inheriting class" << endl;
    }
};

class alone{
    public:
    void amalone(){
        cout<<"this is alone class" << endl;
    }
};


class hybrid : public singleinherit , public alone{
    public:
    void shownow(){
        cout<<"this is hybribd class " << endl;
    }
};



int main(){

    hybrid hd;
    hd.baseshow();
    hd.amalone();
    hd.shownow();

}