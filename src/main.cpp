#include <iostream>
#include "_pause.h"

using namespace std;

int main() {

    int ROWS = 5;
    int COLUMNS = 7;
    int seats[ROWS][COLUMNS];
    int seatNumber = 1;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            seats[i][j] = seatNumber++;
        }
    }

    while (true) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLUMNS; j++) {
                if (seats[i][j] == 0) {
                    cout << "0\t";
                } else {
                    cout << seats[i][j] << "\t";
                }
            }
            cout << endl;
        }

        cout << "\nEnter seat number to reserve: ";
        int inputSeat;
        cin >> inputSeat;

        if (inputSeat < 1 || inputSeat > ROWS * COLUMNS) {
            cout << "Invalid seat number. Please try again." << endl;
            continue;
        }

        bool seatReserved = false;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLUMNS; j++) {
                if (seats[i][j] == inputSeat) {
                    seats[i][j] = 0;
                    cout << "Seat successfully reserved." << endl;
                    seatReserved = true;
                    break;
                } else if (seats[i][j] == 0 && inputSeat == 0) {
                    cout << "Seat is taken." << endl;
                    return 0;
                }
            }
        }
    }

    cin.ignore();
    
    _pause();
    return 0;
}