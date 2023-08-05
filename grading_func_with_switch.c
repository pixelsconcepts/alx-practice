#include <stdio.h>

//simple grading system usinge switch statement

int main(void)
{
    int score;

    printf("Please input score: ");
    scanf("%d", &score);

    switch(score)
    {
    case 80 ... 100:
    printf("Your grade is A\n");
    break;
    
    case 70 ... 79:
    printf("Your grade is B\n");
    break;

    case 60 ... 69:
    printf("Your grade is C\n");
    break;
    
    case 50 ... 59:
    printf("D\n");
    break;
    
    case 40 ... 49:
    printf("Your grade is E\n");
    break;
    
    case 0 ... 39:
    printf("Your grade is F\n");
    break;
    
    default:
    printf("Not a valid score!\n");
    break;
    }
    
    return 0;
}   