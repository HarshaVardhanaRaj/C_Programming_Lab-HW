#include <stdio.h>

typedef struct
{
    int acc_no;
    char name[20];
    float balance;
}bankAccount;

void add(bankAccount *pt, int i);
void display(bankAccount *p, int j);
void find_min(bankAccount *pt, int k);

void add(bankAccount *pt, int i)
{
    printf("For Account %d: \n",i);
    printf("Enter Acc.No: ");
    scanf("%d",&pt[i-1].acc_no);
    printf("Enter Acc Holder Name: ");
    scanf("%s",pt[i-1].name);
    printf("Enter Acc Balance: ");
    scanf("%f",&pt[i-1].balance);

    printf("\nAccount added successfully.\n\n");
}


void display(bankAccount *p, int j)
{
    int i;
    for(i=0 ; i<j ; i++)
    {
        printf("Account %d Details: \n",(i+1));
        printf("Acc.No = %d\n",p[i].acc_no);
        printf("Acc Holder Name = %s\n",p[i].name);
        printf("Acc Balance = %f\n\n",p[i].balance);
    }
}


void find_min(bankAccount *pnt, int k)
{
    int min = 0;
    int i;
    for(i=0 ; i<k ; i++)
    {
        if(pnt[i].balance < pnt[min].balance)
            min = i;
    }
    printf("Details of the account with the least balance: \n");
    printf("Acc.No = %d\n",pnt[min].acc_no);
    printf("Acc Holder Name = %s\n",pnt[min].name);
    printf("Acc Balance = %f\n\n",pnt[min].balance);
}

int main()
{
    bankAccount arr[10], *ptr;
    int n=1, c, ch=1, i, j;
    ptr =arr;

    while(ch!=0 && n<10)
    {
        add(ptr,n);

        printf("Enter 1 to add another account, or 0 to stop: ");
        scanf("%d",&ch);
        printf("\n");

        if(ch==1)
            n++;
        else
            break;
    }
    display(ptr,n);
    find_min(ptr,n);

    return 0;
}
