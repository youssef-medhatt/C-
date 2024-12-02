#include <iostream>

using namespace std;
void Swap1(int x,int y){
x = x+y;
y = x-y;
x = x-y;
cout << x << " " << y <<endl;
}
void Swap2(int *x,int *y){
*x = *x+*y;
*y = *x-*y;
*x = *x-*y;
cout << *x << " " << *y <<endl;
}
void Swap3(int &x,int &y){
x = x+y;
y = x-y;
x = x-y;
cout << x << " " << y <<endl;
}
int main()
{
    int x = 10;
    int y = 5;

Swap1(x,y);
cout << x << " " << y <<endl;
Swap2(&x,&y);
cout << x << " " << y <<endl;
Swap3(x,y);
cout << x << " " << y <<endl;

    return 0;
}
