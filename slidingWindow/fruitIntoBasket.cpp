#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxFruits = 0;
        int last=-1;
        int secondLast=-1;
        int count = 0;
        int laststreak=0;
        
        for(int fruit:fruits){
            if(fruit==last || fruit==secondLast) count++;
            else count = laststreak+1;

            if(fruit==last){
                laststreak++;
            }
            else {
                laststreak = 1;
                secondLast = last;
                last = fruit;
            }
            maxFruits = max(maxFruits,count);
        }
        return maxFruits;
    }
};
//tc = 0(n)
//sc=0(1)
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> basket; // fruit type → count
        int left = 0, maxFruits = 0;

        for (int right = 0; right < fruits.size(); right++) {
            basket[fruits[right]]++;

            // Shrink window if more than 2 types of fruits
            while (basket.size() > 2) {
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0) {
                    basket.erase(fruits[left]);
                }
                left++;
            }

            maxFruits = max(maxFruits, right - left + 1);
        }

        return maxFruits;
    }
};
//tc = 0(n)
//sc=0(1)