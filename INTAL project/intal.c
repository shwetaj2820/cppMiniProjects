
#include<stdio.h>
char* initializeFunc(){
    char* intal = (char*)malloc(1001*sizeof(int));

    for(int i=0; i<1000; i++){
        intal[i]='0';
    }
    intal[1000]='\0';

    return intal;
}