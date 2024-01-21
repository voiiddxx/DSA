#include<iostream>
using namespace std;

    class funcoverload{
        public:
        void func(){
            cout<<"I am function with no argument" << endl;
        }

        void func(int x){
            cout<<"I am function with integer argument " <<x<< endl;
        }

        void func(char s){
            cout<<"I am function with charachter argument "<<s<< endl;
        }
    };

int main(){
    cout<<"This is the program of function overloading" << endl;
    funcoverload fn;
    fn.func();
    fn.func(10);
    fn.func('s');
}