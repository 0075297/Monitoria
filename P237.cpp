//Lista de Exercícios Monitoria
//P237 - Jogos II (Snake)
//Autor: Mateus Pires Moreira

//Inclusão da biblioeteca necessária para a entrada e saida de dados.
#include <iostream>

//Definição do namespace std como padrão, técnica utilizada para poupar tempo.
using namespace std;

//Definição da função principal.
int main() {
	
	//Criação das variáveis que representam, respectivamente, o número
	//de segmentos (tamanho) da cobra e o número de movimentações simuladas.
	int S = 0, N = 0;
	
	//Atualização da variável, recebendo seu valor da entrada padrão.
	cin >> S;
	
	//Criação dos vetores que representam, em conjunto, a posição de cada
	//segmento da cobra, com um sistema similar ao de um plano cartesiano.
	int X[S], Y[S];
	
	//Atualização das posições iniciais de cada segmento, recebidas pela
	//entrada padrão.
	for (int i = 0; i < S; i++){
		cin >> X[i];
	}
	for (int i = 0; i < S; i++){
		cin >> Y[i];
	}
	
	//Atualização do número de movimentações a serem simuladas.
	cin >> N;
	
	//Estrutura de repetição responsável pelo processamento das movimentações
	//simuladas.
	for (int i = 0; i < N; i++){
		
		//Criação da variável que representa a movimentação a ser executada.
		char m = '-';
		
		//Atualização da movimentação a ser realizada nessa iteração
		//do índice i, recebendo seu valor pela entrada padrão.
		cin >> m;
		
		//Começando pelo último segmento, cada um deles recebe a posição do
		//próximo, fazendo com que a cobra ande uma casa comtodo o corpo,
		//exceto pela cabeça, que será movimentada a seguir.
		for (int j = 0; j < S-1; j++){
			X[j] = X[j+1];
			Y[j] = Y[j+1];
		}
		
		//Um bloco de tomada de decisão, um bloco diferente será executado,
		//dependendo da movimentação selecionada (o valor da variável m).
		switch(m){
			//Cada um dos casos abaixo indica uma movimentação possível para a
			//cabeça, apenas um deles será executado.
			case 'c':
				//Caso a cobra ande para cima, seu valor no eixo Y diminuirá.
				Y[S-1]--;
				break;
			case 'b':
				//Caso a cobra ande para baixo, seu valor no eixo Y aumentará.
				Y[S-1]++;
				break;
			case 'e':
				//Caso a cobra ande para a esquerda, seu valor
				//no eixo X diminuirá.
				X[S-1]--;
				break;
			case 'd':
				//Caso a cobra ande para a direita, seu valor
				//no eixo X aumentará.
				X[S-1]++;
				break;
		}
		
		//Pode-se observar pela tabela que o eixo Y funciona diferente do
		//convencional. Estamos acostumados com o sistema de coordenadas
		//do Plano Cartesiano, em que os valores aumentam para a direita
		//no eixo X e para cima no eixo Y. Entretanto nos exemplos que nos
		//foram dados pela tabela, o eixo Y aumenta seu valor quando a cobra
		//se movimenta para baixo. Por isso, no caso de movimentação para
		//baixo, o valor no eixo Y é incrementado e no caso de movimentação
		//para cima o valor é decrementado.
		
		//As novas posições de cada segmento são imprimidas na tela, pela
		//saída padrão, primeiramente com todos os valores no eixo X e
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