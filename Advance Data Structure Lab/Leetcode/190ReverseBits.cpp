#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

// #include <iostream>

// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     cout << "Binary form: ";

//     // Flag to avoid printing leading zeros (optional but makes it look cleaner)
//     bool foundFirstOne = false;

//     // Handle the special case of 0
//     if (num == 0) {
//         cout << "0";
//     } else {
//         // We loop through all 31 bits (for a standard signed integer)
//         for (int i = 31; i >= 0; i--) {
//             // Shift num right by i, then check the last bit with & 1
//             int bit = (num >> i) & 1;

//             if (bit == 1) {
//                 foundFirstOne = true;
//             }

//             if (foundFirstOne) {
//                 cout << bit;
//             }
//         }
//     }

//     cout << endl;

//     return 0;
// }
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string binary = bitset<32>(n).to_string();
        uint32_t start = 0;
        uint32_t end = binary.size()-1;
        while(start < end){
            swap(binary[start], binary[end]);
            start++;
            end--;
        }
        
        uint32_t decimal = stoul(binary, nullptr, 2);
    
        return decimal;
    }
    
    
};

int main(){
    int num;
    cin>> num;
    Solution sol;
    cout<< sol.reverseBits(num);
    

}