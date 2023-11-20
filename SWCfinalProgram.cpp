/* Program: Student MS for Starlight Highschool
date start: 1/11/2023
date finish: 15/11/2023
programmer: arissa & eizra
lecturer name: Madam Robaya 
Student id: AM2307013949, AM2307013953
*/


#include <iostream>
#include <string>
#include <limits>

using namespace std;

const int MAX_STUDENTS = 50;

// Declare arrays
int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];

// Function to input student data
void inputStudentData() {
    int numStudents;
    cout << "Enter the number of students (max 50): ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
    cout << "Enter data for student " << (i + 1) << ":" << endl;
    cout << "Student ID: ";
    cin >> studentID[i];

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

    cout << "Student Name: ";
    getline(cin, studentName[i]);

    cout << "Score: ";
    cin >> scores[i];

    cout << "Attendance (%): ";
    cin >> attendance[i];

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer again if needed
}

}

// Function to calculate average scores
double calculateAverageScores() {
    double sum = 0;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        sum += scores[i];
    }
    return sum / MAX_STUDENTS;
}

// Function to display student records
void displayStudentRecords() {
    double averageScore = calculateAverageScores();
    cout << "Student Records:" << endl;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        if (studentID[i] != 0) { // Assuming studentID 0 means no data
            cout << "Student ID: " << studentID[i] << ", Name: " << studentName[i] 
                 << ", Score: " << scores[i] << ", Attendance: " << attendance[i] << "%" << endl;
        }
    }
    cout << "Average Score of all students: " << averageScore << endl;
}

int main() {
    inputStudentData();
    displayStudentRecords();
    return 0;
}

