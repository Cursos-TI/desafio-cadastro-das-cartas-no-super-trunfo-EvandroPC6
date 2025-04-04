# Super Trunfo - Jogo de Comparação de Cartas

## Descrição
Super Trunfo é um jogo de cartas onde os jogadores comparam atributos de suas cartas para determinar o vencedor. Cada carta representa uma cidade com informações como população, área, PIB, número de pontos turísticos, densidade populacional, entre outros.

## Como funciona o jogo

1. **Cadastro de Cartas**:
    - O jogador insere os dados de duas cartas, incluindo:
      - Estado (letra de A a H).
      - Código da carta (de 01 a 04).
      - Nome da cidade.
      - População.
      - Área em km².
      - PIB.
      - Número de pontos turísticos.
    - A densidade populacional e o PIB per capita são calculados automaticamente.
    - Um "Super Poder" é calculado com base nos atributos da carta.

2. **Comparação de Atributos**:
    - O jogador escolhe dois atributos para comparar entre as cartas.
    - Os atributos disponíveis para comparação são:
      1. População.
      2. Área.
      3. PIB.
      4. Número de pontos turísticos.
      5. Densidade populacional.

3. **Regras de Comparação**:
    - O jogador não pode escolher o mesmo atributo para as duas comparações.
    - Para cada atributo escolhido, os valores das duas cartas são comparados.

4. **Resultado**:
    - A soma dos atributos escolhidos é calculada para cada carta.
    - A carta com a maior soma vence.
    - Em caso de empate, o jogo informa que houve empate.

## Como executar o jogo
1. Compile o código com um compilador C, como `gcc`:
    ```
    gcc -o super-trunfo super-trunfo.c
    ```
2. Execute o programa:
    ```
    ./super-trunfo
    ```
3. Siga as instruções no terminal para cadastrar as cartas e realizar as comparações.

## Observações
- Certifique-se de inserir valores válidos para os atributos.
- O jogo é baseado em entradas manuais e não possui interface gráfica.