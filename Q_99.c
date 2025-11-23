// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char month[4];

    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, 20, stdin);

    date[strcspn(date, "\n")] = '\0';  
    char m1 = date[3];
    char m2 = date[4];

    if (m1 == '0' && m2 == '1') strcpy(month, "Jan");
    else if (m1 == '0' && m2 == '02') strcpy(month, "Feb");
    else if (m1 == '0' && m2 == '3') strcpy(month, "Mar");
    else if (m1 == '0' && m2 == '4') strcpy(month, "Apr");
    else if (m1 == '0' && m2 == '5') strcpy(month, "May");
    else if (m1 == '0' && m2 == '6') strcpy(month, "Jun");
    else if (m1 == '0' && m2 == '7') strcpy(month, "Jul");
    else if (m1 == '0' && m2 == '8') strcpy(month, "Aug");
    else if (m1 == '0' && m2 == '9') strcpy(month, "Sep");
    else if (m1 == '1' && m2 == '0') strcpy(month, "Oct");
    else if (m1 == '1' && m2 == '1') strcpy(month, "Nov");
    else if (m1 == '1' && m2 == '2') strcpy(month, "Dec");
    else strcpy(month, "???");

    printf("%.2s-%s-%s", date, month, date + 6);

    return 0;
}
