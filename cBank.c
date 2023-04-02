#include <stdio.h>
#include <stdlib.h>

int main()
{
    float balance = 11000.44;
    float depositAmount;
    float withdrawlAmount;
    int option;
    char yesno;

    do
    {
        puts("Welcome to Bank Application");
        puts("Please select from below options");
        puts("1. View Balance");
        puts("2. Deposit Amount");
        puts("3. Withdraw Amount");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Your account balance is : %f \n", balance);
            break;
        case 2:
            printf("Enter the amount you want to deposit :\n Amount :");
            scanf("%f", &depositAmount);
            // Ensure that user does not enter negative amount
            if (depositAmount < 0)
            {
                puts("Invalid Deposit Amount");
            }
            else
            {
                balance += depositAmount;
                puts("Amount has been deposited successfully");
                printf("Your account balance is : %f \n", balance);
            }
            break;

        case 3:
            printf("Enter the amount you want to withdraw :\n Amount :");
            scanf("%f", &withdrawlAmount);
            if (withdrawlAmount < 0)
            {
                puts("Invalid Withdraw Amount");
            }
            else if (withdrawlAmount > balance)
            {
                puts("You can not withdraw more than available balance");
            }
            else
            {
                balance -= withdrawlAmount;
                puts("Amount has been withdrawn successfully");
                printf("Your account balance is : %f \n", balance);
            }
            break;
        default:
            puts("Invalid option selected");
        }

        printf("Do you want to continue ? \n");
        yesno = getch();
    } while ('y' == yesno);

    return 0;
}