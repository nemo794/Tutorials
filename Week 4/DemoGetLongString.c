#include <stdio.h>
void display(char ch[]);
void getLongString(char[]);
int main(){
    char c[50]="";
    getLongString(c);
    display(c);
    return 0;
}
void display(char ch[]){
  printf("String Output: ");
  puts(ch);
}

void getLongString(char longString[]){
    char ch;
    int i=0;
    printf("Enter long string, spaces are ok: ");
    while(ch!='\n')    // terminates if user hit enter
    {
        ch=getchar();
        longString[i]=ch;
        i++;
    }
    longString[i]='\0';       // inserting null character at end
    return;
}
