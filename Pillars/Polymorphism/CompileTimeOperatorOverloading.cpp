#include<bits/stdc++.h>

using namespace std;

class Complex{
private:
    int real,imag;
public:
    Complex(int x,int y){
        real = x;
        imag = y;
    }
    Complex operator+(Complex& temp){
        Complex res(0,0);
        res.real = real + temp.real;
        res.imag = imag + temp.imag;

        return res;
    }
    void print(){
        cout<<real<<" +i"<<imag<<endl;
    }
};



int main(){

    Complex c1(2,3),c2(-1,-8),c3(1,1);
    Complex c4 = c1+c2+c3;
    c4.print();


    return 0;
}