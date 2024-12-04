#include <iostream>

using namespace std;
class List{
int *arr;
int size;
public:
List(){
arr = new int[1];
size=0;
}
int getSize(){
return size;
}
void push(int x){
    if(size == 0){
        arr[0]=x;
        size++;
    return;
    }
int *temp;
temp = arr;
arr=new int[size+1];
for(int i =0;i<size;i++){
    arr[i]=temp[i];
}
arr[size]=x;
size++;
delete []temp;
}
int pop(){
    if(size ==0)
        return -1;
    size--;
int x = arr[size];
int *temp;
temp = arr;
arr=new int[size];
for(int i =0;i<size;i++){
    arr[i]=temp[i];
}
delete []temp;
return x;
}
void operator=(List &l){
this->size = l.size;
int *temp = this->arr;
this->arr = new int[l.size];
for(int i =0;i<size;i++)
    this->arr[i] = l.arr[i];

delete[] temp;
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
    l.pop();
    List l2;
    l2 = l;

    return 0;
}
