#include <string.h>
#include <stdio.h>
#include "intertxt.h"

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
    int len2 = strlen(str2);
    int len1 = strlen(str1);

    for (int i = 0; i <= len1-len2; i++){
    int j;
        for (j=0; j<len2; j++)
        if (*(str1+i+j)!=*(str2+j))
        break;
        
        if(j==len2)
        return 1;
        }
        return 0;
    }

    int similar(char *s, char *t, int n){
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
if(substring(s, str)){
    printf("%s\n", s);
}
}
    }

    void print_similar_words(char *str){
char w[30];
while (getword(w)!=EOF){
    
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

     
        
    
    


