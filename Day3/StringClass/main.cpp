#include <iostream>
#include "youssef_string.h"
using namespace std;
class String_OS{
public:
char *ptr;
int size;
String_OS(char *str){
size = intStrlen(str);
ptr = new char[size];
for(int i =0;i<size;i++){
    ptr[i] = str[i];
}
ptr[size] = '\0';
}
void printString(){
cout << ptr;
}
void concatString(String_OS s){
    int sizeOfadded = intStrlen(s.ptr);
    int x = 0;
char* temp = new char[size];
    temp = ptr;
    ptr = new char[sizeOfadded+size];
    for(int i =0;i<size;i++){
        ptr[i]=temp[i];
    }

for(int i = size;i<size+sizeOfadded;i++){
            ptr[i] = s.ptr[x];
    x++;
}
ptr[sizeOfadded+size] = '\0';
delete []temp;
}
void operator=(String_OS s){
    int sizeOfadded = intStrlen(s.ptr);
    int x = 0;
char* temp = new char[size];
    temp = ptr;
    ptr = new char[sizeOfadded];
    for(int i =0;i<sizeOfadded;i++){
        ptr[i]=s.ptr[i];
    }
ptr[sizeOfadded] = '\0';
delete temp;
}
String_OS operator+(String_OS s){
    this->concatString(s);
    return *this;
}
bool operator<(String_OS s){
    if(intStrlen(this->ptr)<intStrlen(s.ptr))
        return true;

    return false;
}
bool operator>(String_OS s){
    if(intStrlen(this->ptr)>intStrlen(s.ptr))
        return true;

    return false;
}
bool operator<=(String_OS s){
    if(intStrlen(this->ptr)<=intStrlen(s.ptr))
        return true;

    return false;
}
bool operator>=(String_OS s){
    if(intStrlen(this->ptr)>=intStrlen(s.ptr))
        return true;

    return false;
}
~String_OS(){
delete []ptr;
}
};

int main()
{
    String_OS s("beforeCopy");
    String_OS s2("AfterCopy");

    s.printString();


    return 0;
}
