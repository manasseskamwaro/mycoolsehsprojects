#include <iostream>
#include <climits>
using namespace std;

char calculateGrade(int score) {
    if (score > 100) {
        return 'X'; // Out of range
    } else if (score >= 70) {
        return 'A';
    } else if (score >= 60) {
        return 'B';
    } else if (score >= 50) {
        return 'C';
    } else if (score >= 40) {
        return 'D';
    } else {
        return 'E'; // Grade E for scores >= 0
    }
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    int* scores = new int[numStudents]; // Dynamic allocation for storing scores
    int totalScore = 0;
    int minScore = INT_MAX;
    int maxScore = INT_MIN;

    // Input scores
    for (int i = 0; i < numStudents; ++i) {
        bool validScore = false;
        while (!validScore) {
            cout << "Enter score for student " << (i + 1) << ": ";
            cin >> scores[i];
            if (scores[i] < 0 || scores[i] > 100) {
                cout << "Invalid entry. Score must be between 0 and 100." << endl;
            } else {
                totalScore += scores[i];
                if (scores[i] < minScore) {
                    minScore = scores[i];
                }
                if (scores[i] > maxScore) {
                    maxScore = scores[i];
                }
                validScore = true;
            }
        }
    }

    // Calculate average score
    double averageScore = static_cast<double>(totalScore) / numStudents;

    // Output total, average, min, max scores
    cout << "\nTotal Score: " << totalScore << endl;
    cout << "Average Score: " << averageScore << endl;
    cout << "Minimum Score: " << minScore << endl;
    cout << "Highest Score: " << maxScore << endl;

    // Assign grades
    for (int i = 0; i < numStudents; ++i) {
        char grade = calculateGrade(scores[i]);
        cout << "Student " << (i + 1) << " - Score: " << scores[i] << ", Grade: " << grade << endl;
    }

    delete[] scores; // Free allocated memory
    return 0;
}