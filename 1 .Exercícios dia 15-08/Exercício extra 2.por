programa {
  funcao inicio() {
     
  real consumo_medio, autonomia, 
      capacidade_tanque, quantidade_litros_abastecidos,   quilometragem_desde_abastecimento


    escreva("Forne�a a capacidade do tanque em litros de seu ve�culo: " )
    leia(capacidade_tanque)

    escreva("Insira a quantidade de litros abastecidos: ")
    leia(quantidade_litros_abastecidos)

    escreva("Insira a quilometragem desde o �tilmo abastecimento: ")
    leia(quilometragem_desde_abastecimento)


    consumo_medio= quilometragem_desde_abastecimento/ quantidade_litros_abastecidos
    autonomia=  consumo_medio * capacidade_tanque

    escreva("O consumo m�dio do seu ve�culo � de ", consumo_medio, " km/L.\n",
            "A autonomia do seu ve�culo � de: ", autonomia, " km.") 




  }
}
