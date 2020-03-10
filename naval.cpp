/* Batlha n* tbuleiro*/
#include <iostream>

using namespace std;
const int MAX = 10;

void Tabuleiro (){
    
    /*  5 quadrados = porta-avioes
        4 quadrados = navio de guerra
        3 quadrados = cruzador e submarino
        2 quadrados = destruidor
        */
    int i,j;
    int matriz_tab[10][10];

    cout << "Gerando Tabuleiro..." << endl << endl;

    //Preenchendo MATRIZ
    for (i = 0 ; i < MAX ; i++){
        for (j = 0 ; j < MAX ; j++)
            matriz_tab[i][j] = 0;
    }

    //Mostrando matriz
    for (i = 0 ; i < MAX ; i++){
        for (j = 0 ; j < MAX ; j++)
            cout << matriz_tab[i][j] << " ";
        cout << endl;
    }

    //matriz_tab = new int *[10]*[10];


}

int main(){

    cout << "#################################" << endl;
    cout << "######### BATALHA NAVAL #########" << endl;
    cout << "#################################" << endl;
    cout << "# Versão: 1.0                   #" << endl;
    cout << "# Aluna: Rosângela D'Avilla     #" << endl;
    cout << "#################################" << endl;

    Tabuleiro();
    //GERANDO TABULEIRO
    return 0;
}