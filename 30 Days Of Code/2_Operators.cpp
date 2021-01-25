#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    float tip = (float)meal_cost * tip_percent / 100;
    float tax = (float)meal_cost * tax_percent / 100;
    meal_cost += tip + tax;
    cout << round(meal_cost);
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');    //This line ignores the rest of the current line, up to '\n' or EOF - whichever comes first

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');    //This line ignores the rest of the current line, up to '\n' or EOF - whichever comes first

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');    //This line ignores the rest of the current line, up to '\n' or EOF - whichever comes first

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
