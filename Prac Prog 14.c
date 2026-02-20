#include <stdio.h>

int main()
{
    int days, rc, dcf, med, lab, ins, bill, payable;
    printf("Enter no. of days in hospital: ");
    scanf("%d",&days);

    rc = 5000*days;
    dcf = 2000*days;
    med = 0.15*rc;
    lab = 0.10*rc;
    bill = rc + dcf + med + lab;
    ins = 0.20 * bill;
    payable = bill - ins;

    printf("Total Bill = %d\n",bill);
    printf("Payable Bill = %d",payable);

    return 0;
}
