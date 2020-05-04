	/*2) A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,50 e a broa custa R$ 2,50.
	Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (15% do total arrecadado).
	Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular os dados solicitados. */
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {		
	
	
		int pao = 0, broa = 0;
		float reais = 0;
		
		cout << "quantidade de paos que vendeu: ";
		cin >> pao;
		cout << "quantidade de broas que vendeu ";
		cin >> broa;
		
		reais = (pao * 0.5) + (broa * 2.5);

		
		cout << "Quantia arrecadada foi de " << reais << " Reais. Seu deposito na poupança sera de " << reais * 0.15 << " Reais.";
		
		
		return 0;
	
	};	
