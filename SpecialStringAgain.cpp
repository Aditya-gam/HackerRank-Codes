#include<bits/stdc++.h>

using namespace std;

long substrCount(int n, string s) {
    int result = 0, i = 0;

    while(i < n) {
        int charCount = 1;

        while((i + 1) < s.length() && s[i] == s[i + 1]) {
            i++;
            charCount++;
        }

        result += (charCount * (charCount + 1)) / 2;
        i++;
    }

    for(i = 1; i < n; i++) {
        int charCount = 1;

        while(i + charCount < s.length() && i - charCount >= 0 && s[i-1] != s[i] && s[i-1] == s[i-charCount] && s[i-1] == s[i+charCount]) {
            charCount++;
        }

        result += charCount - 1;
    }


    return result;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
