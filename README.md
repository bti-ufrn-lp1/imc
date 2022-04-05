# IMC

## Sobre
Este programa realiza o cálculo do **índice de massa corporal - IMC** de uma pessoa e determinação do seu grau de obesidade. O IMC é uma medida internacional usada para calcular se uma pessoa está no peso ideal, sendo determinado pela divisão da massa do indivíduo (em quilogramas) pelo quadrado de sua altura (em metros), de acordo com a seguinte equaçào: 

<img src="https://latex.codecogs.com/svg.latex?IMC=\frac{massa}{altura^2}" />

O valor do IMC é utilizado para classificar o grau de obesidade de um indivíduo adulto com mais de 20 anos de acordo com a seguinte [tabela de referência](https://www.euro.who.int/en/health-topics/disease-prevention/nutrition/a-healthy-lifestyle/body-mass-index-bmi):

| IMC | Grau de obesidade  |
| --- | ------------------ |
| Abaixo de 18,5 | Indivíduo abaixo do peso |
| Entre 18,5 e 24,9 | Indivíduo com peso normal |
| Entre 25,0 e 29,9 | Indivíduo com sobrepeso (pré-obeso) |
| Entre 30,0 e 34,9 | Indivíduo obeso (obesidade classe 1) |
| Entre 35,0 e 39,9 | Indivíduo com obesidade severa (obesidade classe 2) |
| Acima de 40,0 | Indivíduo com obesidade mórbida (obesidade classe 3) |

## Implementação
Este programa foi implementado na linguagem de programação C++, estando organizado da seguinte forma:
- O arquivo fonte [``imc.cpp``](https://github.com/bti-ufrn-lp1/imc/blob/master/imc.cpp) corresponde à implementação do programa propriamente dito, o qual é composto das seguintes funções:
     - ``imc``: calcula o IMC de um indivíduo adulto a partir do seu peso e sua altura
     - ``grau_obesidade``: determina o grau de obesidade de um indivíduo com base em seu IMC
     - ``main``: função principal do programa
- O arquivo de configuração [``Doxyfile``](https://github.com/bti-ufrn-lp1/imc/blob/master/Doxyfile) serve de entrada ao [Doxygen](https://www.doxygen.nl/), uma ferramenta para geração automática de documentação de código fonte
- O diretório [``doc``](https://github.com/bti-ufrn-lp1/imc/tree/master/doc) contém a documentação gerada automaticamente pelo Doxygen como páginas HTML a partir de anotações presentes no código fonte.

## Pré-requisitos
- [Git](https://git-scm.com), para *download* dos arquivos deste repositório
- Compilador g++, para compilação do programa
- [Doxygen](https://www.doxygen.nl/), para geração automática de documentação de código fonte
- [Graphviz](https://www.graphviz.org), para visualização de grafos de dependências na documentação

## Download, compilação e execução do programa
No terminal do sistema operacional, insira o seguinte comando para realizar o *download* da implementação a partir deste repositório Git:

```bash
 git clone https://github.com/bti-ufrn-lp1/imc.git
```

Em seguida, navegue para o diretório ``imc`` e insira o seguinte comando para compilar o programa:

```bash
 g++ -W -Wall -pedantic imc.cpp -o imc
```

O programa ``imc`` requer como entrada dois argumentos numéricos, os quais devem ser fornecidos pelo usuário via linha de comando. O primeiro argumento refere-se ao peso em quilogramas e o segundo à altura (em metros). O programa pode ser executado a partir do terminal do sistema operacional como mostra o seguinte exemplo:

```bash
 ./imc 65 1.64
```

Nesse caso, o programa calcula o IMC e determina o grau de obesidade de um indivíduo adulto de 65 quilos e com 1,64 metros de altura. Para essas entradas, o programa exibe a seguinte saída no terminal do sistema operacional:

```bash
 Índice de massa corporal: 24.1672
 Grau de obesidade: Indivíduo com peso considerado normal
```
