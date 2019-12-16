#include <string.h>
#include <stdio.h>
#include "interface.h"
#define LINE 256
#define WORD 30

int getLine(char s[])
{
    int count=0;
    char ch = getchar();
    while (ch!='/n' && ch!='/0'){
    *(s+count) = ch;
count++;
ch = getchar();

    }
    if(ch=='/0'){
        return -1;
    }
   return count; 
}

int getword(char w[]){
int count=0;
char ch = getchar();
while(ch!='/n' && ch!='/t' && ch!=' ' && ch!='/0'){
   *(w+count) = ch;
    ch=getchar();
    count++;   
}
 if(ch=='/0'){
        return -1;
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

    void print_line(char* str){
        char s[LINE];
        while(getword(s)!=-1){
getLine(s);
if(substring(s, str)){
    printf("&s\n", s);
}
}
    }

    void print_similar_words(char *str){
char w[30];
while (getword(w)!=-1){
    getword(w);
if (similar(w,str,1)){
    printf("%s\n", w);
}
if (similar(w,str,0)){
    printf("%s\n", w);
}
}

}

     
        
    
    


