#include <stdio.h>

int main(){
    int num1, num2;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite a operação desejada: ");
    scanf(" %c", &operador);
   
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    switch (operador){
    case '+':
        printf("Resultado: %d\n", num1 + num2);
        break;
    case '-':
        printf("Resultado: %d\n", num1 - num2);
        break;
    case '*':
        printf("Resultado: %d\n", num1 * num2);
        break;
    case '/':
        printf("Resultado: %d\n", num1 + num2);
        break;

    default:
        printf("Operação inválida");        
        break;
    }

}