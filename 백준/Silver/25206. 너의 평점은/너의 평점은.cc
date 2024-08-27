#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, float> grade_to_point = {
        {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0},
        {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0},
        {"F", 0.0}
    };

    float total_credit = 0.0;
    float total_weighted_score = 0.0;

    for (int i = 0; i < 20; i++) {
        string subject, grade;
        float credit;
        cin >> subject >> credit >> grade;

        if (grade == "P") {
            continue;
        }

        total_weighted_score += credit * grade_to_point[grade];
        total_credit += credit;
    }

    float gpa = total_weighted_score / total_credit;

    cout << fixed << setprecision(6) << gpa << endl;

    return 0;
}
