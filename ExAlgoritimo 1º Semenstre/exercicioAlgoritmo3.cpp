/*3) Dois amigos jogam na loteria semanalmente. 
	Escreva um programa que solicite a quantia com que cada um participou e o valor do prêmio a ser rateado em partes diretamente proporcionais às quantias de cada um deles. 
	O programa deve imprimir quanto cada um dos amigos receberá caso sejam ganhadores. */
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {
		
	int joao, jose, premio;
	float razao;

	cout << "quantas vezes joao jogou: ";
	cin >> joao;
	
	cout << "quantas vezes jose jogou: ";
	cin >> jose;
	
	cout << "quando ganharam: ";
	cin >> premio;
	
	
	razao = (premio)/(joao + jose);
	
	cout << "joao deve ganhar "<< (joao*razao) << " e jose de ganhar " << (jose*razao)<< endl;
	
			return 0;
	
	};	
