//Name - ARYA SHAHI
//PRN - 23070123030
//Aim - Assigning grades based of scores.
#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5, avg;

    cout << "Enter the marks out of 100" << endl;
    cout << "Enter marks1: ";
    cin >> m1;
    cout << "Enter marks2: ";
    cin >> m2;
    cout << "Enter marks3: ";
    cin >> m3;
    cout << "Enter marks4: ";
    cin >> m4;
    cout << "Enter marks5: ";
    cin >> m5;

    avg = (m1 + m2 + m3 + m4 + m5) / 5;

    if (avg >= 90) {
        cout << "Grade O";
    }
    else if (avg >= 80) {
        cout << "Grade A+";
    }
    else if (avg >= 70) {
        cout << "Grade A";
    }
    else if (avg >= 60) {
        cout << "Grade B+";
    }
    else if (avg >= 50) {
        cout << "Grade B";
    }
    else if (avg < 40) {
        cout << "Grade F";
    }
    return 0;
}