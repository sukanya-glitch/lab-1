# include<stdio.h>
int main()
{
    float n, g;
    printf("Enter gross sales:");
    scanf("%f", &g);

    n = 0.9 * g;

    printf("The net sales are %f\n:", n);
}