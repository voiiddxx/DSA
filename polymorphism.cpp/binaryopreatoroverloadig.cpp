//====binary opreator overloading=========//
#include<iostream>
using namespace std;


class complex{
    public:
    int real;
    int imaginary;
    complex(){

    }

    complex(int real ,int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    void operator + (complex &c)  {
        complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary+c.imaginary;

        cout << temp.real << " + " <<temp.imaginary << " !" << endl;
    }
};

int main(){
    complex c1(12,54);
    complex c2(8,3);
    c1+c2;
}