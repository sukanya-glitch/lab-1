# include<stdio.h>
int main()
{
    float a, l, h;
    printf("Enter base of triangle:");
    scanf("%f", &l);
    printf("Enter height of triangle:");
    scanf("%f", &h);

    a = 0.5 * l * h;;
    
    printf("The area of triangle is %f\n:", a);

}