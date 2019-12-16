#include <string.h>
#include <stdio.h>
#include "interface.h"
#define LINE 256
#define WORD 30

int getLine(char s[])
{
    int count=0;
    char ch = getchar();
    while (ch!='\n' && ch!=EOF){
    *(s+count) = ch;
count++;
ch = getchar();

    }
    s[count]='\0';
    if(ch==EOF){
        return EOF;
    }
   return count; 
}

int getword(char w[]){
int count=0;
char ch = getchar();
while(ch!='\n' && ch!='\t' && ch!=' ' && ch!=EOF){
   *(w+count) = ch;
    ch=getchar();
    count++;   
}
w[count] = '\0';
 if(ch==EOF){
        return EOF;
    }
return count;
}

int substring(char *str1, char *str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);  
    int i=0,j=0,counter=0;
while(*(str1+i)!='\0' && *(str2+j)!='\0'){           
        if(*(str1+i)==*(str2+j)){
i++;
j++;
counter++;
        }
        else{
          i++;
          j=0; 
          counter=0; 
        }
}
if(counter==0){
      return 0; 
}
else{
    return 1;
}    
    }

    int similar(char *s, char *t, int n){
        int len1 = strlen(s);
        int len2 = strlen(t);
int i=0,j=0;
 while(*(s+i)!='\0' || *(t+j)!='\0'){
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

    void print_lines(char *str){
        char s[LINE];
        while(getLine(s)!=EOF){
getLine(s);
if(substring(s, str)){
    printf("%s\n", s);
}
}
    }

    void print_similar_words(char *str){
char w[30];
while (getword(w)!=EOF){
    getword(w);
if (similar(w,str,1)){
    printf("%s\n", w);
}
else{
if (similar(w,str,0)){
    printf("%s\n", w);
}
}
}
}

     
        
    
    


