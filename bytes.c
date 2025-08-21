# include<stdio.h>
int main()
{
    int a;
    printf("Enter number of bytes:");
    scanf("%d", &a);

    float b, c, d;
    
    b = a /1024.0;
    c = b / 1024.0;
    d = c / 1024.0;

    printf("Amount in Kilobytes %f\n:", b);
    printf("Amount in Megabytes %f\n:", c);
    printf("Amount in Gigabytes %f\n:", d);
}