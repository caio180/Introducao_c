#include <stdio.h>

int main(){
    int num1, num2;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite a operação desejada: ");
    scanf("%c", &operador);
   
    switch (operador){
    case '+':
        printf("soma");
        break;
    case '-':
        printf("sub");
        break;
    case '*':
        printf("Mul");
        break;
    case '/':
        printf("div");
        break;

    default:
        printf("Operação inválida");        
        break;
    }

}