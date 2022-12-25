#include <iostream>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool operator<(const Date& lhs, const Date&rhs) {
    if (lhs.year != rhs.year) {
        return lhs.year < rhs.year;
    }
    if (lhs.month != rhs.month) {
        return lhs.month < rhs.month;
    }
    return lhs.day < rhs.day;
}

int main() {
    return 0;
}