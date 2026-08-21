#include <stdio.h>

int main() 
{
    
    int item, qty;
    float totalBill = 0;
    char more = 'Y';

    do
    {

        printf("\n===== FRNDS RESTAURANT  =====\n");
        printf("1. Corn soup   - Rs.100\n");
        printf("2. Mushroom biryani - Rs.250\n");
        printf("3. potato pops   - Rs.80\n");
        printf("4. fresh juice     - Rs.120\n");

        printf("what do you want to have: ");
        scanf("%d", &item);

        printf("how many do you want: ");
        scanf("%d", &qty);

        switch (item) 
        {
            case 1:
                totalBill += 90 * qty;
                break;

            case 2:
                totalBill += 200 * qty;
                break;

            case 3:
                totalBill += 100 * qty;
                break;

            case 4:
                totalBill += 120 * qty;
                break;

            default:
                printf("Invalid choice!\n");
        }
       }
       printf("Current Total Bill = Rs. %.2f\n", totalBill);
	printf("Do you want to order more? (Y/N): ");
       scanf(" %c", &more);
       while (more == 'Y' || more == 'y') 

    printf("\n============================\n");
    printf("Final Total Bill = Rs. %.2f\n", totalBill);
    printf("============================\n");

    return 0;
    
}
