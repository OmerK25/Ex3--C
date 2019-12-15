#include <string.h>
#include <stdio.h>
#include "interface.h"

int getLine(char s[])
{
    int i=0,count=0;
    while (*(s+i)!='\n' && *(s+i)!='\0')
    {
count++;
i++;
    }
   return count; 
}

int getword(char w[]){
int i=0,count=0;
while(*(w+i)!='\n' && *(w+i)!='\t' && *(w+i)!=' ' && *(w+i)!='\0'){
    count++;
    i++;
}
return count;
}

int substring(char *str1, char *str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
for (int i = 0; i <= len1-len2; i++){

for (int j=0; j<len2; j++){
if (*(str1+i+j)!=*(str2+j))
{
 break;
}
if ((j==len2)==0){
    return 1;
}  
}    
}            
        
      return 0;      
    }

    int similar(char *s, char *t, int n){
        int len1 = strlen(s);
        int len2 = strlen(t);
int i=0,j=0;
 while(*(s+i)!='\0' && *(t+j)!='\0'){
if(*(s+i)==*(t+j)){
    i++;
    j++;
}
else{
    i++;
   n--; 
}
   
 }
if(n==0){
    return 1;
}
else{


return 0;
}
    
    }      
        
    
    


