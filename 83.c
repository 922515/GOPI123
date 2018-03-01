#include<stdio.h>
int main()
{
inta,b,c;
scanf("%d%d%d",&a,&b,&c);
 
int highestPowerof2(int n)
{
    int res = 0;
    for (int i=n; i>=1; i--)
    {
        // If i is a power of 2
        if ((i & (i-1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}
