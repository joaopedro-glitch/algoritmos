#include <stdio.h>

int main()
{
  int numAulas;  
  float horaAula, percentualINSS, descontoINSS, salarioBruto, salarioLiquido; 

printf("Insira o valor da hora aula em reais: ");
scanf("%f", &horaAula);

printf("Insira o total de aulas realizadas neste mes: ");
scanf("%d", &numAulas);

printf("Insira o percentual de desconto do INSS: ");
scanf("%f", &percentualINSS);

salarioBruto = (float) horaAula*numAulas; 
descontoINSS = (float)  (salarioBruto/100) * percentualINSS;
salarioLiquido = (float) salarioBruto - descontoINSS;

printf("O salario liquido do professor sera de: %.2f R$", salarioLiquido);


return 0;

}