#include<stdio.h>
int main()
{
    int n1,n2,gcd=1,lcm=1;
    printf("Enter any two numbers : \n");
    scanf("%d %d",&n1,&n2);
    for(int i=1; (i<=n1&&i<=n2); i++)
    {
        if((n1%i==0) && (n2%i==0))
        {
            gcd=i;
        }
    }
    printf("G.C.D of %d and %d is %d\n",n1,n2,gcd);
    lcm=(n1*n2)/gcd;
    printf("L.C.M of %d and %d is %d\n",n1,n2,lcm);
    return 0;
}          