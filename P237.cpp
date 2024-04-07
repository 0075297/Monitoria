//Lista de Exerc�cios Monitoria
//P237 - Jogos II (Snake)
//Autor: Mateus Pires Moreira

//Inclus�o da biblioeteca necess�ria para a entrada e saida de dados.
#include <iostream>

//Defini��o do namespace std como padr�o, t�cnica utilizada para poupar tempo.
using namespace std;

//Defini��o da fun��o principal.
int main() {
	
	//Cria��o das vari�veis que representam, respectivamente, o n�mero
	//de segmentos (tamanho) da cobra e o n�mero de movimenta��es simuladas.
	int S = 0, N = 0;
	
	//Atualiza��o da vari�vel, recebendo seu valor da entrada padr�o.
	cin >> S;
	
	//Cria��o dos vetores que representam, em conjunto, a posi��o de cada
	//segmento da cobra, com um sistema similar ao de um plano cartesiano.
	int X[S], Y[S];
	
	//Atualiza��o das posi��es iniciais de cada segmento, recebidas pela
	//entrada padr�o.
	for (int i = 0; i < S; i++){
		cin >> X[i];
	}
	for (int i = 0; i < S; i++){
		cin >> Y[i];
	}
	
	//Atualiza��o do n�mero de movimenta��es a serem simuladas.
	cin >> N;
	
	//Estrutura de repeti��o respons�vel pelo processamento das movimenta��es
	//simuladas.
	for (int i = 0; i < N; i++){
		
		//Cria��o da vari�vel que representa a movimenta��o a ser executada.
		char m = '-';
		
		//Atualiza��o da movimenta��o a ser realizada nessa itera��o
		//do �ndice i, recebendo seu valor pela entrada padr�o.
		cin >> m;
		
		//Come�ando pelo �ltimo segmento, cada um deles recebe a posi��o do
		//pr�ximo, fazendo com que a cobra ande uma casa comtodo o corpo,
		//exceto pela cabe�a, que ser� movimentada a seguir.
		for (int j = 0; j < S-1; j++){
			X[j] = X[j+1];
			Y[j] = Y[j+1];
		}
		
		//Um bloco de tomada de decis�o, um bloco diferente ser� executado,
		//dependendo da movimenta��o selecionada (o valor da vari�vel m).
		switch(m){
			//Cada um dos casos abaixo indica uma movimenta��o poss�vel para a
			//cabe�a, apenas um deles ser� executado.
			case 'c':
				//Caso a cobra ande para cima, seu valor no eixo Y diminuir�.
				Y[S-1]--;
				break;
			case 'b':
				//Caso a cobra ande para baixo, seu valor no eixo Y aumentar�.
				Y[S-1]++;
				break;
			case 'e':
				//Caso a cobra ande para a esquerda, seu valor
				//no eixo X diminuir�.
				X[S-1]--;
				break;
			case 'd':
				//Caso a cobra ande para a direita, seu valor
				//no eixo X aumentar�.
				X[S-1]++;
				break;
		}
		
		//Pode-se observar pela tabela que o eixo Y funciona diferente do
		//convencional. Estamos acostumados com o sistema de coordenadas
		//do Plano Cartesiano, em que os valores aumentam para a direita
		//no eixo X e para cima no eixo Y. Entretanto nos exemplos que nos
		//foram dados pela tabela, o eixo Y aumenta seu valor quando a cobra
		//se movimenta para baixo. Por isso, no caso de movimenta��o para
		//baixo, o valor no eixo Y � incrementado e no caso de movimenta��o
		//para cima o valor � decrementado.
		
		//As novas posi��es de cada segmento s�o imprimidas na tela, pela
		//sa�da padr�o, primeiramente com todos os valores no eixo X e
		//posteriormente todos os valores no eixo Y.
		for (int j = 0; j < S; j++){
			cout << X[j] << endl;
		}
		for (int j = 0; j < S; j++){
			cout << Y[j] << endl;
		}
	}
	//Fim do programa
	return 0;
}