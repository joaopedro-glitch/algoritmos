programa {
  funcao inicio() {
    
   cadeia nome_funcionario
   real horas_trabalhadas, valor_hora, salario_funcionario, dias_trabalhados
   
   escreva("Informe o nome do funcionário: ")
   leia(nome_funcionario)

   escreva("Digite o número de horas trabalhadas por dia: ")
   leia(horas_trabalhadas)
   
   escreva("Digite o número de dias trabalhadas pelo funcionário: ")
   leia(dias_trabalhados)

   escreva("Informe quanto o funcionário ganha por hora: " )
   leia(valor_hora)

  salario_funcionario= (horas_trabalhadas*dias_trabalhados)*valor_hora

  escreva("O funcionário ", nome_funcionario, " ganha o salário de ", salario_funcionario)

  }
}
