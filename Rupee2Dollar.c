# include<stdio.h>
int main()
{
    int a, b;
    printf("Enter amount in Rupees:");
    scanf("%d", &a);

    b = a / 48;

    printf("Amount in Dollars = %d\n", b);
}