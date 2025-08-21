# include<stdio.h>
void main()
{
    int a, b, c, t, v;
    printf("Enter marks in Math:");
    scanf("%d", &a);
    printf("Enter marks in Chemistry:");
    scanf("%d", &b);
    printf("Enter marks in Physics:");
    scanf("%d", &c);

    t = a + b + c;
    v = t / 3;

    printf("Total marks are %d\n:", t);
    printf("Average marks are %d\n:", v);
}