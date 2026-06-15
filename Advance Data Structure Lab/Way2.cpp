#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of words: "; 
    if (!(cin >> n)) return 0; // Exit if input isn't a number

    for (int i = 0; i < n; i++) {
        string word;
        cout << "Enter word " << i + 1 << ": ";
        cin >> word;

        if (word.length() > 10) {
            cout << "Abbreviated: " << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        } else {
            cout << "Result: " << word << endl;
        }
    }

    return 0;
}