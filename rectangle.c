# include<stdio.h>
int main()
{
    int a, p, l, b;
    printf("Enter side length of rectangle:");
    scanf("%d", &l);
    printf("Enter breadth of rectangle:");
    scanf("%d", &b);

    a = l * b;
    p = 2 * (l + b);

    printf("The area of rectangle is %d\n:", a);
    printf("The perimeter of rectangle is %d\n:", p);

}