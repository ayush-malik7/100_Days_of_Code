#include <stdio.h>

int main() {
    int day;
    printf("Enter a number (1-12): ");
    scanf("%d", &day);
    switch(day) {
        case 1:
        printf("janurary \n");
        break;
        case 2:
        printf("February - 28 or 29 days (leap year)\n");
        break;
        case 3:
        printf("march - 31 days\n");
        break;
        case 4:
        printf("april - 30 days\n");
        break;
        case 5:
        printf("may - 31days\n");
        break;
        case 6:
        printf("june - 30days\n");
         break;
        case 7:
        printf("july - 31days\n");
        break;
         case 8:
        printf("august- 30 days \n");
        break;
        case 9:
        printf("september - 31days\n");
        break;
        case 10:
        printf("october 30 days\n");
        break;
        case 11:
        printf("november - 31 days\n");
        break;
        case 12:
        printf("december - 30 days\n");
        break;
        default:
         printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
