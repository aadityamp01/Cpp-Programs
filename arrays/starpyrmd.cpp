#include <iostream>
int main()
{
int i,j,n;
scanf("%d Enter number you want print",&n);
for (i = 0;i < n; i++)
{
for(j = 0;j <= i; j++)
{
printf("*");
}
printf("\n");
}
return 0;
}

