#include <iostream>
using namespace std;
int main() {
    bool Has_Coffee; 
    int Coffee_State;  // User should enter an integer to represent coffee state
    cout << "Do you have coffee (true/false): ";
    cin >> Has_Coffee;
    if (Has_Coffee) {
        cout << "Enter coffee state (1 for creamer & sugar, 2 for creamer only, 3 for sugar only, 4 for black): ";
        cin >> Coffee_State;
        switch (Coffee_State) {
            case 1:
                cout << "Make coffee with creamer and sugar." << endl;
                break;
            case 2:
                cout << "Make coffee with creamer." << endl;
                break;
            case 3:
                cout << "Make coffee with sugar." << endl;
                break;
            case 4:
                cout << "Make black coffee." << endl;
                break;
            default:
                cout << "Invalid coffee state." << endl;
        }
    } else {
        cout << "Coffee can't be made without coffee!" << endl;
    }
    return 0;
}
