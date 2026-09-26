#include <stdio.h>
#include <stdlib.h>

int main()
{
    float subtotal = 0,total = 0, discount = 0;
    int choice = 0, quantity = 0;
    while (choice != 5)
    {
        printf("1. Shirts   - UGX 20000\n");
        printf("2. Shorts   - UGX 15000\n");
        printf("3. Trousers - UGX 25000\n");
        printf("4. Shoes    - UGX 50000\n");
        printf("5. Exit");
        printf("\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            if (quantity <= 0)
            {
                printf("Invalid quantity\n");
            }
            else
            {
                subtotal = quantity * 20000.0;
                total += subtotal;
                printf("Added %d shirt(s), subtotal UGX %.2f\n", quantity, subtotal);
            }
            break;

        case 2:
             printf("Enter quantity: ");
            scanf("%d", &quantity);
            if (quantity <= 0)
            {
                printf("Invalid quantity\n");
            }
            else
            {
                subtotal = quantity * 15000.0;
                total += subtotal;
                printf("Added %d short(s), subtotal UGX %.2f\n", quantity, subtotal);
            }

            break;

        case 3:
             printf("Enter quantity: ");
            scanf("%d", &quantity);
            if (quantity <= 0)
            {
                printf("Invalid quantity\n");
            }
            else
            {
                subtotal = quantity * 25000.0;
                total += subtotal;
                printf("Added %d trousers(s), subtotal UGX %.2f\n", quantity, subtotal);
            }

            break;

        case 4:
             printf("Enter quantity: ");
            scanf("%d", &quantity);
            if (quantity <= 0)
            {
                printf("Invalid quantity\n");
            }
            else
            {
                subtotal = quantity * 50000.0;
                total += subtotal;
                printf("Added %d shoes, subtotal UGX %.2f\n", quantity, subtotal);
            }

            break;

        case 5:
            break;

        default:
            printf("Invalid choice\n");

        }

    }
    if (total >= 100000)
    {
        discount = total * 0.08;
        total = total - discount;
        printf("Discount: %.2f\n", discount);
        printf("Total amount payable: UGX %.2f\n", total);
    }
    else
    {
        printf("Total amount payable: UGX %.2f\n", total);
    }


    return 0;
}
