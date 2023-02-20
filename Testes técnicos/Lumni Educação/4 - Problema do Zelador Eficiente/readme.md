# Problema do Zelador Eficiente

O zelador de uma faculdade é extremamente eficiente. Ao final de cada dia, todo o lixo da escola está em sacos plásticos com peso entre 1,01 e 3,00 quilos. Então, todas as sacolas plásticas são levadas para as lixeiras do lado de fora. Uma viagem é descrita como selecionar um número de sacolas que juntas não pesam mais de 3,00 quilos, despejá-las na lixeira externa e retornar à faculdade. Dado o número de sacolas plásticas n e o peso de cada sacola, determine o número mínimo de viagens que o zelador deve fazer.

### Descrição do formato da função solução
1) Recebe como parâmetro um vetor com o peso das sacolas a serem levadas.
2) Retorne à quantidade de viagens que o zelador deve fazer.

#### Exemplos

<pre>
Exemplo 1:
Entrada: pesos = [1.01, 1.99, 2.5, 1.5, 1.01]
Saída: 3
Explicação: O zelador consegue levar todas as sacolas plásticas em 3 viagens: [1,01 + 1,99 , 2,5, 1,5 + 1,01].
</pre>

<pre>
Exemplo 2:
Entrada: pesos = [1.01, 1.01, 1.01, 1.4]
Saída: 2
</pre>

<pre>
Exemplo 3:
Entrada: pesos = [1.01, 1.993, 1.32, 1.7, 1.8]
Saída: 4
</pre>