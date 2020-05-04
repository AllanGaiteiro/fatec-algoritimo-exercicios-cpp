	/*7) Criar um programa que a partir da idade e peso do paciente calcule a dosagem de determinado 
	medicamento e imprima a receita informando quantas gotas do medicamento o paciente deve tomar por dose. 
	Considere que o medicamento em questão possui 500mg por ml, e que cada ml corresponde a 20 gotas.
	
	- Adultos ou adolescentes desde 12 anos, inclusive, 
	 se tiverem peso igual ou acima e 60 quilos devem tomar 1000mg;
	  com peso abaixo de 60 quilos devem tomar 875mg 
	
	- Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada pelo peso corpóreo conforme 
	a tabela a seguir: 
	5 kg a 9 kg = 125mg 
	9.1 kg a 16 kg = 250mg
	16,1kg a 24kg = 375mg
	24.1kg a 30kg = 500mg
	acima de 30kg = 750mg
	  */
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {	

	string nome;
	int idade, des;
	float peso;
	
		cout << "digite seu nome: ";
		cin >> nome;
		cout << "digite sua idade: ";
		cin >> idade;
		cout << "digite seu peso: ";
		cin >> peso;
		
		if(idade >= 12){
			des = 3;
		}else{
			des = 4;
		}
			
		
		switch(des){
			case 3:
				if(peso >= 60){
					cout << nome << " por ter " << idade << " anos e pesar " << peso << "kg devera tomar 1000mg, 40 gotas do remedio."<< endl;
				}else {	
					cout << nome << " por ter " << idade << " anos e pesar " << peso << "kg devera tomar 875mg, 35 gotas do remedio."<< endl;
				}
			
			break;
			case 4:
				if(peso > 30){
					cout << nome << " por ter " << idade << " anos e pesar " << peso << "kg devera tomar 750mg, 30 gotas do remedio."<< endl;
				}else if(peso > 24 && peso <= 30){	
						cout << nome << " por ter " << idade << " anos e pesar " << peso << "kg devera tomar 500mg, 20 gotas do remedio."<< endl;
						}else if(peso > 16 && peso <= 24){	
								cout << nome << " por ter " << idade << " anos e pesar " << peso << "kg devera tomar 375mg, 15 gotas do remedio."<< endl;

								}else if(peso > 9 && peso <= 16){
										cout << nome << " por ter " << idade << " anos e pesar " << peso << "kg devera tomar 250mg, 10 gotas do remedio."<< endl;

										}else if(peso > 5 && peso <= 9){	
											cout << nome << " por ter " << idade << " anos e pesar " << peso << "kg devera tomar 125mg, 5 gotas do remedio."<< endl;
											}else
							
			break;
			
		} 

	
	cout << "tenha um bom dia!!!";
	
	return 0;
	
	};
