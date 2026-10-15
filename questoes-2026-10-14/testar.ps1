$ErrorActionPreference = 'Stop'
Set-Location $PSScriptRoot
New-Item -ItemType Directory -Force build | Out-Null

foreach ($numero in 1..5) {
    & g++ -std=c++17 -Wall -Wextra -Werror "questao$numero.cpp" -o "build/questao$numero.exe"
    if ($LASTEXITCODE -ne 0) { throw "Falha ao compilar questao $numero" }
}

$casos = @(
    @{ Q=1; Entrada="185"; Saida="100: 1`n50: 1`n20: 1`n10: 1`n5: 1`n2: 0" },
    @{ Q=1; Entrada="186"; Saida="IMPOSSIVEL" },
    @{ Q=1; Entrada="1"; Saida="IMPOSSIVEL" },
    @{ Q=1; Entrada="2"; Saida="100: 0`n50: 0`n20: 0`n10: 0`n5: 0`n2: 1" },
    @{ Q=1; Entrada="100"; Saida="100: 1`n50: 0`n20: 0`n10: 0`n5: 0`n2: 0" },
    @{ Q=1; Entrada="188"; Saida="IMPOSSIVEL" },
    @{ Q=1; Entrada="189"; Saida="100: 1`n50: 1`n20: 1`n10: 1`n5: 1`n2: 2" },
    @{ Q=2; Entrada="582406"; Saida="Quantidade pares: 5`nSoma pares: 20" },
    @{ Q=2; Entrada="13579"; Saida="Quantidade pares: 0`nSoma pares: 0" },
    @{ Q=2; Entrada="1000"; Saida="Quantidade pares: 3`nSoma pares: 0" },
    @{ Q=2; Entrada="8"; Saida="Quantidade pares: 1`nSoma pares: 8" },
    @{ Q=2; Entrada="2222"; Saida="Quantidade pares: 4`nSoma pares: 8" },
    @{ Q=3; Entrada="60"; Saida='Valor a pagar: R$ 8.00' },
    @{ Q=3; Entrada="125"; Saida='Valor a pagar: R$ 18.00' },
    @{ Q=3; Entrada="30"; Saida='Valor a pagar: R$ 8.00' },
    @{ Q=3; Entrada="61"; Saida='Valor a pagar: R$ 13.00' },
    @{ Q=3; Entrada="1"; Saida='Valor a pagar: R$ 8.00' },
    @{ Q=3; Entrada="120"; Saida='Valor a pagar: R$ 13.00' },
    @{ Q=3; Entrada="121"; Saida='Valor a pagar: R$ 18.00' },
    @{ Q=3; Entrada="180"; Saida='Valor a pagar: R$ 18.00' },
    @{ Q=4; Entrada="1221"; Saida="SIM" },
    @{ Q=4; Entrada="1234"; Saida="NAO" },
    @{ Q=4; Entrada="7"; Saida="SIM" },
    @{ Q=4; Entrada="10"; Saida="NAO" },
    @{ Q=4; Entrada="1001"; Saida="SIM" },
    @{ Q=4; Entrada="123456"; Saida="NAO" },
    @{ Q=5; Entrada="6`n10`n15`n8`n20`n18`n30"; Saida="Maior salto: 12" },
    @{ Q=5; Entrada="1`n42"; Saida="Maior salto: 0" },
    @{ Q=5; Entrada="3`n5`n5`n5"; Saida="Maior salto: 0" },
    @{ Q=5; Entrada="3`n-10`n-3`n-20"; Saida="Maior salto: 17" },
    @{ Q=5; Entrada="2`n10`n-10"; Saida="Maior salto: 20" },
    @{ Q=5; Entrada="2`n-1000`n1000"; Saida="Maior salto: 2000" }
)

$aprovados = 0
foreach ($caso in $casos) {
    $linhas = $caso.Entrada | & "./build/questao$($caso.Q).exe"
    if ($LASTEXITCODE -ne 0) { throw "Erro ao executar questao $($caso.Q)" }
    $resultado = $linhas -join "`n"
    if ($resultado -cne $caso.Saida) {
        throw "Questao $($caso.Q), entrada $($caso.Entrada): esperado [$($caso.Saida)], obtido [$resultado]"
    }
    $aprovados++
    Write-Output "OK - questao $($caso.Q) - entrada: $($caso.Entrada.Replace("`n", ', '))"
}
Write-Output "$aprovados de $($casos.Count) testes passaram."
