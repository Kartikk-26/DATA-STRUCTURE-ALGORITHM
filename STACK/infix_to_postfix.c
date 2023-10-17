#include<stdio.h>
#include<ctype.h>

int top=-1;
char stack[50];

int precedence(char);
void push(char);
char pop();

void push(char item)
{
    stack[++top]= item;

}

char pop()
{
    return stack[top--];

}

int precedence(char symbol)
{
    if(symbol =='^'){
        return 3;
    }
    else if(symbol=='*' || symbol=='/' ){
        return 2;
    }
    else if(symbol=='+' || symbol=='-' ){
        return 2;
    }
    else{
        return 0;
    }
}

int main()
{
    char str[20]="x^y/(a*z)+b",x;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(isalpha(str[i])){
            printf("%c",str[i]);
        }
        else if(str[i]=='('){
            push(str[i]);
        }
        else if(str[i]==')'){
            while((x=pop())!='('){
                printf("%c",x);
            }
        }
        else {
            while(precedence(stack[top])>=precedence(str[i])){
                printf("%c",pop());

            }
            push(str[i]);
        }

    }
    while(top>=0){
        printf("%c",pop());
    }

}