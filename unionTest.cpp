#include <stdio.h>

union data{
    int n;
    char ch;
    short m;
};


int main(){
    union data a;
    
    a.ch='a';
    printf("%d %c %d\n",a.n,a.ch,a.m);
   
    return 0;
}
