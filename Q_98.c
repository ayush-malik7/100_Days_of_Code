//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter name: ");
    fgets(name, 100, stdin);

    name[strcspn(name, "\n")] = '\0';  

    int len = strlen(name);
    int lastSpace = -1;

    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (int i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c.", name[i + 1]);
    }

    printf(" %s", name + lastSpace + 1);

    return 0;
}
