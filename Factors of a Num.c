#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, c;
    printf("Enter a num: ");
    scanf("%d",&num);

    int sr = floor(sqrt(num));
    //printf("%d \n",sr);

    printf("Factors are: \n");
    for(i=1 ; i<=sr ; i++)
        if(num%i==0)
        {
            printf("(%d,%d) ",i,(num/i));
            if(i==(num/i))
                c++;
            else
                c+=2;
        }

    printf("\n");
    printf("No. of factors = %d\n\n",c);
}
