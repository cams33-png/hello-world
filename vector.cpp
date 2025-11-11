//
// Created by camal on 10/11/2025.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> datosV;
    datosV.reserve(5); // reservado pero no asignado

    for (int i = 0; i < 5; i++) {
        datosV.push_back(i % 2); // asigna elemento
    }

    cout << datosV.size() << endl; // cuántos?

    for (int i = 0; i < datosV.size(); i++) {
        cout << datosV[i] << endl;
    }

    return 0;
}