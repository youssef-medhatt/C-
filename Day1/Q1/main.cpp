#include <iostream>

using namespace std;
class Complex{
    int real;
    int img;
public:
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

};
int main()
{
        Complex comp,comp2;
comp.setReal(10);
comp.setImg(15);
comp2.setReal(20);
comp2.setImg(15);
comp2.printComplex();

    return 0;
}
