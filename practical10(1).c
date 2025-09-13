
#include <stdio.h>
main()
    {
    int  choice, quantity;
    char CHOICE;
    float  totalBill = 0.0;
    printf("  ---->      Welcome to Foodies Restaurant      <----");
        printf("\n-------------------------------------------------------------------\n");
        printf("               !! MENU  OF FOODIES !!              \n");
        printf("-------------------------------------------------------------------\n");
        printf("1. Burger               : 150 Rs.\n");
        printf("2. Pizza                : 200 Rs.\n");
        printf("3. Pasta                : 120 Rs.\n");
        printf("4. Sandwich             : 100 Rs.\n");
        printf("5. French Fries         : 80 Rs.\n");
        printf("-------------------------------------------------------------------\n");
        printf(" ---> Enter your choice (1-5) or '0' to finish your order: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf(" ---> How many burgers would you like?   : ");
                scanf("%d", &quantity);
                totalBill += 150.0 * quantity;
                printf(" ---> %d Burger(s) added to your order.\n", quantity);
                break;
            case 2:
                printf(" ---> How many pizzas would you like?   : ");
                scanf("%d", &quantity);
                totalBill += 200.0 * quantity;
                printf(" ---> %d Pizza(s) added to your order.\n", quantity);
                break;
            case 3:
                printf(" ---> How many pasta dishes would you like?   : ");
                scanf("%d", &quantity);
                totalBill += 120.0 * quantity;
                printf(" ---> %d Pasta(s) added to your order.\n", quantity);
                break;
            case 4:
                printf(" ---> How many sandwiches would you like?   : ");
                scanf("%d", &quantity);
                totalBill += 100.0 * quantity;
                printf(" ---> %d Sandwich(es) added to your order.\n", quantity);
                break;
            case 5:
                printf(" ---> How many french fries would you like?   : ");
                scanf("%d", &quantity);
                totalBill += 80.0 * quantity;
                printf(" ---> %d French Fries added to your order.\n", quantity);
                break;
            default:
                printf("   ---> Invalid choice. Please select a valid menu item.\n");

    }
    printf("-------------------------------------------------------------------\n");
    printf("          !!  Your Final Bill !!            \n");
    printf("-------------------------------------------------------------------\n");
    printf("--->  Total Amount: %.2f Rs.\n", totalBill);
    printf("--->  Thank you for visiting Foodies!\n");
  }