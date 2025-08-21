# include<stdio.h>
int main()
{
    int p, r, t, i;
    printf("Enter principal amount:");
    scanf("%d", &p);
    printf("Enter rate of interest:");
    scanf("%d", &r);
    printf("Enter time period:");
    scanf("%d", &t);

    i = (p * r* t) / 100;

    printf("The calculated simple interest is %d\n:", i);
}