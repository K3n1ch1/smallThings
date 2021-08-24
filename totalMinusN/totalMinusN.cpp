#include <iostream>
using namespace std;

void removeXfromY(int starterNumber, int decrementNumber) {
    int &currentNumber = starterNumber;
    cout << currentNumber << endl;
    while(true) {
        currentNumber -= decrementNumber;
        if(currentNumber < 0) {
            break;
        }
        cout << currentNumber << endl;
    }
}

int main() {
    // How to use? First insert the starter number, then the number which it will be decremented
    // Until it reaches 0 (Note that it will stop when the result gives a negative number)
    removeXfromY(100,13);
}