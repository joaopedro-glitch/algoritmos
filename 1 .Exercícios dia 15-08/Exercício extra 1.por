programa {
  funcao inicio() {
    
    cadeia nome_vendedor
    real salario_fixo, vendas_mes,  total_mes

    escreva("Digite o nome do vendedor: ")
    leia(nome_vendedor)

    escreva("Informe o salário fixo do vendedor: ")
    leia(salario_fixo)

    escreva("Informe o valor das vendas realizadas pelo funcionário no mês: ")
    leia(vendas_mes)

    total_mes= salario_fixo +(vendas_mes*0.15)

    escreva("O salário do vendedor ", nome_vendedor, " recebeu ", total_mes, " neste mês.")





  }
}
