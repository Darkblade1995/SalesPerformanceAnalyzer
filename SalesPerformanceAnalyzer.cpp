#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; 
    cout << "Enter the number of salespeople: ";
    cin >> n;

    string nombres[n];             // Array for names
    double ventas[n][4];          // Array for sales (n salespeople x 4 months)

   // Data Input
    for (int i = 0; i < n; i++) {
        cout << "\nEnter the name of salesperson " << i + 1 << ": ";
        cin >> nombres[i];

        for (int j = 0; j < 4; j++) {
            cout << "  Sales for month " << j + 1 << ": ";
            cin >> ventas[i][j];
        }
    }

    // Calculate and display results
    double promedioGeneral = 0;

    cout << "\n=== SALES REPORT ===\n";
    for (int i = 0; i < n; i++) {
        double suma = 0;
        for (int j = 0; j < 4; j++) {
            suma += ventas[i][j];
        }
        double promedio = suma / 4.0;
        promedioGeneral += promedio;

        cout << "Salesperson: " << nombres[i] 
             << " | Average Sales: " << promedio << endl;
    }

    promedioGeneral /= n;
    cout << "\nOverall average sales for all salespeople: " 
         << promedioGeneral << endl;

    return 0;
}