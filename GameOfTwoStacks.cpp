#include<bits/stdc++.h>

using namespace std;

int twoStacks(int x, vector<int> a, vector<int> b) {
    
    // * Initializing Variables
    long long sum = 0, asize = a.size(), bsize = b.size();
    int count, i, j;
 
    // * Considering the first stack and calculating count for maximum valid sum
    for(i = 0; i < asize; i++) {
        sum += a[i];
        if(sum > x) {
            sum -= a[i];
            break;
        }
    }
 
    // * Storing the count calculated from first stack
    count = i;
 
    /*
    *   Considering each element one by one from the second stack
    *   and adding it's value to the sum.
    *   If the sum is greater than maximum valid sum 'x'
    *   and we have elements left in the first stack,
    *   subtract the last element of first stack from the sum.
    *   If the sum is less than or equal to x,
    *   check if the current count is more than previously stored count
    *   and update the count variable
    */
    for(j = 0; j < bsize; j++) {
        sum += b[j];
        if(sum > x && i > 0) {
            sum -= a[--i];
        } else if(sum > x) {
 
            /*
            *   If the sum is more than maximum possible sum 'x'
            *   and we don't have any element to be removed from first stack
            *   break the loop as we cannot consider the current element in the second stack
            */
            break;
        }
        count = (sum <= x) ? max(count, i + j + 1) : count;
    }
 
    // * Returning the final count
    return count;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_temp;
    getline(cin, g_temp);

    int g = stoi(ltrim(rtrim(g_temp)));

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int m = stoi(first_multiple_input[1]);

        int maxSum = stoi(first_multiple_input[2]);

        string a_temp_temp;
        getline(cin, a_temp_temp);

        vector<string> a_temp = split(rtrim(a_temp_temp));

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            int a_item = stoi(a_temp[i]);

            a[i] = a_item;
        }

        string b_temp_temp;
        getline(cin, b_temp_temp);

        vector<string> b_temp = split(rtrim(b_temp_temp));

        vector<int> b(m);

        for (int i = 0; i < m; i++) {
            int b_item = stoi(b_temp[i]);

            b[i] = b_item;
        }

        int result = twoStacks(maxSum, a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
