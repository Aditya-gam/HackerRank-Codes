// contest code
#include<bits/stdc++.h>

using namespace std;

int main(){
    string textInput;
    int count = 0;
    getline(cin,textInput);
    // scanf("%[^\n]s",textInput);
    for (int i = 0; i < textInput.length(); i++){
        if((textInput[i] >= 'a' && textInput[i] <= 'z')||(textInput[i] >= 'A' && textInput[i] <= 'Z')||(textInput[i] >= '0' && textInput[i] <= '9')||textInput[i] == ' '){
            continue;
        }
        else{
            count++;
        }
    }    
    cout << count;
}   



