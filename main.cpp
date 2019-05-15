#include <iostream>
#include <stdio.h>

using namespace std;

int copy(char* a,char* b){
    int i=0;

    for(;a[i]!='\0';i++){

        i[b]=i[a];
    }
   return i;

}

int main()

{
    char a[10]="zadacha";

    char b[10];

    int strcopy= copy(a,b);

    printf("%s %d",b,strcopy);
}
