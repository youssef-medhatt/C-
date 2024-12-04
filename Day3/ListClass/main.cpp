#include <iostream>

using namespace std;
class List{
int *arr;
int size;
public:
List(){
arr = new int[1];
size=1;
}
void push(int x){
    if(size == 1){
        arr[0]=x;
        size++;
    return;
    }
int *temp;
temp = arr;
arr=new int[size];
for(int i =0;i<size-1;i++){
    arr[i]=temp[i];
}
arr[size-1]=x;
size++;
delete []temp;
}
int pop(){
    size--;
int x = arr[size-1];
int *temp;
temp = arr;
arr=new int[size-1];
for(int i =0;i<size-1;i++){
    arr[i]=temp[i];
}
delete []temp;
return x;
}
~List(){
delete []arr;
}
};
int main()
{
    List l;
    l.push(1);
    l.push(2);
    l.push(3);
    l.push(4);
    l.pop();

    return 0;
}
