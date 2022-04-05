# IMC

## Descrição
Este programa realiza o cálculo do **índice de massa corporal (IMC)** de uma pessoa e determinação do seu grau de obesidade. O IMC é uma medida internacional usada para calcular se uma pessoa está no peso ideal, sendo determinado pela divisão da massa do indivíduo (em quilogramas) pelo quadrado de sua altura (em metros), de acordo com a seguinte equaçào: 

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
* O arquivo [``imc.cpp``](https://github.com/bti-ufrn-lp1/imc/blob/master/imc.cpp) corresponde à 
