#include <stdio.h>

float firstNum, secondNum, result;
char operation, again;

int calculator(){
    switch (operation){
    case '+':
        result = firstNum + secondNum;
        printf("The answer is: %.2f \n", result);
        break;
    case '-':
        result = firstNum - secondNum;
        printf("The answer is: %.2f \n", result);
        break;
    case '*':
        result = firstNum * secondNum;
        printf("The answer is: %.2f \n", result);
        break;
    case '/':
        if (secondNum != 0){
            result = firstNum / secondNum;
            printf("The answer is: %.2f \n", result);
        }else{
            printf("Division Error: You cannot divide by Zero! \n");
        }
        break;

    default:
        printf("Invalid operation! \n");
    }
    return 0;
}

int main(){
    do{
        printf("Which operation do you want to perform(+, -, *, /)? ");
        scanf(" %c", &operation);

        printf("Enter first number: ");
        if (scanf("%f", &firstNum) != 1){
            printf("Invalid Number! \n");
            return 1;
        }

        printf("Enter second number: ");
        if (scanf("%f", &secondNum) != 1){
            printf("Invalid Number! \n");
            return 1;
        }

        calculator();

        printf("\nDo you want to perform another operation? (Y / N): ");
        scanf(" %c", &again);

    }while(again == 'Y' || again == 'y');
        printf("\nThanks for using my calculator! \n");

    return 0;
}
