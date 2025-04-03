#include <stdio.h>

int main(){

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinA = 500;
    unsigned int estoqueMinB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;
    
    resultadoA = estoqueA > estoqueMinA;
    resultadoB = estoqueB > estoqueMinB;

    printf("O %s tem %u unidades em estoque, e o valor unitário é R$%.2f.\n", produtoA, estoqueA, valorA);
    printf("O %s tem %u unidades em estoque, e o valor unitário é R$%.2f.\n", produtoB, estoqueB, valorB);

    printf("O %s tem estoque minímo[%d]\n", produtoA, resultadoA);
    printf("O %s tem estoque minímo[%d]\n", produtoB, resultadoB);

    printf("O valor total de A(R$%.2f) é maior que B(R$%.2f) --> [%d]\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));
    printf("O valor total de B(R$%.2f) é maior que A(R$%.2f) --> [%d]\n", estoqueB * valorB ,estoqueA * valorA, (estoqueA * valorA) < (estoqueB * valorB));
}