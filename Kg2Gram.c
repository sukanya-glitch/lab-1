# include<stdio.h>
int main()
{
    float a, b;
    printf("Enter amount in kilograms:");
    scanf("%f", &a);

    b = a * 1000.0;

    printf("Amount in grams is %f\n:", b);

}