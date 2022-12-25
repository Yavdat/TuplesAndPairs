#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <utility> 

using namespace std;

struct Date {
    int year;
    string month;
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
    // return vector<int>{lhs.year, lhs.month, lhs.day} < vector<int>{rhs.year, rhs.month, rhs.day};
    tuple<const int&, const string&, const int&> lhs_key = tie(lhs.year, lhs.month, lhs.day);
    auto rhs_key = tie(rhs.year, rhs.month, rhs.day);
    return lhs_key < rhs_key;
}

int main() {
    // cout << (Date{2022, 6, 8} < Date{2022, 1, 26}) << endl;
    // cout << (Date{2022, 6, 8} < Date{2022, 6, 8}) << endl;
    // cout << (Date{2022, 6, 8} < Date{2022, 7, 26}) << endl;

    cout << (Date{2022, "June", 8} < Date{2022, "January", 26}) << endl; // 0
    // tuple example
    // tuple<int, string, bool> t(7, "C++", true);
    // make_tuple - это тоже самое что и пример выше.
    auto t = make_tuple(7, "C++", true);

    tuple t2(7, "C++", false); // возможен только в новых стандартах std=1z
    
    cout << get<1>(t) << endl; // C++
    cout << get<2>(t2) << endl; // 0

    auto t_v = tie(t);

    cout << sizeof(t_v) << endl; // 8

    return 0;
}