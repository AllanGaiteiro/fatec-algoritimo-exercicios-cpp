	/*5) Faça um programa que dada a tabela abaixo, leia o nº da palestra de um evento e mostre ao participante em que local e horário ela será realizada. 
	Utilize uma Matriz para resolver o problema. */
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {	
	///////////Variaveis //////////////
	int ops;
	string dados[3][4] = {"Linux", "Recuperação de Desastres", "Windows Server", "Programação", "Auditorio 1", "Auditorio 2", "Auditorio 3", "Auditorio Principal", "8h as 9h", "9h as 10h", "13h as 14h", "15h as 17h"};
	
		
		cout << "[1]Linux [2]Recuperação de Desastres [3]Windows Server [4]Lógica e Programação\n";
		cin >> ops;
		switch(ops){
			case 1:
				cout << "a palestra de "<< dados[0][0]<< " no "<< dados[1][0] << " as " << dados[2][0] << endl;
				ops = 0;
			break;
			case 2:
				cout << "a palestra de "<< dados[0][1] << " no "<< dados[1][1] << " as " << dados[2][1] << endl;
				ops = 0;
			break;
			case 3:
				cout << "a palestra de "<< dados[0][2] << " no "<< dados[1][2] << " as " << dados[2][2] << endl;
				ops = 0;
			break;
			case 4:
				cout << "a palestra de "<< dados[0][3] << " no "<< dados[1][3] << " as " << dados[2][3] << endl;
				ops = 0;
			break;
		}

	return 0;
	
	};
