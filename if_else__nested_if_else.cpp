#include <iostream>
using namespace std;

// if else simple Example (Number Evaluation either Positive or Negative)
int main() {
    int number_1=-3;
    cout << "Enter a number : ";
   
    if (number_1 > 0) {
        cout << number_1 << " is positive." << endl;
    } else {
        cout << number_1 << " is negative." << endl;
    }
    return 0;
}

//Nested if else Simple Example (Making Coffee)
// int main() {
//     bool hasCoffee, hasCreamer, hasSugar;

//     cout<<"Do you have coffee (true/false): ";
//     cin>>hasCoffee;

//     if (hasCoffee) {
//         cout << "Do you have creamer (true/false): ";
//         cin >> hasCreamer;
//         cout << "Do you have sugar (true/false): ";
//         cin >> hasSugar;
//         if (hasCreamer & hasSugar) {
//             cout << "Make coffee with creamer and sugar." << endl;
//         } else if (hasCreamer) {
//             cout << "Make coffee with creamer." << endl;
//         } else if (hasSugar) {
//             cout << "Make coffee with sugar." << endl;
//         } else {
//             cout << "Make black coffee." << endl;
//         }
//     } else {
//         cout << "Coffee can't be made without Coffee!" << endl;
//     }

//     return 0;
// }
