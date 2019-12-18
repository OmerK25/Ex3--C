#include "intersort.h"
#include <stdio.h>
#include <string.h>

int main(){
int arr[LINE];
int a=0;
for (int i=0; i<LENGTH; i++){
scanf(" %d", &a);
*(arr+i) = a;  
}

insertion_sort(arr,LENGTH);
int j=0;
for (j= 0; j < LENGTH-1; j++){
printf("%d,", *(arr+j));
}
printf("%d\n",*(arr+j));
}