#define TRMNTR '\0'
#include <iostream>
using namespace std;
int intStrlen(char *str){
    int i = 0;
    while(str[i] != TRMNTR){
        i++;
    }
    return i;
}

