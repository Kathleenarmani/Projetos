#include <stdio.h>
#include <math.h>
#include <string.h>

//https://github.com/Kathleenarmani/Projetos
// Para potenciação foi utilizada a biblioteca math.h do C
// via: https://acervolima.com/funcao-power-em-c-c/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Por convenção as variáveis valor1 e valor2 são utilizadas para denotar os dois valores recebidos. A variável resultado é para os resultados //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Função soma, receberá dois valores do tipo float(flutuantes) e retornará a multiplicação dos valores.
void soma (int cont) {
    float resultado, aux;
    for(int i=0; i < cont; i++){
        printf("Digite o valor a ser somado:\n");
        scanf("%f", &aux);
        resultado = resultado + aux;
    }
    printf("O resultado da soma e %.2f\n", resultado);
}

// Função divisão, receberá dois valores do tipo float(flutuantes) e retornará a multiplicação dos valores.
void divisao () {
    float valor1, valor2 = 0;
    printf("Digite o dividendo:\n");
    scanf("%f", &valor1);
      
    printf("Digite o divisor:\n");
    scanf("%f", &valor2);

    if (valor2 == 0 ){
        printf("Erro: a divisao por zero resulta em um numero indefinido");
    } else {
        float resultado = valor1 / valor2;
        printf("O resultado da divisao e: %.2f\n",resultado);
    }
}
// Função multiplicação, receberá dois valores do tipo float(flutuantes) e retornará a multiplicação dos valores.
void multiplicacao () {
    float valor1, valor2 = 0;
    printf("Digite o primeiro valor a ser multiplicado:\n");
    scanf("%f", &valor1);
      
    printf("Digite o segundo valor a ser multiplicado:\n");
    scanf("%f", &valor2);

    float resultado = valor1 * valor2;
    printf("O resultado da multiplicacao e: %.2f\n",resultado);
}
//Função subtração, receberá dois valores do tipo float (flutuantes) e retornará a subtração dos valores.
void subtracao () {
    float valor1, valor2;
    printf("Digite o primeiro valor:\n");
    scanf("%f", &valor1);
      
    printf("Digite o valor a ser subtraido:\n");
    scanf("%f", &valor2);

    float resultado = valor1 - valor2;
    printf("O resultado da diferenca é: %.2f\n",resultado);
}
// Função soma, receberá dois valores do tipo float (flutuantes) e retornará a soma dos valores.
// Como foi utilizada a biblioteca math.h, o tipo double foi utilizado para que não ocorra erros ao utilizar a função
void potenciacao () {
    float valor1, valor2;
    printf("Digite o valor da base:\n");
    scanf("%f", &valor1);
      
    printf("Digite o valor do expoente:\n");
    scanf("%f", &valor2);

    if (valor1 == 0 && valor2 == 0 ){
    
        printf("Erro: resultado indefinido");
    
    } else {
    
        double resultado = pow(valor1, valor2);
        printf("O resultado da potenciacao e: %.2f\n",resultado);  
    
    }
}
// Função radiação, receberá dois valores do tipo float (flutuantes) e retornará a raiz quadrada dos valores.
void radiciacao () {
    float valor1;
    printf("Digite o valor da base da raiz:\n");
    scanf("%f", &valor1);

    if ( valor1 < 0 ){
        
        printf("Erro: A calculadora apenas calcula valores reais. Por favor, insira numero maiores ou iguais a 0");

    } else {

        double resultado = sqrt(valor1);
        printf("O resultado da radiciacao e: %.2f\n", resultado);

    }
}
// Função principal, é um menu utilizando laço do-while.
// Ela força a saída do programa somente se o valor inserido pelo usuário for 0, caso contrário as funções de calculadora são chamadas
// O valor da variável resultado é sempre zerado no início do enlace para não ocorrer erros de memória
int main(void){
    char operador[5];
    int cont;
    int continuar = 1;

    printf("Nome: Kathleen Armani Brandao\n");
    printf("Curso: Analise e desenvolvimento de sistemas\n");
    printf("Matricula: 202211656\n");

    do
    {
        printf("\n\tCalculadora:\n\n");
        printf("< + > Somar um valor\n");
        printf("< / > Dividir um valor\n");
        printf("< r > Aplicar raiz quadrada\n");
        printf("< ^ > Calcular uma potencia\n");
        printf("< * > Multiplicacao\n");
        printf("< - > Subtrair dois numeros\n");
        printf("< 0 > Sair\n");

        scanf("%s", &operador);
        printf("\n%c\n", operador);

        // Se o valor inserido for +, chama a função de soma e imprime o valor.
        // Se o valor inserido for *, chama a função de multiplicação e imprime o valor.
        // Se o valor inserido for /, chama a função de divisão e imprime o valor.
        // Se o valor inserido for r, chama a função de radiciação e imprime o valor.
        // Se o valor inserido for ^, chama a função de potenciação e imprime o valor.
        // Se o valor inserido for -, chama a função de subtração e imprime o valor.
        if( strcmp(operador, "+") == 0) {
            printf("Digite o numero de operandos\n");
            scanf("%d", &cont);
            if ( cont <= 1 ){
                printf("Erro: E necessario que haja 2 ou mais nmeros para serem somados");
            } else {
                soma(cont);
            }
        } else if ( strcmp(operador, "*") == 0) {
            multiplicacao();
        } else if ( strcmp(operador, "r") == 0) {
            radiciacao();
        } else if ( strcmp(operador, "^") == 0) {
            potenciacao();
        } else if ( strcmp(operador, "/") == 0) {
            divisao();
        } else if ( strcmp(operador, "-") == 0) {
            subtracao();      
        } else if ( strcmp(operador, "0") == 0){
            continuar = 0;
            printf("Saindo do programa...\n");
        } else {
            printf("Opcao invalida\n");
        }
    } while(continuar);
}