	/*10) Seja A e B dois vetores contendo N elementos inteiros.  Fazer um programa para:  
	a. ler A e B. 
	b. Calcular a soma dos elementos de A. 
	c. Calcular a soma dos elementos de B. 
	d. Obter o vetor C, que é a soma dos vetores A e B.  
	e. Obter o vetor D, subtraindo B de A. 
	f. Obter o produto escalar de A por B, isto é, A[0]*B[0] + A[1]*B[1] + .......+ A[N-1]*B[N1]. */
	
	////variveis iniciais////// 
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {	
	
	int n;
	
	cout << "digite o valor de elemento que tera os vetores: ";
		cin >> n;
		
	int i, a[n], somaA , b[n], somaB, c[n], d[n], produto[n], produtototal = 0;
	
		somaA = 0;
		somaB = 0;
		
		for(i = 0; i < n; i++){
			
			cout << "digite o valor do elemento  A[" << i << "]: ";
			cin >> a[i];
		}
		for(i = 0; i < n; i++){
			cout << "digite o valor do elemento B[" << i << "]: ";
			cin >> b[i];
		}
		for(i = 0; i < n; i++){
			somaA = somaA + a[i];
			somaB = somaB + b[i];
			c[i] = a[i] + b[i];
			d[i] = a[i] - b[i];
			produto[i] = a[i] * b[i];
			produtototal = 	produtototal + produto[i];
		}
		system("CLS");
		cout << " Vetor A    Vetor B    Vetor C(A+B) Vetor D(B-A) Produto(A*B)\n";
		for(i = 0; i < n; i++){
			cout << "Vetor A["<< a[i]<<"], Vetor B["<< b[i]<< "], Vetor C [" << c[i] << "], Vetor D[" << d[i] <<"], Produto [" << produto[i] << "]." << endl;
		}
		cout << " Total Vetor A[" << somaA << "], Total Vetor B[" << somaB << "] Produto Final[" << produtototal << "]."	<< endl;

		

	
		
	cout << "tenha um bom dia!!!";	
	
	return 0;
	
	};
