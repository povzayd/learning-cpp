#include <iostream>
using namespace std;
int main() {
    cout << "== MATRIX ADDITI0N PR0GRAM ==" << endl;
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int m1[100][100], m2[100][100], result[100][100];
    cout << "Enter elements of 1st Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element (" << i << "," << j << "): ";
            cin >> m1[i][j];
        }
    }    
    cout << "Enter elements of 2nd Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element (" << i << "," << j << "): ";
            cin >> m2[i][j];
        }
    }
  /////addinggggggggg
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
