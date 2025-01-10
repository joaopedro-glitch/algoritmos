programa {
  funcao inicio() {
    
    real km_percorrido, dias_alugados, valor_pagar

    escreva("Informe a quantidade de kms percorridos pelo carro: ")
    leia(km_percorrido)
   
    escreva("Informe por quantos dias o carro foi alugado: ")
    leia(dias_alugados)

    valor_pagar= (dias_alugados*70)+(km_percorrido*0.15)

    escreva("O valor a ser pago pelo aluguel do carro é: ", valor_pagar)

  }
}
