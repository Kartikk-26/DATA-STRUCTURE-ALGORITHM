#include <stdio.h>
#include <string.h>

#define max 100
int top, stack[max];

void push(char x) {
    if (top == max - 1) {
        printf("stack overflow");
    } else {
        stack[++top] = x;
    }
}

void pop() {
    printf("%c", stack[top--]);
}

int main() {
    char str[max];
    printf("Enter a string: ");
    gets(str); // Input the string from the user (not recommended for production)

    int len = strlen(str);
    int i;

    for (i = 0; i < len; i++)
        push(str[i]);

    for (i = 0; i < len; i++)
        pop();
}
