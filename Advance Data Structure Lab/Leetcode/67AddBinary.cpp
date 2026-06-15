#include <iostream>
#include <string>
#include <algorithm> // Required for std::reverse

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;

        // Loop from the end of both strings, continuing as long as there are
        // digits to process or a carry is left over.
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) {
                sum += a[i] - '0'; // Convert char '1' to int 1
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0'; // Convert char '0' to int 0
                j--;
            }

            // The current result digit is the remainder after dividing by 2
            result += to_string(sum % 2);
            // The new carry is the quotient of the division by 2
            carry = sum / 2;
        }

        // The result was built backwards, so we must reverse it
        reverse(result.begin(), result.end());
        
        return result;
    }
};