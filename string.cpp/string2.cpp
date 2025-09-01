#include<iostream>
using namespace std;


// remove adjacent duplicates..........
// i.e.,  abbaca -> ca
// string duplicates(string s) {
//     string ans = "";
//     int index = 0;

//     while (index < s.length()) {
//         if (ans.length() > 0 && ans[ans.length() - 1] == s[index]) {
//             ans.pop_back();
//         } else {
//             ans.push_back(s[index]);
//         }
//         index++;
//     }
//     return ans;
// }

// int main() {
//     string s;
//     getline(cin, s);  // Use getline to read the entire line

//     string result = duplicates(s);
//     cout << result;

//     return 0;
// }


 