#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter two numbers and operator: ");
    scanf("%d %d %c", &a, &b, &op);

    switch(op){
     case '+': printf("%d\n", a+b); break;
     case '-': printf("%d\n", a-b); break;
    case '*': printf("%d\n", a*b); break;
    case '/': printf(b ? "%d\n":"Error!\n", a/b); break;
     case '%': printf(b ? "%d\n":"Error!\n", a%b); break;
        default:  printf("Invalid\n");
    }
    return 0;
}
