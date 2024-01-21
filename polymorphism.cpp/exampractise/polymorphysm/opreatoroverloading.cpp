//==========compile time polymorphism example for opreator overloading==============//
#include<iostream>
using namespace std;

class weight{
    public:
    int x;
    
    void whatisweight(int x){
        this->x = x;
        cout<<"The current weight is " <<x<<endl;

    }
    void operator ++(){
        ++x;
    }
    void show(){
        cout<<"Now the weight is "<< x << endl;
    }
    
};
int main(){
    cout<<"compile time polymorphism example for opreator overloading" << endl;
    weight w;
    w.whatisweight(5);
    ++w;
    w.show();
    
}