#include <iostream>
using namespace std;

class Solution {
public:
    void studentGrade(int marks) {
        cout << "Marks = " << marks << endl;

        if (marks >= 90) {
            cout << "Grade A" << endl;
        }
        else if (marks >= 70) {
            cout << "Grade B" << endl;
        }
        else if (marks >= 50) {
            cout << "Grade C" << endl;
        }
        else if (marks >= 35) {
            cout << "Grade D" << endl;
        }
        else {
            cout << "Fail" << endl;
        }
    }
};

int main() {
    Solution s;
    int marks;
    cin >> marks;
    s.studentGrade(marks);
    return 0;
}
