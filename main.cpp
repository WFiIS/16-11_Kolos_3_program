#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    char koniec;
    time_t t;
    srand((unsigned) time(&t));

    do {
        int mini = 10;
        int maxi = 0;
        // Losowanie liczb i dodanie ich do tablicy.
        int losoweLiczby[16];
        cout << "Losuje: ";
        for (int i = 0; i < 16; i++) {
            losoweLiczby[i] = rand() % 10;
            cout << losoweLiczby[i];
            if (i < 15) {
                cout << ", ";
            }
        }
        cout << endl;
        cout << endl;

        // Wybranie pozycji z menu.
        int menu;
        cout << "Co wyszukac? 1-min, 2-max" << endl;
        cin >> menu;
        cout << endl;

        switch (menu) {
        case 1:
            for (int i = 0; i < 16; i++) {
                if (losoweLiczby[i] <= mini) {
                    mini = losoweLiczby[i];
                }
            }

            for (int i = 0; i < 16; i++) {
                cout << losoweLiczby[i];
                if (i < 15) {
                    cout << ", ";
                }
            }
            cout << endl;

            for (int i = 0; i < 16; i++) {
                if (losoweLiczby[i] == mini) {
                    cout << char(219);
                } else {
                    cout << " ";
                }

                cout << "  ";
            }
            cout << endl;
            break;
        case 2:
            for (int i = 0; i < 16; i++) {
                if (losoweLiczby[i] >= maxi) {
                    maxi = losoweLiczby[i];
                }
            }

            for (int i = 0; i < 16; i++) {
                cout << losoweLiczby[i];
                if (i < 15) {
                    cout << ", ";
                }
            }
            cout << endl;

            for (int i = 0; i < 16; i++) {
                if (losoweLiczby[i] == maxi) {
                    cout << char(219);
                } else {
                    cout << " ";
                }

                cout << "  ";
            }
            cout << endl;
            break;
        default:
            cout << "Zostala wybrana nie poprawdna opcja w menu." << endl;
            break;
        }

        cout << endl;
        cout << "Czy zakonczyc? (t/T-tak)? ";
        cin >> koniec;
        cout << endl;
    } while (koniec != 't' && koniec != 'T');
    return 0;
}
