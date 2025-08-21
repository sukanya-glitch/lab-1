# include<stdio.h>
int main()
{
    float a, b;
    printf("Enter amount in grams:");
    scanf("%f", &a);

    b = a /1000.0;

    printf("Amount in kilograms is %f\n:", b);

}