//Basic Pointers Example
#include <iostream>
using namespace std;

int main() {
  int num = 37;
  int* ptr;
  ptr = &num;
  cout << "Value of num: " << num << endl;
  cout << "Value stored at the address pointed to by ptr: " << *ptr << endl;
  return 0;
}

//-----------------------------------------------------------

// //Pointers and Arrays Example
// #include <iostream>
// using namespace std;

// int main() {
//   int numbers[5] = {1, 2, 3, 4, 5};
//   cout << "First element using array notation: " << numbers[0] << endl;  // Array name behaves like a pointer to the first element
//   cout << "First element using pointer notation: " << *(numbers) << endl;

//   for (int i = 0; i < 5; ++i)   // Looping through the array using a pointer
//   {
//     cout << "Element at Place " << i << ": " << *(numbers + i) << endl;
//   }
//   return 0;
// }

//-----------------------------------------------------------

// //Pointers and Functions Example(Swaping values)
// #include <iostream>
// using namespace std;
// void swapValues(int* ptr1, int* ptr2) //swap code
// {
//   int temp = *ptr1;
//   *ptr1 = *ptr2;
//   *ptr2 = temp;
// }
// int main() {
//   int num1 = 5, num2 = 10;
//   cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
//   swapValues(&num1, &num2); // Passing addresses using pointers
//   cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;
//   return 0;
// }

//-----------------------------------------------------------

// //Pointers to Structures Example
// #include <iostream>
// #include <string>
// using namespace std;

// struct Person {
//   string name;
//   int age;
// };

// int main() {
//   Person p1 = {"Janeeta", 30};
//   Person* ptr = &p1;
//   cout << "Name (using pointer): " << ptr->name << endl;
//   cout << "Age (using pointer): " << ptr->age << endl;
//   return 0;
// }
