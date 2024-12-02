#include <iostream>

using namespace std;
class Complex{
    int real;
    int img;
public:
void printComplex(){
if(real == 0 || img == 0){

      if(real == 0 && img == 0)
            cout <<"No number to show!";
      else if(real == 0)
            cout << img << "i" << endl;
      else
            cout << real << endl;
}
else{
    if(img < 0)
        cout << real << " " << img << "i"<< endl;
    else
        cout << real << "+" << img << "i"<< endl;
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
Complex addComplex(Complex c1,Complex c2){
    Complex newComp;
    newComp.real = c1.real + c2.real;
    newComp.img = c1.img + c2.img;

return newComp;
}
Complex subComplex(Complex c1,Complex c2){
    Complex newComp;
    newComp.real = c1.real - c2.real;
    newComp.img = c1.img - c2.img;

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

comp2 = comp2.addComplex(comp,comp2);
comp2.printComplex();
comp2 = comp2.subComplex(comp2,comp);
comp2.printComplex();

    return 0;
}
