#include "intertxt.h"
#include <stdio.h>
#include <string.h>

int main(){

char str[WORD];
getword(str);
char op;
scanf(" %c",&op);
if(op=='a'){
print_lines(str);
}
if (op=='b'){
print_similar_words(str);
}
}