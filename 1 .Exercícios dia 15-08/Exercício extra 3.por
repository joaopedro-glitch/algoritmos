programa {
  funcao inicio() {
    
  real valor_gasto, valor_gorjeta, valor_total_pagar

  escreva("Insira o valor gasto em R$: ")
  leia(valor_gasto)

  valor_gorjeta= valor_gasto*0.1
  valor_total_pagar= valor_gasto+ valor_gorjeta

  escreva("O valor da comiss�o do gar�om � de ", valor_gorjeta, " R$\n",
          "O valor total a pagar � de: ", valor_total_pagar, " R$"  )



  }
}
