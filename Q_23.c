int main() {
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);

    if (n <= 5)
        printf("Rs 2/day fine");
    else if (n <= 10)
        printf("Rs 4/day fine");
    else if (n <= 20)
        printf("Rs 6/day fine\n");
    else if (n <= 30)
        printf("membership cancelled\n");
    return 0;
}
