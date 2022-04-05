/**
 * @file imc.cpp
 * @brief Programa que calcula o índice de massa corporal (IMC) de uma pessoa
 * @details O IMC e uma medida internacional usada para calcular se uma pessoa está
 *          no peso ideal. Essa medida é determinada pela divisão do peso da pessoa
 *          (em quilogramas) pelo quadrado de sua altura (em metros)
 * @author Everton Cavalcante
 * @since 05/04/2022
 * @date 05/04/2022
 * @sa https://pt.wikipedia.org/wiki/Índice_de_massa_corporal
 */

#include <cmath>
using std::pow;

#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <string>
using std::string;

/**
 * @brief Funcao que calcula o IMC de um indivíduo adulto a partir do seu peso e sua altura
 * @param peso Peso em quilogramas
 * @param altura Altura em metros
 * @return IMC do indivíduo
 */
float imc(float peso, float altura) {
    return peso / pow(altura, 2);
}

/**
 * @brief Função que determina o grau de obesidade de um indivíduo com base em seu IMC
 * @details A classificação do grau de obesidade de um indivíduo adulto é determinada
 *          por uma tabela de referencia internacional com base no IMC
 * @param imc IMC do indivíduo
 * @return Grau de obesidade do indivíduo
 * @sa https://www.euro.who.int/en/health-topics/disease-prevention/nutrition/a-healthy-lifestyle/body-mass-index-bmi
 */
string grau_obesidade(float imc) {
    if (imc < 18.5) {
        return "Indivíduo abaixo do peso";
    } else if (imc >= 18.5 && imc < 25) {
        return "Indivíduo com peso considerado normal";
    } else if (imc >= 25 && imc < 30) {
        return "Indivíduo com sobrepeso (pré-obesidade)";
    } else if (imc >= 30 && imc < 35) {
        return "Indivíduo obeso (obesidade classe 1)";
    } else if (imc >= 35 && imc < 40) {
        return "Indivíduo com obesidade severa (obesidade classe 2)";
    } else {
        return "Indivíduo com obesidade mórbida (obesidade classe 3)";
    }
}

/**
 * @brief Funcao principal
 * @details Cálculo do IMC do indivíduo a partir dos dados de altura e peso
 *          fornecidos pelo usuário via linha de comando e classificação do grau
 *          de obesidade com base no IMC. O primeiro argumento refere-se ao peso
 *          (em quilogramas) e o segundo a altura (em metros).
 * @param argc Numero de argumentos fornecidos via linha de comando
 * @param argv Argumentos fornecidos via linha de comando
 */
int main(int argc, char *argv[]) {
    if (argc != 3) {
        cerr << "Número inválido de argumentos de entrada (requeridos 2)" << endl;
        return 1;
    }

    float peso = atof(argv[1]);
    float altura = atof(argv[2]);
    
    // Calculo do IMC
    float valor_imc = imc(peso, altura);
    cout << "Índice de massa corporal (IMC): " << valor_imc << endl;
    
    // Classificacao do grau de obesidade
    cout << "Grau de obesidade: " << grau_obesidade(valor_imc) << endl;
    return 0;
}
