/* Batlha n* tbuleiro*/
#include <iostream>

using namespace std;
const int MAX = 10;

void Tabuleiro (int **&matriz_tab){
    
    /*  5 quadrados = porta-avioes
        4 quadrados = navio de guerra
        3 quadrados = cruzador e submarino
        2 quadrados = destruidor
        */
    int i,j;
    matriz_tab = new int*[10];

    cout << "Gerando Tabuleiro..." << endl << endl;

    //Criando MATRIZ
    for (i = 0 ; i < MAX ; i++){
        matriz_tab[i] = new int[10];
    }

    //Preenchendo MATRIZ
    for (i = 0 ; i < MAX ; i++){
        for (j = 0 ; j < MAX ; j++)
            matriz_tab[i][j] = 0;
    }

    cout << "    A B C D E F G H I J" << endl;
    cout << "    -------------------" << endl;
    
    //Mostrando matriz 
    for (i = 0 ; i < MAX ; i++){
        cout << (i) << "  |";
        for (j = 0 ; j < MAX ; j++)
            cout << matriz_tab[i][j] << " ";
        cout << endl;
    }


}

void Jogador(int **&matriz_tab){

    int i, j;

    cout << "Jogador 1 posicione seus barcos: " << endl;
    cout << "posicionar porta aviões (5);" << endl;
    cout << "linha: ";
    cin >> i;
    cout << "coluna: ";
    cin >> j;

    matriz_tab[i][j] = 5;
    //Mostrando matriz 
    for (i = 0 ; i < MAX ; i++){
        cout << (i) << "  |";
        for (j = 0 ; j < MAX ; j++)
            cout << matriz_tab[i][j] << " ";
        cout << endl;
    }


}

int main(){

    int **matriz = nullptr;

    cout << "#################################" << endl;
    cout << "######### BATALHA NAVAL #########" << endl;
    cout << "#################################" << endl;
    cout << "# Versão: 1.0                   #" << endl;
    cout << "# Aluna: Rosângela D'Avilla     #" << endl;
    cout << "#################################" << endl;

    Tabuleiro(matriz);
    //GERANDO TABULEIRO
    Jogador(matriz);
    return 0;
}