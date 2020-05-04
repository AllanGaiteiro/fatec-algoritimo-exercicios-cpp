	/*9) Escrever um programa que calcule e apresente a somatória do numero de grãos de trigo que se pode
	 obter em um tabuleiro de xadrez, obedecendo a seguinte regra: 
	 colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior.
	Ou seja, no primeiro coloca-se um grão, no segundo quadro coloca-se dois grãos 
	(neste momento tem-se três grãos), no terceiro coloca-se quatro grãos, 
	repetir até atingir o sexagésimo quarto quadro. 
	(Este exercício foi baseado em uma situação do capítulo 16 do livro “O Homem que calculava” de Malba Tahan. */
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {	
	
	int  i;
	char ops;
	long grao ,totalGrao = 0;
	
	
	do{
		cout << "numeros de graos";
		cin >> grao ;
		
		for(i=1; i < 65; i++){
			if( i > 1){
				grao = grao * 2;
				
			}else{
			}
			totalGrao = totalGrao + grao;
			cout << "no "<< i << "º guadro tera [" << grao << "] de grao\n";
			
		}
		cout << "total de graos no tabuleiro: "<< totalGrao << endl;
		cout << "deseja tentar denovo ? [S/N]";
		cin >> ops;
		system("CLS");
		
	}while(ops == 'S' || ops == 's');
	
	return 0;
	
	};
	
