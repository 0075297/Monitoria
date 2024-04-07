//Lista de Exercícios Monitoria
//P236 - Fitness III
//Autor: Mateus Pires Moreira

//Inclusão da biblioeteca necessária para a entrada e saida de dados.
#include <iostream>

//Definição do namespace std como padrão, técnica utilizada para poupar tempo.
using namespace std;

//Definição da função principal.
int main(){
	
	//Criação das variáveis que receberam o tempo praticado em cada esporte,
	//considera-se, para o bom funcionamento do programa que o tempo esteja
	//em minutos.
	int Mb = 0, Mc = 0, Mf = 0, Mv = 0;
	
	//Atualização das variáveis, recebendo os valores pela entrada padrão.
	cin >> Mb >> Mc >> Mf >> Mv;
	
	//O número total de calorias queimadas, considerando todas as atividades
	//corresponde a soma do produto das médias pré-estabelcidas com seu
	//determinado tempo de execução. As médias foram apresentadas como kcal/min,
	//porém, para que a saída seja compatível com o esperado, foram
	//consideradas cal/min.
	int calorias = Mb * 10 + Mc * 6 + Mf * 9 + Mv * 6;
	
	//Exibição do número total de calorias pela saída padrão.
	cout << calorias;
	
	//Fim do programa.
	return 0;
}