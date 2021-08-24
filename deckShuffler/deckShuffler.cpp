#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main() {
    srand (time(NULL));

    string cards[13] = {"1","2","3","4","5","6","7","8","9","10","J","Q","K"};

    int firstIndex = rand() % 13 + 1;
    int secondIndex = rand() % 13 + 1;

    cout << "First card: " << cards[firstIndex] << endl;
    cout << "Second card: " << cards[secondIndex] << endl;
}