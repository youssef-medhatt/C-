#include <iostream>

using namespace std;
class Complex{
    int real;
    int img;
public:
    Complex(){
        real = 0;
        img = 0;
    }
      Complex(Complex &c){
        cout << "Copy constructor" <<endl;
        this->real = c.real;
        this->img = c.img;
    }
    Complex(int real,int img){

        this->real = real;
        this->img = img;
    }
~ Complex(){
cout << "Object Destroyed"<< endl;
}
void printComplex() {
    if (real == 0 && img == 0) {
        cout << "No number to show!";
    } else if (real == 0) {
        cout << img << "i" << endl;
    } else {
        cout << real;
        if (img != 0) {
            cout << (img < 0 ? "" : "+") << img << "i";
        }
        cout << endl;
    }
}
void setReal(int r){
real = r;
}
void setImg(int i){
img = i;
}
void setComplex(int real, int img){
    this->real = real;
    this->img = img;
}
int getReal(){
return real;
}
int getImg(){
return img;
}
Complex addComplex(Complex c){
    Complex newComp;
    newComp.real = real + c.real;
    newComp.img = img + c.img;

return newComp;
}
Complex subComplex(Complex c){
    Complex newComp;
    newComp.real = real - c.real;
    newComp.img = img - c.img;

return newComp;
}
Complex operator+(Complex c){
this->real = this->real + c.real;
this->img = this->img  + c.img;
return *this;
}
/*Complex operator=(Complex c){
    cout << "operator overload" <<endl;
this->real = c.real;
this->img = c.img;
return *this;
}*/
Complex operator+=(Complex c){
this->real = this->real + c.real;
this->img = this->img  + c.img;
return *this;
}
Complex operator-(Complex c){
this->real = this->real - c.real;
this->img = this->img  - c.img;
return *this;
}
Complex operator+(int x){
this->real = this->real + x;
this->img = this->img  + x;
return *this;
}
Complex operator-(int x){
this->real = this->real - x;
this->img = this->img  - x;
return *this;
}
Complex operator++(){
this->real++;
this->img++;
return *this;
}

Complex operator++(int x){
Complex c = *this;
this->real++;
this->img++;
return c;
}
bool operator==(Complex c){
if(this->real == c.real && this->img == c.img)
    return true;
return false;
}

friend Complex operator+(int x,Complex c){
Complex returned;
returned.real = x + c.real;
returned.img = x + c.img;
return returned;
}
friend Complex operator-(int x,Complex c){
Complex returned;
returned.real = x - c.real;
returned.img = x - c.img;
return returned;
}
};
int main()
{
Complex c1,c2,c3;
c1.setReal(10);
c1.setImg(15);
c2.setReal(10);
c2.setImg(15);
c3 = 5+c1;
c3.printComplex();


    return 0;
}
