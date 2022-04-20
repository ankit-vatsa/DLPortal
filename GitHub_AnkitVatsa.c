#include<stdio.h>

int main()
{

    int age,rep,experience;
    
    printf("\tWelcome to Driving License Portal\n");
        printf("This Driving License Portal will help you to find your eligibility for applying for the Driving License.\n");
    printf("Enter your age:\n");
        scanf("%d",&age);
            printf("\aYou have entered your age = %d\n",age);

        if (age>=21)       
    {
        printf("You are eligible for applying for the Driving License.\n");
        
        printf("You are also eligible for applying for the Commercial Driving License.\n");
        printf("Do you want to apply for the Commercial license (yes-1/no-0)\n");
        scanf("%d",&rep);
    }    
    
    if (rep==1)
        {
            printf("Please enter your private vehicle driving experience in years\n");
            scanf("%d",&experience);
        }
        
    if (experience>=3)
            {
                printf("You are eligible for applying for the Commercial License.");
            }

    else if (age>=18)
    {
        printf("You are eligible for applying for the Private Vehicle Driving License.");
    }
    
    else
    {
        printf("You aren't eligible for applying for the Driving License.");
    }
     
    return 0;
}