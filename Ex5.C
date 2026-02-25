#include <stdio.h>

int main() {
    double salarioMinimo, dolar;
    double totalReais, custoCasa;
    long long casas;

    printf("Digite o valor do salario minimo (R$): ");
    scanf("%lf", &salarioMinimo);

    printf("Digite o valor do dolar do dia (R$): ");
    scanf("%lf", &dolar);

    totalReais = 10000000.0 * dolar;         
    custoCasa = 150.0 * salarioMinimo;       

    casas = (long long)(totalReais / custoCasa); 

    printf("Quantidade de casas possiveis = %lld\n", casas);

    return 0;
}
