# include<stdio.h>
int main()
{
    int a;
    printf("Convert who to what?\n Press 1 for celsius to farenheit\n Press 2 for farenheit to celsius\n");
    scanf("%d", &a);

    if(a==1)
    {
      float a, b;
    printf("Enter value:");
    scanf("%f", &a);

    b = (9/5.0 * a) + 32;

    printf("The value in Farenheit is %f\n:", b);

    }

    if(a=2)
    {
      float a, b;
    printf("Enter value:");
    scanf("%f", &a);

    b = 5.0/9 * (a - 32);;

    printf("The value in Celsius is %f\n:", b);  
    }

}