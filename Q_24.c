int main() {
    int n;
    printf("Enter number of unit : ");
    scanf("%d", &n);

    if (n <= 100)
        printf("Rs 5/unit \n");
    else if (n <= 200)
        printf("Rs 7/unit \n");
    else if (n <= 300)
        printf("Rs 10/unit \n");
    else if (n >300)
        printf("Rs 12/unit\n");
    return 0;
}
