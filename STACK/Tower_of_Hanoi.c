#include<stdio.h>
void toh(int n, char a, char b, char c);
int main()
{
    char a ='A',b='B',c='C';
    int n=3;
    toh(n,a,b,c);

}
void toh(int n,char a,char b,char c)
{
    if(n>0){
        toh((n-1),a,c,c);
        printf("%c -> %c\n",a,c);
        toh((n-1),b,a,c);
    }

}
//USING ELEMENT SHOULD BE BETWWEN THE TWO VARIBLE;