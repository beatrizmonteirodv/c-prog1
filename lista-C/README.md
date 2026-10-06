# Lista C - revisão de Programação I

Códigos organizados a partir do treino de 27/09/2026, complementados com os exercícios da conversa de preparação para a maratona.

Foco: entrada e saída, operações, divisão inteira, resto e estruturas condicionais em C++.

## Arquivos

1. `01_compra_com_desconto.cpp` — total da compra e desconto de 10% a partir de R$ 200.
2. `02_quociente_e_resto.cpp` — divisão inteira e operador de resto.
3. `03_grupos_necessarios.cpp` — quantidade de grupos arredondada para cima quando há sobra.
4. `04_hora_minuto_para_total.cpp` — hora/minuto para total de minutos.
5. `05_total_para_hora_minuto.cpp` — total de minutos para horas e minutos.
6. `06_duracao_entre_horarios.cpp` — duração inclusive atravessando meia-noite.
7. `07_maior_de_tres.cpp` — maior entre três valores sem vetor ou sort.
8. `08_valor_no_meio.cpp` — verificar se um valor está entre outros dois.
9. `09_ano_bissexto.cpp` — regra completa de ano bissexto.
10. `10_classificacao_triangulo.cpp` — validar e classificar triângulo pelos lados.

11. `11_ingresso_menor_de_idade.cpp` — meia-entrada para menores de 18 anos.
12. `12_ingresso_faixas_etarias.cpp` — 50% para menores de 12; 30% de desconto a partir de 60.
13. `13_ingresso_estudante.cpp` — meia-entrada para menor de 18 ou estudante, sem acumular descontos.
14. `14_frete.cpp` — frete por distância e gratuidade em compras a partir de R$ 300.
15. `15_idade_do_meio.cpp` — imprimir a idade intermediária entre três, inclusive com empates.
16. `16_tarifa_progressiva.cpp` — consumo por faixas de 100 kWh a R$ 0,50, 100 a R$ 0,75 e restante a R$ 1,00.
17. `17_desafio_data_entrega.cpp` — validar data e hora, depois somar até 1440 minutos.
18. `18_hello_world.cpp` — primeiro teste de saída no terminal.
19. `19_leitura_arquivo.cpp` — ler o inteiro de `entrada.txt`, que contém o exemplo 15.

## Regras mentais

- `=` atribui; `==` compara.
- Pelo menos: `>=`. No máximo: `<=`.
- Entre limites: `x >= minimo && x <= maximo`.
- Todas as condições: `&&`. Uma das condições: `||`.
- Divisível por `k`: `n % k == 0`.
- Regras independentes: vários `if`.
- Uma única classificação: `if / else if / else`.
- Teste o limite, um valor abaixo e um acima.

## Como executar

Os programas são em **C++** (`.cpp`). Cada arquivo tem seu próprio `main`: compile e execute um de cada vez.

No terminal PowerShell, aberto nesta pasta:

```powershell
g++ -std=c++17 16_tarifa_progressiva.cpp -o tarifa.exe
.\tarifa.exe
```

Digite a entrada, por exemplo `250`, e pressione Enter. A saída será `175.00`.
Para outro exercício, troque o nome do arquivo e do executável.
No exercício de arquivo, execute a partir desta pasta para encontrar `entrada.txt`.

## Entradas e saídas dos exercícios acrescentados

| Arquivo | Entrada, nesta ordem | Saída |
| --- | --- | --- |
| 11 | idade, preço original | Preço com duas casas decimais |
| 12 | idade, preço original | Preço com duas casas decimais |
| 13 | idade, estudante (1 = sim, 2 = não), preço | Preço com duas casas decimais |
| 14 | valor da compra, distância em km | Frete e total, um por linha, com duas casas |
| 15 | três idades | Idade intermediária |
| 16 | consumo inteiro em kWh | Valor com duas casas decimais |
| 17 | dia, mês, ano, hora, minuto, prazo em minutos | Nova data/hora na mesma ordem, sem o prazo, ou `INVALIDO` |
| 18 | Sem entrada | `hello world` |
| 19 | Inteiro no arquivo `entrada.txt` | Inteiro lido |

O exercício 15 calcula a mediana; o 08 apenas verifica se o primeiro valor está entre os outros dois.
O desafio 17 foi criado para treino, sem representar uma previsão da prova. Aceita anos de entrada de 1900 a 2099 e prazo de 0 a 1440 minutos; a saída pode chegar a 2100.
Nos demais exercícios, considere entradas válidas e não negativas; nos exercícios 02 e 03, a capacidade precisa ser maior que zero.
Os dez arquivos iniciais mantêm seus formatos de saída originais. Em um juiz automático, adapte a saída exatamente ao enunciado.

## Testes para revisar

Nos exemplos abaixo, `/` na coluna de saída representa uma quebra de linha.

| Arquivo | Entrada | Saída esperada |
| --- | --- | --- |
| 11 | `17 40` | `20.00` |
| 11 | `18 40` | `40.00` |
| 12 | `11 100` | `50.00` |
| 12 | `12 100` | `100.00` |
| 12 | `59 100` | `100.00` |
| 12 | `60 100` | `70.00` |
| 13 | `17 1 40` | `20.00` |
| 13 | `18 1 40` | `20.00` |
| 13 | `18 2 40` | `40.00` |
| 14 | `100 5` | `12.00 / 112.00` |
| 14 | `100 6` | `20.00 / 120.00` |
| 14 | `100 15` | `20.00 / 120.00` |
| 14 | `100 16` | `35.00 / 135.00` |
| 14 | `300 16` | `0.00 / 300.00` |
| 15 | `30 10 20` | `20` |
| 15 | `20 20 30` | `20` |
| 16 | `0` | `0.00` |
| 16 | `99` | `49.50` |
| 16 | `100` | `50.00` |
| 16 | `101` | `50.75` |
| 16 | `200` | `125.00` |
| 16 | `201` | `126.00` |
| 16 | `250` | `175.00` |
| 17 | `31 12 2026 23 30 90` | `1 1 2027 1 0` |
| 17 | `28 2 2024 23 30 60` | `29 2 2024 0 30` |
| 17 | `28 2 2025 23 30 60` | `1 3 2025 0 30` |
| 17 | `29 2 1900 10 0 0` | `INVALIDO` |
| 17 | `29 2 2000 10 0 0` | `29 2 2000 10 0` |
| 17 | `31 4 2026 10 0 0` | `INVALIDO` |
| 17 | `1 1 2026 10 0 1440` | `2 1 2026 10 0` |
| 17 | `1 1 2026 10 0 1441` | `INVALIDO` |
