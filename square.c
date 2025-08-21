# include<stdio.h>
int main()
{
    int a, p, l;
    printf("Enter side length of square:");
    scanf("%d", &l);

    a = l * l;
    p = 4 * l;

    printf("The area of square is %d\n:", a);
    printf("The perimeter of square is %d\n:", p);

}