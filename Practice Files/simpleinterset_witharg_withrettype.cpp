//WAP to calculate simple interest using functions (with arguments , with return type)
#include<stdio.h>
float si(float p, float t, float r);
int main()
{
 float principal,time,rate,c;
 printf("Enter Principal, Rate and Time respectively1:-\n");
 scanf("%f%f%f",&principal,&rate,&time);
 c = si(principal,time,rate);
 printf("The Simple Interst of given value is %.2f",c);
 return 0;
}
float si(float p, float t, float r)
{
 int si;
 si=(p*t*r)/100;
 return si;
}
