programa {
  funcao inicio() {
    
    real valor_total_vendas, numero_sapatos_vendidos, salario_vendedor
    const real COMISSAO= 0.2, SAPATOS_VENDIDOS = 5

    escreva("Insira o valor total de vendas mensais em R$: ")
    leia(valor_total_vendas)

    escreva("Insira o n�mero de sapatos vendidos neste m�s: ")
    leia(numero_sapatos_vendidos)

    valor_total_vendas= (valor_total_vendas*COMISSAO) + (numero_sapatos_vendidos* SAPATOS_VENDIDOS)

    escreva("O sal�rio desse vendedor nesse m�s ser� de: ", valor_total_vendas, " R$")





  }
}
