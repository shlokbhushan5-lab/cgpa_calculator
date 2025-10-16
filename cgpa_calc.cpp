#include <iostream>
using namespace std;

int main() {
    int n; // number of subjects
    cout << "Enter number of subjects: ";
    cin >> n;

    float credit[50], grade[50];
    float totalCredits = 0, weightedSum = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter credit for subject " << i + 1 << ": ";
        cin >> credit[i];
        cout << "Enter grade point for subject " << i + 1 << " (out of 10): ";
        cin >> grade[i];

        weightedSum += credit[i] * grade[i];
        totalCredits += credit[i];
    }

    float cgpa = weightedSum / totalCredits;

    cout << "\n-----------------------------";
    cout << "\nYour Total Credits: " << totalCredits;
    cout << "\nYour CGPA: " << cgpa;
    cout << "\nEquivalent Percentage: " << cgpa * 9.5 << "%";
    cout << "\n-----------------------------" << endl;

    return 0;
}