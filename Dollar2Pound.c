# include<stdio.h>
int main()
{
    float a, b ,c;
    printf("Enter amount in Dollars:");
    scanf("%f", &a);

    b = a * 48.0;

    c = b / 70.0;

    printf("The amount in Pounds is %f\n:", c);
}