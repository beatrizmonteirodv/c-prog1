# Questões 1 a 5 — Programação 1 em C++

Resoluções das questões enviadas nas fotos de 14/10/2026. A questão 6 foi excluída conforme solicitado. Cada arquivo é um programa independente, com seu próprio `main`.

Usamos apenas `int` para os números, entrada e saída, operações aritméticas, `if`, `while` e `for`. Os programas não imprimem perguntas antes da leitura: a saída contém somente o resultado pedido.

## Como executar

Com o compilador g++ instalado, abra o terminal nesta pasta. Para a questão 1:

```powershell
g++ -std=c++17 -Wall -Wextra questao1.cpp -o questao1.exe
./questao1.exe
```

Digite a entrada e pressione Enter. Nas outras questões, troque o número do arquivo. Compile um arquivo por vez.

## Questão 1 — Caixa eletrônico

Código: [questao1.cpp](questao1.cpp).

1. Leia o valor do saque.
2. Divida por 100 para obter a quantidade de notas de 100. Como os valores são inteiros, a divisão descarta a parte decimal.
3. Use `% 100` para guardar somente o valor que falta pagar.
4. Repita para 50, 20, 10, 5 e 2.
5. Se sobrar algum valor, imprima `IMPOSSIVEL`. Caso contrário, imprima as seis quantidades.

Entrada do exemplo:

```text
185
```

Saída:

```text
100: 1
50: 1
20: 1
10: 1
5: 1
2: 0
```

Para a entrada `186`, a saída é `IMPOSSIVEL`.

**Inconsistência do enunciado:** seguindo as maiores notas primeiro, 186 usa 100 + 50 + 20 + 10 + 5, sobrando 1. É por isso que o exemplo diz `IMPOSSIVEL`. Porém, 100 + 50 + 20 + 10 + 2 + 2 + 2 forma 186. A solução segue o procedimento e o exemplo da foto; ela não decide se existe qualquer combinação possível de notas. O mesmo problema ocorre com 6 e 8. Se a intenção do professor for encontrar uma combinação sempre que existir, a regra e o exemplo precisam ser esclarecidos.

## Questão 2 — Quantos algarismos pares?

Código: [questao2.cpp](questao2.cpp).

1. Comece a quantidade e a soma em zero.
2. `numero % 10` pega o último algarismo. Por exemplo: `582406 % 10` resulta em 6.
3. Se o resto da divisão do algarismo por 2 for zero, ele é par: aumente a quantidade e acrescente o algarismo à soma.
4. `numero / 10` remove o último algarismo. Por exemplo: `582406 / 10` resulta em 58240.
5. Repita enquanto ainda houver algarismos.

O zero é contado como par, mas acrescenta zero à soma. O número não é convertido para texto.

Entrada:

```text
582406
```

Saída:

```text
Quantidade pares: 5
Soma pares: 20
```

Os pares são 8, 2, 4, 0 e 6: cinco algarismos, com soma 20.

**Diferença na foto:** a seção de saída pede `Quantidade:` e `Soma:`, enquanto o exemplo usa `Quantidade pares:` e `Soma pares:`. Este código segue o exemplo. Caso a correção exija o texto da seção de saída, basta trocar os dois rótulos no `cout`.

## Questão 3 — Estacionamento rotativo

Código: [questao3.cpp](questao3.cpp).

1. Comece cobrando 8 reais, que cobrem até 60 minutos.
2. Se passar de 60 minutos, calcule os minutos extras.
3. Divida os minutos extras por 60 para contar as horas completas.
4. Se houver resto, acrescente mais uma hora, pois uma fração também é cobrada.
5. Some 5 reais por hora extra.

| Entrada em minutos | Saída |
| --- | --- |
| 30 | `Valor a pagar: R$ 8.00` |
| 60 | `Valor a pagar: R$ 8.00` |
| 61 | `Valor a pagar: R$ 13.00` |
| 125 | `Valor a pagar: R$ 18.00` |

Em 125 minutos, restam 65 minutos depois da primeira hora. Isso corresponde a uma hora completa e uma fração: duas horas adicionais. Total: 8 + 2 × 5 = 18 reais. Como as tarifas são inteiras, o programa calcula com inteiros e imprime `.00` ao final.

## Questão 4 — Número espelho

Código: [questao4.cpp](questao4.cpp).

1. Guarde uma cópia do número original.
2. Comece o número invertido em zero.
3. Pegue o último algarismo usando `% 10`.
4. Multiplique o invertido por 10 e acrescente o algarismo. Isso coloca o novo algarismo à direita.
5. Remova o último algarismo do número usando `/ 10`.
6. Ao terminar, compare o invertido com o original.

Para 1221, o invertido passa pelos valores 1, 12, 122 e 1221. Como o resultado é igual ao original, a resposta é `SIM`. Não são usadas strings para inverter o número.

| Entrada | Saída |
| --- | --- |
| 1221 | `SIM` |
| 1234 | `NAO` |
| 7 | `SIM` |

## Questão 5 — O maior salto

Código: [questao5.cpp](questao5.cpp).

1. Leia a quantidade e o primeiro valor, guardando-o em `anterior`.
2. Comece o maior salto em zero.
3. Leia o próximo valor em `atual` e calcule `atual - anterior`.
4. Se a diferença for negativa, troque seu sinal para obter o valor absoluto.
5. Atualize o maior salto se a diferença encontrada for maior.
6. Guarde o valor atual como anterior e continue a leitura.

Não é usado vetor: cada valor é processado assim que é lido. Se houver apenas um valor, o laço não executa e o resultado permanece zero.

Entrada:

```text
6
10
15
8
20
18
30
```

Saída:

```text
Maior salto: 12
```

As diferenças absolutas são 5, 7, 12, 2 e 12. A maior é 12.

## Testes e limites

Execute no PowerShell, com g++ disponível:

```powershell
./testar.ps1
```

O script compila os cinco programas com `-std=c++17 -Wall -Wextra -Werror` e compara as saídas com resultados esperados, incluindo os espaços e rótulos. Foram executados **32 testes, todos aprovados**, incluindo todos os exemplos fornecidos nas fotos para as questões 1 a 5.

| Questão | Testes | Casos incluídos |
| --- | ---: | --- |
| 1 | 7 | 185, 186, nota única, valor 1, resto 1 e uso de notas de 2 |
| 2 | 5 | Exemplo, nenhum par, zeros, algarismo único e pares repetidos |
| 3 | 8 | Exemplos e limites de 1, 60, 61, 120, 121 e 180 minutos |
| 4 | 6 | Três exemplos, zero final, zero interno e número de seis algarismos |
| 5 | 6 | Exemplo, um valor, valores iguais, negativos e salto de 2000 |

As soluções usam `int`, conforme o nível de conteúdo solicitado. Os valores lidos e os resultados das contas precisam caber nesse tipo, inclusive o número invertido na questão 4 e a diferença na questão 5. No compilador testado, `int` vai de -2.147.483.648 a 2.147.483.647. As fotos não informam limites máximos; números que ultrapassem essa capacidade não são cobertos por esta versão simples.
