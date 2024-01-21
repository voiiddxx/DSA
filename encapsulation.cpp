//encaplutaion

// the basic purpose of encapsulation is to binding the data and function into a single unit so that the code become more efficient and reusable 

//advantage of encapsulation:

// We can acheive data hiding 
// We can make function read only
//the sewcurity of code increase
//code become reusable
//code management become easy


//Fully encapsulation:
// when all the data member are in private manner then this is called fully encapsulation


//program of encaplutation

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class encapsu {
    
    private:
    int data;

    public:
    void getdata(int x){
        cout<<"The Data is " << x << endl;
    }
};

int main(){

    cout<<"This is the  program of encapsulation" << endl;

    encapsu ob;
    ob.getdata(21);


}