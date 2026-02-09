#include <stdio.h>
#define N 100

int main()
{
    struct account
    {
        int acct_no;
        char name[20];
        float balance;
    };

    struct account customer[N];
    float max_balance;
    int n, i, max_index;

    printf("How many customers?");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter data for customer %d:\n", i+1);
        printf("Enter account number:");
        scanf("%d", &customer[i].acct_no);
        printf("Enter name:");
        scanf("%s", customer[i].name);
        printf("Enter balance:");
        scanf("%f", &customer[i].balance);
    }

    max_balance = customer[0].balance;
    max_index = 0;

    for(i = 1; i < n; i++)
    {
        if(customer[i].balance > max_balance)
        {
            max_balance = customer[i].balance;
            max_index = i;
        }
    }

    printf("\nCustomer having highest balance:\n");
    printf("Account number: %d\n", customer[max_index].acct_no);
    printf("Name: %s\n", customer[max_index].name);
    printf("Balance: %f", customer[max_index].balance);

    return 0;
}
