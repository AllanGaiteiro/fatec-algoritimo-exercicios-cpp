//15) Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3). //

	#include <iostream>
	#include <locale>
	#include <math.h>

	using namespace  std;
	
	float vol(float raio){
		float v = (1.333)*(3.14159)*(raio*raio*raio);
		
		return v;
	}

	int main(int argc, char** argv) {	
	
	float raio;
	
	cout << "digite o raio";
	cin >> raio;
	// 4/3 = 1.3333 //

	
	
	cout << "o volume dessa esfera é: " << vol(raio);
	
	
	
	
	return 0;
	
	};	
