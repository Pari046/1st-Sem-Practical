#include<stdio.h>
int main() 
{
int a,b,c;
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
{
if ((a<b)&&(a<c)) 
printf("%d is smallest number",a);
else if ((b<a)&&(b<c)) 
printf("%d is smallest number",b);
else 
printf("%d is smallest number",c);
}
{
if ((a>b)&&(a>c)) 
printf("%d is greatest number",a);
else if ((b>a)&&(b>c)) 
printf("%d is greatest number",b);
else
printf("%d is greatest number",c);
}
return 0;
}
