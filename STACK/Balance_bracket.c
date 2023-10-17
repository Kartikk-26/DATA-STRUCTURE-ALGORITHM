//CODE FOR CHECKING THE BALANCE BRACKETS
#include<stdio.h>
#include<string.h>

char stack[20];
int top=-1;
void push(char);
char pop();


void push(char a)
{
    stack[top++]=a;

}

char pop()
{
    return stack[top--];

}

int main()
{
    char str[20],t;
    int f=1,i;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        push(str[i]);

        else if(str[i]==')' || str[i]=='}' || str[i]==']')
        {
            if (top==-1){
            f=0;
            }

            else  
            {
                t=pop();
                    if(str[i]==')'&& str[i]=='{' || str[i]=='[')
                {
                f=0;
                }

                else if(str[i]=='}'&& str[i]=='(' || str[i]=='['){
                f=0;
                }

                else if(str[i]==']'&& str[i]=='{' || str[i]=='('){
                f=0;
                }

            }

        }

    }
    if(top>=0){
        f=0;
    }

    if(f==1)
    {
       printf("BALANCED\n");
    }
    else
    {
        printf("NOT BALANCED\n");

    }

}