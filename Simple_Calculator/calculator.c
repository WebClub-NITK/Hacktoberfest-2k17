# include <stdio.h>

int main() {

    char op;
    double num1,num2;
    
    
    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &op);
    
    printf("Enter two numbers: ");
    scanf("%lf %lf",&num1, &num2);
    

    switch(op)
    {
        case '+':
            printf("The result of the operation %.1lf + %.1lf = %.1lf",num1, num2, num1 + num2);
            break;

        case '-':
            printf("The result of the operation %.1lf - %.1lf = %.1lf",num1, num2, num1 - num2);
            break;

        case '*':
            printf("The result of the operation %.1lf * %.1lf = %.1lf",num1, num2, num1 * num2);
            break;

        case '/':
            printf("The result of the operation %.1lf / %.1lf = %.1lf",num1, num2, num1 / num2);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! The entered operator is invalid");
     }
    

    return 0;
}
