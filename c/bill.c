#include <stdio.h>
int main()
{
int units;
float bill,surcharge;
const float rate1=1.20,rate2=1.50,rate3=1.80,rate4=2;
const float surchargerate=0.15;
const int minibill=100;
scanf("%d", &units);
if (units <= 199)
{
bill = units * rate1;
}
else if (units >= 201 && units <= 400)
{
bill = units * rate2;
}
else if (units >= 401 && units <= 600)
{
bill = units * rate3;
}
else
{
bill = units * rate4;
}
if (bill > 400){
    surcharge=bill*surchargerate;
    bill+=surcharge;
}
if (bill<minibill){
    bill=minibill;
}
printf("%f",bill);
}