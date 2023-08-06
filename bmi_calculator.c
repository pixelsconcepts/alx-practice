#include <stdio.h>

//A Simple program to calculate the BMI of patients

int main(void)
{
    double height;
    int weight;

    printf("Enter your height:");
    scanf("%lf", &height);
    printf("Enter your weight:");
    scanf("%d", &weight);

    int bmi = weight/(height*height);

    if (bmi < 18)
    {
        printf("Height: %.1fm\n", height);
        printf("Weight: %dkg\n", weight);
        printf("Your BMI is %dkg/m^2. You are underweight\n", bmi);
    }
    else if (bmi >= 18 && bmi <= 25)
    {
        printf("Height: %.1fm\n", height);
        printf("Weight: %dkg\n", weight);
        printf("Your BMI is %dkg/m^2. You have normal weight\n", bmi);
    }
    else if (bmi >= 26 && bmi <= 29)
    {
        printf("Height: %.1fm\n", height);
        printf("Weight: %dkg\n", weight);
        printf("Your BMI is %dkg/m^2. You are Overweight\n", bmi);
    }
    else if (bmi > 30)
    {
        printf("Height: %.1fm\n", height);
        printf("Weight: %dkg\n", weight);
        printf("Your BMI is %dkg/m^2. Obesity\n", bmi);
        if (bmi >= 30 && bmi <= 34)
        {
            printf("You have class I Obesity\n");
        }
        else if (bmi >= 35 && bmi <= 39)
        {
            printf("You have class II Obesity\n");
        }
        else if (bmi > 40)
        {
            printf("You have class III Obesity\n");
        }
        
    }
    return 0;
}
