#include <stdio.h>
int main()
{
int n,sum=0,rem;
scanf("%d",&n);
condition:
if (n!=0){
rem=n%10;
sum+=rem;
n/=10;
goto condition;
}
else{
    if (sum>27){
        int sum1=0;
        rem=0;
        condition1:
        if (sum1!=0){
        rem=sum1%10;
        sum1+=rem;
        sum/=10;
        goto condition1;
    }
    else{
        printf("%c",64+sum1);
    }
    }
    else{
        printf("%c",64+sum);
    }

}
}