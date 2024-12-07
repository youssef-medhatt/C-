#include <iostream>

using namespace std;

class Base{
protected:
    int a;
    int b;
public:
Base(int a, int b){
this->a = a;
this->b = b;
cout<<"Base constructor called"<<endl;
}

~Base(){
cout<<"Base destructor called"<<endl;
}

int sum(){
    return a + b;
}

};

class Derived:public Base{
protected:
    int c;

public:
    Derived(int c, int a , int b):Base(a , b){
        this->c = c;
        cout<<"Derived constructor called"<<endl;
    }
    ~Derived(){
    cout<<"Derived destructor called"<<endl;
    }
    int sum(){
      return Base::sum() + c;
    }
};

class SecondDerived:public Derived{
private:
    int d;
public:
    SecondDerived(int a, int b, int c, int d):Derived(a, b, c){
    this->d = d;
    cout<<"SecondDerived constructor called"<<endl;
    }
    ~SecondDerived(){
    cout<<"SecondDerived destructor called"<<endl;
    }
    int sum(){
        return Derived::sum() + d;
    }

};

int main()
{
    //Base b; //compiler error

    //Base b(1,2); //one constructor, one destructor
    //SecondDerived s(2,3,4,5); //three constructors(parent then son then grandson), three destructors(opposite direction).
    //int bsum = b.sum();
    //cout<<bsum<<endl; //3

    Derived d(6,3,5); //base constructor called first, then derived
    int dsum = d.sum(); //sum of base is called from within sum of derived.
    cout<<dsum<<endl;
    Base * bptr = &d;
    cout<<bptr->sum()<<endl; //Base sum is called
//    SecondDerived * sptr = &d; //invalid, cuz Derived doesn't have within it a SecondDerived object to point to.
//    cout<<sptr->sum()<<endl; //error


    return 0;
}
