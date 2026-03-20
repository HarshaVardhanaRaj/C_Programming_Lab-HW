#include <stdio.h>
int main()
{
    int n, c=0;

    printf("How many people?: ");
    scanf("%d",&n);
    char A[n];

    printf("Enter the gender order in the queue: \n",n);
    for(int i=0 ; i<n ; i++)
        scanf("%c",&A[i]);

    int pow;
    printf("Enter the power of searching: ");
    scanf("%d",&pow);

    for(int i=0 ; i<pow; i++)
    {
        if(A[i]=='G')
        {
            c++;
            printf("Count of G = %d",c);
        }
    }
    int st=1, end=power;
    while(end<n)
    {
        if(A[st-1]=='G')
            c--;
        if(A[end]=='G')
            c++;
    }

}
