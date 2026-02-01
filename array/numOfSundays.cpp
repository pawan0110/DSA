#include <bits/stdc++.h>
using namespace std;

int main() {
    string startDay;
    int n;
    cin >> startDay >> n;

    unordered_map<string, int> dayMap = {
        {"sun", 0}, {"mon", 1}, {"tue", 2},
        {"wed", 3}, {"thu", 4}, {"fri", 5}, {"sat", 6}
    };

    int start = dayMap[startDay];
    int daysToSunday = (7 - start) % 7;

    if (daysToSunday >= n) {
        cout << 0;
    } else {
        int remainingDays = n - daysToSunday - 1;
        int numOfSun = 1 + remainingDays / 7;
        cout << numOfSun;
    }

    return 0;
}