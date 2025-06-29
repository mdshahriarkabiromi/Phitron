#include<stdio.h>

float checkBalance(float balance)
{
    printf("Your current balance is $%.2f\n",balance);
    return balance; // Added return statement
}

float withdraw(float balance)
{
    float amount;
    printf("Enter the amount you want to withdraw: ");
    scanf("%f",&amount);
    if (amount<0)
    {
        printf("Invalid amount\n");
        return 0;
    }
    else if (amount>balance)
    {
        printf("Insufficient Funds\n");
        printf("Your current balance is %.2f\n",balance);
        return 0;
    }
    else
    {
        printf("Successfully withdrawn %.2f \n",amount);
        return amount; // Return the withdrawn amount
    }
}

float deposit()
{
    float amount;
    printf("Enter the amount you want to deposit: ");
    scanf("%f",&amount);
    if (amount<0)
    {
        printf("Invalid Amount\n");
        return 0;
    }
    else
    {
        printf("Successfully Deposited %.2f \n",amount);
        return amount;
    }
}

int main()
{
    int choice=0;
    float balance =0.0f;
    do
    {
        printf("WELCOME TO THE BANK\n");
        printf("\n");
        printf("Please Choose a Task:\n");
        printf("1. Check Balance:\n");
        printf("2. Deposit Balance:\n");
        printf("3. Withdraw Balance:\n");
        printf("4. Exit:\n");
        printf("\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        //choice
        if(choice==1)
        {
            checkBalance(balance);
        }
        else if (choice==2)
        {
            balance += deposit();
        }
        else if (choice==3)
        {
            balance -= withdraw(balance);
        }
        else if (choice==4)
        {
            printf("Thanks for using the bank\n");
        }
        else
        {
            printf("Invalid choice! Please select between 1-4\n");
        }
        printf("\n");
    } while (choice != 4);
    
    return 0;
}