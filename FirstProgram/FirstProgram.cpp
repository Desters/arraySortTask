#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int random(int min, int max) {
	return(rand() % (max - min) + min);
}

void main() {
    srand(time(NULL));
    const int x = 10;
    int num[x][x];
    for (int i = 0; i < x; i++) {
        for (int w = 0; w < x; w++) {
            num[i][w] = random(0,100);
            cout << num[i][w] << " ";
            if (w == x-1) {
                cout << "\n";
            }
        }
    }
    cout << "\n";

    int L = x * x - 1;
    int Iteration = L;
    while (Iteration) {
        for (int i = 0; i < x; i++) {
            int a, b;
            for (int j = 0; j < x; j++) {
                a = num[i][j];
                if (L) {
                    b = num[i][j + 1];
                    L--;
                    if (a > b) {
                        num[i][j] = b;
                        num[i][j + 1] = a;
                    }
                }
                else 
                    L = x * x - 1;
            }
        }
        Iteration--;
    }


    int app[3] = {0,0,0};
    for (int i = 0; i < x; i++) {
        for (int w = 0; w < x; w++) {
            //
            cout << num[i][w] << " ";
            if (w == x - 1) {
                cout << "\n";
            }
            //

        }
    }
    cout << "\n";
}