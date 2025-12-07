#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

static bool is_matching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int main(void) {
    char expr[1024];
    if (!fgets(expr, sizeof(expr), stdin)) return 0;
    size_t len = strcspn(expr, "\r\n"); 
    expr[len] = '\0';

    char *stack = malloc(len + 1);
    if (!stack) return 1;
    int top = -1;

    for (size_t i = 0; i < len; ++i) {
        char c = expr[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else if (c == ')' || c == '}' || c == ']') {
            if (top < 0 || !is_matching(stack[top], c)) {
                printf("Not balanced\n");
                free(stack);
                return 0;
            }
            --top;
        }
    }

    printf(top == -1 ? "Balanced\n" : "Not balanced\n");
    free(stack);
    return 0;
}