#include<stdio.h>
int prime(int n)
{
    int i=2;
    if(n==2)
    {

        return 1;
    }

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {

            return 0;
            break;

        }
        else
        {

            return 1;
        }

    }

}
int perfect(int n)
{
    int i=2;int s=0;
    printf("\n the factors are \n");
    printf("%d\n",1);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
            printf("%d\n",i);
        }

        else{
            continue;
        }

    }
    printf("*********************");
    if((s+1)==n)
    {
        printf("\n%d is a perfect number \n",n);
        return 1;
    }
    else
    {
        printf("\n%d is not a perfect number \n",n);
        return 0;
    }
}

int main()
{
    int n;
    printf("\n enter the number to be checked as perfect \n");
    scanf("%d",&n);
    perfect(n);
    return 0;
}
