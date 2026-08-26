#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string best = "";
        int count = 0;
        int left = 0;
        int n = s.length();

        for (int right = 0; right < n; right++) {
            if (s[right] == '1') {
                count++;
            }

            while (count == k && s[left] == '0') {
                left++;
            }

            if (count == k) {
                string curr = s.substr(left, right - left + 1);

                if (best == "" || curr.length() < best.length() || (curr.length() == best.length() && curr < best)) {
                    best = curr;
                }

                if (s[left] == '1') {
                    count--;
                }
                left++;
            }
        }

        return best;
    }
};

int main(){

}