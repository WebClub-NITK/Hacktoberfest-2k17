# include <stdio.h>

int main() {

    char operator;
    double firstNumber,secondNumber;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);
    
    if(operator=='/'&&secondNumber==0)
        printf("Not defined");         //dividing by zero exception
    
    else{
        switch(operator)
        {
            case '+':
                printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
                break;

            case '-':
                printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
                break;

            case '*':
                printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
                break;

            case '/':
                printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
                break;

            // operator doesn't match any case constant (+, -, *, /)
            default:
                printf("Error! operator is not correct");
        }
    }
    
    return 0;
}
