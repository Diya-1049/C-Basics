#include <iostream>
using namespace std;

int main() {
    const int NUM_STUDENTS = 5;
    int grades[NUM_STUDENTS];
    double total; // Variable to accumulate the total grade
    // Now for getting student grades
    cout << "Enter grades for " << NUM_STUDENTS << " students:" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> grades[i];
    }
    // Now for calculating total grade
    for (int i = 0; i < NUM_STUDENTS; i++) {
        total += grades[i];
    }
    // Now for calculate and displaying average of students
    double average = total / NUM_STUDENTS;
    cout << "The average grade is: " << average << endl;
    return 0;
}
