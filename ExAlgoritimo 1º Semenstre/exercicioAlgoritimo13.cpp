	/*13) Numa enfermaria existem quatro camas (cama 1, cama 2, cama 3 e cama 4) onde se encontram 4 pacientes a quem de hora a hora são medidas as pulsações ao longo de 
	um dia (24 leituras do valor da pulsação para cada paciente). Desenvolva um algoritmo capaz de:  
	
	a. Proceder à leitura e armazenamento numa matriz de dimensão 24 x 4 dos valores das pulsações dos 4 pacientes ao longo das 24 horas de um dia. 
	b. Calcular e apresentar a média das pulsações para cada um dos pacientes. 
	c. Identificar a cama onde se encontra o paciente que apresentou maior valor médio das pulsações */
	
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {	 
	
	int i, j, soma = 0, camaMediaMaior = 0, pulsasoes[24][4] = {{10,6,3,1000},{10,6,3,1},{10,6,3,1},{9,6,3,1},{10,6,3,7},{10,6,3,1},{10,100,3,1},{10,6,3,1},{10,6,7,1},{10,6,7,1},{10,6,3,7},{10,6,7,1},{10,6,7,1},{10,6,3,1},{10,6,3,1},{10,6,3,1},{10,6,3,1},{10,6,3,1},{10,6,7,1},{10,6,3,1},{10,6,3,7},{10,6,3,1},{10,6,7,1},{10,7,3,1}};
	float media[4], mediaMaior = 0;
	
	for(i=0; i < 4; i++)
	{
		for(j=0; j < 24; j++)
		{
			soma = pulsasoes[j][i] + soma;
			media[i] = soma/24;
		}
		if(i < 3)
		{
			j = 0;
			soma = 0;
		}
		
		if(media[i] > mediaMaior)
		{
			mediaMaior = media[i];
			camaMediaMaior = i;
		}
		cout << "Pulsaçao media do paciente da cama "<< i+1 << ", foi de "<< media[i]<< endl;
		
	}
	
	cout << "Passiente com a media maior esta na cama " << camaMediaMaior+1 << ", e teve a media de: "<< mediaMaior << endl;
	cout << "Tenha um Bom Dia!!!";
	
	return 0;
	
	};
