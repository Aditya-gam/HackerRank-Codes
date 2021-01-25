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



struct Player {
    string name;
    int score;
}; 
bool comp(Player p1, Player p2){
    if(p1.score>p2.score) return true;
    if(p1.score==p2.score) return p1.name<p2.name;
    return false;
}
vector<Player> comparator(vector<Player> players) {
    sort(players.begin(),players.end(), comp);
    return players;
}

// if(a.score > b.score) {
//             return 1;
//         }
//         else if(a.score < b.score) {
//             return (-1);
//         }
//         else if(a.score == b.score) {
//             if(a.name < b.name){
//                 return (-1);
//             }
//             else if(a.name > b.name) {
//                 return 1;
//             }
//             else {
//                 return 0;
//             }
//         }
//         return false;