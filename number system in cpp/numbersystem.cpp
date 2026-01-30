#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int choice1, choice2, num = 0;
    
    cout << "HADIA NASEER" << endl;
    cout << "Roll number: 38" << endl;
    
    cout << "Select the source system (1. Dec, 2. Bin, 3. Oct): ";
    cin >> choice1;
    
    if (choice1 == 1) {
        cout << "Enter Decimal number: ";
        cin >> num;
    }

    cout << "Select target system (1. Dec, 2. Bin, 3. Oct): ";
    cin >> choice2;

    switch (choice1) {
        case 1: // From Decimal
            if (choice2 == 2) {
                cout << "Binary: ";
                for (int i = 15; i >= 0; i--) cout << ((num >> i) & 1); 
                cout << endl;
            } else if (choice2 == 3) {
                cout << "Octal: " << oct << num << dec << endl;
            } else {
                cout << "Value: " << num << endl;
            }
            break;

        case 2: // From Binary
            {
                long long binary;
                cout << "Enter Binary: "; cin >> binary;
                int p = 0;
                while (binary > 0) {
                    num += (binary % 10) * pow(2, p);
                    binary /= 10;
                    p++;
                }
            
                if (choice2 == 3) cout << "Octal: " << oct << num << dec << endl;
                else cout << "Decimal: " << num << endl;
            }
            break;

        case 3: // From Octal
            {
                int octal;
                cout << "Enter Octal: "; cin >> octal;
                int p = 0;
                while (octal > 0) {
                    num += (octal % 10) * pow(8, p);
                    octal /= 10;
                    p++;
                }
                if (choice2 == 2) {
                    for (int i = 15; i >= 0; i--) cout << ((num >> i) & 1);
                    cout << endl;
                } else cout << "Decimal: " << num << endl;
            }
            break;
    }
    return 0;
}
