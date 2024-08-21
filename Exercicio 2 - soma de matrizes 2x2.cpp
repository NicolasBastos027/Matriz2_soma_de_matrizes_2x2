#include <iostream>
using namespace std;
int main() {
    
    int matrizA[2][2];
    int matrizB[2][2];
    int matrizC[2][2];
    
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "informe o item da posição["<<  i+1 << "][" << j+1 << "] da matriz A:";
            cin>> matrizA[i][j];
        }
    }
    cout<<"\n";
        for (int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                cout << "informe o item da posição["<<  i+1 << "][" << j+1 << "] da matriz B:";
            cin>> matrizB[i][j];
        }
    }
    
    for (int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    cout << "\nMatriz A:";
    for (int i = 0; i<2; i++){
        cout <<"\n";
        for(int j = 0; j<2; j++){
            cout<< matrizA[i][j] << " ";
        }
    }
    cout << "\nMatriz B:";
    for (int i = 0; i<2; i++){
        cout <<"\n";
        for(int j = 0; j<2; j++){
            cout<< matrizB[i][j] << " ";
        }
    }
    cout << "\nMatriz C:";
    for (int i = 0; i<2; i++){
        cout <<"\n";
        for(int j = 0; j<2; j++){
            cout<< matrizC[i][j] << " ";
        }
    }

    return 0;
}