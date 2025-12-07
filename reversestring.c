//WAP to reverse the string using stack
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int main() {
    char stack[MAX];
    char str[MAX];
    int top = -1, i;
    
    printf("Enter a string: ");
    gets(str);
    

    for (i = 0; str[i] != '\0'; i++) {
        stack[++top] = str[i];
    }
    
   
    printf("Reversed string: ");
    while (top >= 0) {
        printf("%c", stack[top--]);
    }
    printf("\n");
    
    return 0;
}
//WAP to check paranthesis is balanced or not using stack