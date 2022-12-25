#include <iostream>
#include <vector>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool operator<(const Date& lhs, const Date&rhs) {
    // if (lhs.year != rhs.year) {
    //     return lhs.year < rhs.year;
    // }
    // if (lhs.month != rhs.month) {
    //     return lhs.month < rhs.month;
    // }
    // return lhs.day < rhs.day;
    return vector<int>{lhs.year, lhs.month, lhs.day} < vector<int>{rhs.year, rhs.month, rhs.day};
}

int main() {
    cout << (Date{2022, 6, 8} < Date{2022, 1, 26}) << endl;
    cout << (Date{2022, 6, 8} < Date{2022, 6, 8}) << endl;
    cout << (Date{2022, 6, 8} < Date{2022, 7, 26}) << endl;
    return 0;
}