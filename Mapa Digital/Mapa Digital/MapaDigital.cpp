#include <iostream>
using namespace std;

#include <string>
#include <typeinfo>
#include <time.h>
#include <stdio.h>
#include <string>

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning (disable:4996)

#include "AutoEstrada.h"
#include "EstradasNacionais.h"
#include "ViasLigacoes.h"

#include "HistoricoCultural.h"
#include "HistoricoNatural.h"
#include "Turismo.h"

#include "Ficheiro.h"
#include "Teste.h"

using namespace std;

int main(){

	//HistoricoCultural hc;
	
	//HistoricoNatural loc1("sd",1);
	
	//loc1.listar();
	Teste teste(50);
	
	teste.insere_local(0);
	//teste.insere_local(&loc1);
	//teste.listar();
	teste.carregar_ficheiro_locais();
	//teste.carregar_ficheiro_vias();
	//teste.imprime_vias();
	teste.imprime_locais(2);
	system("pause");
}

/*
void showMenu(){
	bool sair = false;

	int choice;
	int choice1;
	int choice2;
	int choice3;

	//while(!sair){

	choice = MainMenu();
	switch(choice){
	case 1:

    case 1:
      if(leuRobots)
       cout << robots <<  endl;
      else
        cout << " >> Nao leu o ficheiro de robots!" << endl;
      break;

    case 2:
      if(leuRobots && leuArmazens && leuAutomaticos)
       cout << postos << endl;
      else
        cout << " >> Nao leu os ficheiros necessarios!" << endl;
      break;

    case 3:
      if(leuRobots && leuArmazens && leuAutomaticos)
        cout << distanciasTempos << endl;
      else
        cout << " >> Nao leu os ficheiros necessarios!" << endl;
      break;

    case 4:
        if(validarGrafo())
          mostrarGrafo();
        else
          cout << " >> Grafo invalido! Todos os postos automaticos tem que ser\n alcancaveis a partir de pelo menos um posto armazem\n e inicialmente cada posto armazem tem que ter um robot estacionado."<< endl;
      break;

    case 5:      
        estadoFabrica();
        break;

    case 6:
      int pNum;
      cout << "Abastecer o Automatico numero: ";
      cin >> pNum;
      
      if(!automaticoExiste(pNum))
        cout << "\n >> O posto automatico que escolheu nao existe!" << endl;
      else{
        cout << "\n >> A abastecer o posto automatico " << pNum << "...\n\n" << endl;
		abastecerAut(pNum);
		//estadoFabrica();
      }
      break;

    case 7:
      int pNumA;
      cout << "Abastecer o Armazem numero: ";
      cin >> pNumA;
      if(!armazemExiste(pNumA))
        cout << "\n >> O posto armazem que escolheu nao existe!" << endl;
      else{
        cout << "\n >> A abastecer o posto armazem " << pNumA << "...\n\n" << endl;
		abastecerArm(pNumA);
		//estadoFabrica();
      }
      break;

    case 8:
      cout << " >> A terminar programa..." << endl;
      sair = true;
	  break;

    default:
      cout << " >> Escolha invalida!" << endl;
    }
  }




int MainMenu (void){
	int choice = 0;
	cout << endl;
	cout << endl;
    cout << "*****************************************" << endl;
    cout << "*                                       *" << endl;
    cout << "*           MAPA DIGITAL                *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
    cout << "*     Menu:                             *\n" ;
    cout << "*       1 - Locais Turisticos           *\n" ;
    cout << "*       2 - Vias Ligacao                *\n" ;
	cout << "*       3 - Contabilizar Locais         *\n" ;
	cout << "*       4 - Ficheiro                    *\n" ;
    cout << "*       5 - Grafo                       *\n" ;
	cout << "*       6 - Sair                        *\n" ;
    cout << "*---------------------------------------*" << endl;
    cout << "*     Escolha a opcao:                  *\n";
    cout << "*                                       *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
    cin >> choice;

}


int SubMenu_locais(void){
	int choice1 = 0;
	cout << endl;
	cout << endl;
    cout << "*****************************************" << endl;
    cout << "*                                       *" << endl;
    cout << "*           Locais Turisticos           *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
    cout << "*     Menu:                             *\n" ;
    cout << "*       1 - Listar Locais               *\n" ;
	cout << "*       2 - Inserir                     *\n" ;
	cout << "*       3 - Alterar                     *\n" ;
	cout << "*       5 - Eliminar                    *\n" ;
 	cout << "*       6 - Voltar                      *\n" ;
    cout << "*---------------------------------------*" << endl;
    cout << "*     Escolha a opcao:                  *\n";
    cout << "*                                       *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
    cin >> choice1; // Local turistico pode ser: Historico/Cultural (tempo medio) e natural (km2)
}

int SubMenu_vias(void){
	int choice2 = 0;
	cout << endl;
	cout << endl;
    cout << "*****************************************" << endl;
    cout << "*                                       *" << endl;
    cout << "*           Vias Ligacao                *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
    cout << "*     Menu:                             *\n" ;
    cout << "*       1 - Listar Via                  *\n" ;
    cout << "*       2 - Inserir                     *\n" ;
	cout << "*       3 - Alterar                     *\n" ;
	cout << "*       5 - Eliminar                    *\n" ;
 	cout << "*       6 - Voltar                      *\n" ;
    cout << "*---------------------------------------*" << endl;
    cout << "*     Escolha a opcao:                  *\n";
    cout << "*                                       *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
    cin >> choice2;
}

int SubMenu_ficheiro(void){
	int choice3 = 0;
	cout << endl;
	cout << endl;
    cout << "*****************************************" << endl;
    cout << "*                                       *" << endl;
    cout << "*           Ficheiro                    *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
    cout << "*     Menu:                             *\n" ;
    cout << "*       1 - Inserir Locais Turisticos   *\n" ;
    cout << "*       2 - Inserir Vias Ligacao        *\n" ;
	cout << "*       3 - Eliminar Fich Locais Turisticos  *\n" ;
	cout << "*       5 - Eliminar Fich Vias Ligacao       *\n" ;
 	cout << "*       6 - Voltar                      *\n" ;
    cout << "*---------------------------------------*" << endl;
    cout << "*     Escolha a opcao:                  *\n";
    cout << "*                                       *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
    cin >> choice3;
}

*/
