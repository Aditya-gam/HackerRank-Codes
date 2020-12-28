#include <bits/stdc++.h>


using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result(queries.size(),0);
    vector<int>::iterator i,j;

    int k = 0;

    for(j = queries.begin();j != queries.end();j++){
        
        for(i = strings.begin();i != strings.end();i++){
            if(*i == *j){
                result[k]++;
            }
        }
        k++;
    }
    return result;

}

int main()
{
    

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i];

        if (i != res.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

   

    return 0;
}
