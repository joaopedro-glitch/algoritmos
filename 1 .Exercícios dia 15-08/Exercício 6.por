programa {
  funcao inicio() {
    
   cadeia nome_funcionario
   real horas_trabalhadas, valor_hora, salario_funcionario, dias_trabalhados
   
   escreva("Informe o nome do funcion�rio: ")
   leia(nome_funcionario)

   escreva("Digite o n�mero de horas trabalhadas por dia: ")
   leia(horas_trabalhadas)
   
   escreva("Digite o n�mero de dias trabalhadas pelo funcion�rio: ")
   leia(dias_trabalhados)

   escreva("Informe quanto o funcion�rio ganha por hora: " )
   leia(valor_hora)

  salario_funcionario= (horas_trabalhadas*dias_trabalhados)*valor_hora

  escreva("O funcion�rio ", nome_funcionario, " ganha o sal�rio de ", salario_funcionario)

  }
}
