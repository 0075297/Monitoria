//Lista de Exerc�cios Monitoria
//P236 - Fitness III
//Autor: Mateus Pires Moreira

//Inclus�o da biblioeteca necess�ria para a entrada e saida de dados.
#include <iostream>

//Defini��o do namespace std como padr�o, t�cnica utilizada para poupar tempo.
using namespace std;

//Defini��o da fun��o principal.
int main(){
	
	//Cria��o das vari�veis que receberam o tempo praticado em cada esporte,
	//considera-se, para o bom funcionamento do programa que o tempo esteja
	//em minutos.
	int Mb = 0, Mc = 0, Mf = 0, Mv = 0;
	
	//Atualiza��o das vari�veis, recebendo os valores pela entrada padr�o.
	cin >> Mb >> Mc >> Mf >> Mv;
	
	//O n�mero total de calorias queimadas, considerando todas as atividades
	//corresponde a soma do produto das m�dias pr�-estabelcidas com seu
	//determinado tempo de execu��o. As m�dias foram apresentadas como kcal/min,
	//por�m, para que a sa�da seja compat�vel com o esperado, foram
	//consideradas cal/min.
	int calorias = Mb * 10 + Mc * 6 + Mf * 9 + Mv * 6;
	
	//Exibi��o do n�mero total de calorias pela sa�da padr�o.
	cout << calorias;
	
	//Fim do programa.
	return 0;
}