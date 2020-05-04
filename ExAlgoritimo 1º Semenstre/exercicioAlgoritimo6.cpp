	//6) Criar um programa que leia o destino do passageiro, se a viagem inclui retorno (ida e volta) e informar o preço da passagem conforme a tabela a seguir.//

	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {	
		
	string destino;
	float ida[4] = {500.00, 350.00, 350.00, 300.00};
	float idaVolta[4] = {900.00, 650.00, 600.00, 550.00};
	int desisao, compra;
	

		do{
			
			cout << "Digite o nome da Regiao que deseja viajar:";
			cin >> destino;
			if(destino == "Norte" || destino == "norte" || destino == "Região Norte" || destino == "região norte"){
				destino = "Norte";
				desisao = 1;
			}else if(destino == "Nordeste" || destino == "nordeste" || destino == "Região Nordeste" || destino == "região nordeste"){
				  		destino = "Nordeste";
				  		desisao = 2;
				  }else if(destino == "Centro-Oeste" || destino == "centro-oeste" || destino == "Região Centro-Oeste" || destino == "região centro-oeste" || destino == "Centro Oeste" || destino == "centro oeste"){
							destino = "Centro-Oeste";
							desisao = 3;
						}else if(destino == "Sul" || destino == "sul" || destino == "Região Sul" || destino == "região sul"){
								 destino = "Sul";
								 desisao = 4;
							  }else {
							  destino = "incorreto";
									cout << "essa regiao nao existe tente novamente.\n";
									
							  }

			 
		}while(destino == "incorreto");
		
		
		
		switch(desisao){
			case 1:
				cout << "O valor da viagem para a Regiao " << destino << ", so de ida sera " << ida[0] << ",de Ida e  Volta ficara " << idaVolta[0] << endl;
				cout << "Escolha uma opçao abaixo:"<< endl;
				cout << "[0] nenhuma opsao  [1]Comprar ida  [2]Comprar ida e volta"<< endl;
				cin >> compra;
				if(compra == 0)
				{
					cout << ".................................................";
					
				}else if(compra == 1)
						{
							cout<< " voce comprou sua passagem de ida para a Regiao" << destino << " tera que pagar: " << ida[0] << endl;
							cout << "Boa viagem!!!";
						}else if(compra == 2)
								{
								cout<< " voce comprou sua passagem de ida para a Regiao" << destino << " tera que pagar: " << idaVolta[0] << endl;
							cout << "Boa viagem!!!";	
								}
						
						
			
			break;
			case 2:
				cout << "O valor da viagem para a Regiao " << destino << ", so de ida sera " << ida[1] << ",de Ida e  Volta ficara " << idaVolta[1] << endl;
				cout << "Escolha uma opçao abaixo:"<< endl;
				cout << "[0] nenhuma opsao  [1]Comprar ida  [2]Comprar ida e volta"<< endl;
				cin >> compra;
				if(compra == 0)
				{
					cout << ".................................................";
					
				}else if(compra == 1)
						{
							cout<< " voce comprou sua passagem de ida para a Regiao" << destino << " tera que pagar: " << ida[1] << endl;
							cout << "Boa viagem!!!";
						}else if(compra == 2)
								{
								cout<< " voce comprou sua passagem de ida para a Regiao" << destino << " tera que pagar: " << idaVolta[1] << endl;
							cout << "Boa viagem!!!";	
								}
			
			break;
			case 3:
				cout << "O valor da viagem para a Regiao " << destino << ", so de ida sera " << ida[2] << ",de Ida e  Volta ficara " << idaVolta[2] << endl;
				cout << "Escolha uma opçao abaixo:"<< endl;
				cout << "[0] nenhuma opsao  [1]Comprar ida  [2]Comprar ida e volta"<< endl;
				cin >> compra;
				if(compra == 0)
				{
					cout << ".................................................";
					
				}else if(compra == 1)
						{
							cout<< " voce comprou sua passagem de ida para a Regiao" << destino << " tera que pagar: " << ida[2] << endl;
							cout << "Boa viagem!!!";
						}else if(compra == 2)
								{
								cout<< " voce comprou sua passagem de ida para a Regiao" << destino << " tera que pagar: " << idaVolta[2] << endl;
							cout << "Boa viagem!!!";	
								}
							
			break;
			case 4:
				cout << "O valor da viagem para a Regiao " << destino << ", so de ida sera " << ida[3] << ",de Ida e  Volta ficara " << idaVolta[3] << endl;
				cout << "Escolha uma opçao abaixo:"<< endl;
				cout << "[0] nenhuma opsao  [1]Comprar ida  [2]Comprar ida e volta"<< endl;
				cin >> compra;
				if(compra == 0)
				{
					cout << ".................................................";
					
				}else if(compra == 1)
						{
							cout<< " voce comprou sua passagem de ida para a Regiao" << destino << " tera que pagar: " << ida[3] << endl;
							cout << "Boa viagem!!!";
						}else if(compra == 2)
								{
								cout<< " voce comprou sua passagem de ida para a Regiao" << destino << " tera que pagar: " << idaVolta[3] << endl;
							cout << "Boa viagem!!!";	
								}
			
			break;
		}

	cout << "Tenha um bom dia!!!";
	
	return 0;
	
	};
