#include <stdio.h>
#include <string.h>

struct payment
{
    int transactionID;
    char name[30];
    float amount;
    int type;

    union
    {
        char upiID[30];
        char cardnumber[20];
        float cashamount;
    } payment;
};

int main()
{
    struct payment p;

    printf("***SMART PAYMENT WALLET***\n");

    printf("Enter ID:");
    scanf("%d", &p.transactionID);

    printf("Enter Name:");
    scanf("%s", p.name);

    printf("Enter Amount:");
    scanf("%f", &p.amount);

    printf("\nSelect the payment method\n");
    printf("1.UPI\n");
    printf("2.Card\n");
    printf("3.Cash\n");

    printf("Enter Choice:");
    scanf("%d", &p.type);

    switch(p.type)
    {
        case 1:
            printf("Enter UPI ID:");
            scanf("%s", p.payment.upiID);
            break;

        case 2:
            printf("Enter Card:");
            scanf("%s", p.payment.cardnumber);
            break;

        case 3:
            p.payment.cashamount = p.amount;
            break;

        default:
            printf("Invalid choice\n");
    }

    printf("\n==========payment receipt==========\n");
    printf("transaction ID %d\n", p.transactionID);
    printf("customer name:%s\n", p.name);
    printf("amount %.2f\n", p.amount);

    switch(p.type)
    {
        case 1:
            printf("Payment type: UPI\n");
            printf("UPI ID:%s\n", p.payment.upiID);
            break;

        case 2:
            printf("Payment type: CARD\n");
            printf("CARD:%s\n", p.payment.cardnumber);
            break;

        case 3:
            printf("Payment type: CASH\n");
            printf("CASH:%.2f\n", p.payment.cashamount);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}