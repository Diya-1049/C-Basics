// //Basic Structure Code (for Storing Book Information)
// #include <iostream>
// #include <string>
// using namespace std;
// struct Book {
//     string title;
//     string author;
//     int yearPublished;
//     float price;
// };
// int main() {
//     Book myBook; // It declares a variable of type Book
//     myBook.title = "The Lord of the Rings";
//     myBook.author = "J.R.R. Tolkien";
//     myBook.yearPublished = 1954;
//     myBook.price = 19.99;
//     cout << "Book Details:" << endl;
//     cout << "Title: " << myBook.title << endl;
//     cout << "Author: " << myBook.author << endl;
//     cout << "Year Published: " << myBook.yearPublished << endl;
//     cout << "Price: $" << myBook.price << endl;
//     return 0;
// }
// //-------------------------------------------------------------------------------------

//Structure with arrays and fuction
#include <iostream>
#include <string>
using namespace std;
struct Student {
  string name;
  int rollNumber;
  float marks[3]; // Array of marks for 3 subjects
  float calculateTotalMarks()   // Function to calculate and return the total marks
  {
    float total = 0;
    for (int i = 0; i < 3; ++i) {
      total += marks[i];
    }
    return total;
  }
};
int main() {
  const int numStudents = 3; // Number of students
  Student students[numStudents]; // Array of Student structures
  for (int i = 0; i < numStudents; ++i)  // Get student details from the user (replace with actual input)
  {
    cout << "Enter details for student " << i + 1 << ":" << endl;
    cout << "Name: ";
    cin >> students[i].name;
    cout << "Roll number: ";
    cin >> students[i].rollNumber;
    for (int j = 0; j < 3; ++j) {
      cout << "Marks for subject " << j + 1 << " out of 50 : ";
      cin >> students[i].marks[j];
    }
  }
  // Now Printing student records with total marks
  cout << "\nStudent Records:" << endl;
  for (int i = 0; i < numStudents; ++i) {
    cout << "Student " << i + 1 << ":" << endl;
    cout << "Name: " << students[i].name << endl;
    cout << "Roll number: " << students[i].rollNumber << endl;
    cout << "Marks: ";
    for (int j = 0; j < 3; ++j) {
      cout << students[i].marks[j] << " ";
    }
    cout << endl << "Total Marks: 150 " << endl;
    float totalMarks = students[i].calculateTotalMarks();     // Calling the function to calculate and display total marks
    cout << "Obtained Marks: " << totalMarks << endl;
  }
  return 0;
}
