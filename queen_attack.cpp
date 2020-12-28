#include<iostream>

using namespace std;
int mov_space = 0, k;

void tr_north(int rq, int cq, int n, int r[], int c[]) {
    
    for(int i = rq + 1; i <= n; i++) {
        int count = 0;
        for (int j = 0; j < k; j++) {
            if(i == r[j] && cq == c[j]) {
                break;
            }
            else {
                count++;
            }
        }
        if(count == k) {
            mov_space++;
        }
        else {
            break;
        }
    }
}

void tr_south(int rq, int cq, int n, int r[], int c[]) {
    
    for(int i = rq - 1; i > 0; i--) {
        int count = 0;
        for (int j = 0; j < k; j++) {
            if(i == r[j] && cq == c[j]) {
                break;
            }
            else {
                count++;
            }
        }
        if(count == k) {
            mov_space++;
        }
        else {
            break;
        }
    }
}

void tr_east(int rq, int cq, int n, int r[], int c[]) {
    
    for(int i = cq + 1; i <= n; i++) {
        int count = 0;
        for (int j = 0; j < k; j++) {
            //cout << "hi " << endl;
            if(i == c[j] && rq == r[j]) {
                
                break;
            }
            else {
                count++;
            }
        }
        if(count == k) {
            mov_space++;
        }
        else {
            break;
        }
    }
}

void tr_west(int rq, int cq, int n, int r[], int c[]) {
    
    for(int i = cq - 1; i > 0; i--) {
        int count = 0;
        for (int j = 0; j < k; j++) {
            if(i == c[j] && rq == r[j]) {
                break;
            }
            else {
                count++;
            }
        }
        if(count == k) {
            mov_space++;
        }
        else {
            break;
        }
    }
}

void tr_northEast(int rq, int cq, int n, int r[], int c[]) {
    int i, j;
    for(i = rq + 1, j = cq + 1; i <= n && j <= n; i++, j++) {
        int count = 0;
        if((i - rq) == (j - cq) ) {
            for (int x = 0; x < k; x++) {
                if(i == r[x] && j == c[x]) {
                    break;
                }
                else {
                    count++;
                }    
            }
            if(count == k) {
                mov_space++;
            }
            else {
                break;
            }
        }
    }
}

void tr_northWest(int rq, int cq, int n, int r[], int c[]) {
    int i, j;
    for(i = rq + 1, j = cq - 1; i <= n && j > 0; i++, j--) {
        int count = 0;
        if((i - rq) == (cq - j)) {
            for (int x = 0; x < k; x++) {
                if(i == r[x] && j == c[x]) {
                    break;
                }
                else {
                   count++;
                }    
            }
            if(count == k) {
                mov_space++;
            }
            else {
                break;
            }
        }
    }
}

void tr_southEast(int rq, int cq, int n, int r[], int c[]) {
    int i, j;
    for(i = rq - 1, j = cq + 1; i > 0 && j <= n; i--, j++) {
        int count = 0;
        if((rq - i) == (j - cq)) {
            for (int x = 0; x < k; x++) {
                if(i == r[x] && j == c[x]) {
                    break;
                }
                else {
                    count++;
                }    
            }
            if(count == k) {
                mov_space++;
            }
            else {
                break;
            }
        }
    }
}

void tr_southWest(int rq, int cq, int n, int r[], int c[]) {
    int i, j;
    for(i = rq - 1, j = cq - 1; i > 0 && j > 0; i--, j--) {
        int count = 0;
        if((rq - i) == (cq - j)) {
            for (int x = 0; x < k; x++) {
                if(i == r[x] && j == c[x]) {
                    break;
                }
                else {
                    count++;
                }    
            }
            if(count == k) {
                mov_space++;
            }
            else {
                break;
            }
        }
    }
}

int main() {
    int n, rq, cq;
    
    // cout << "Enter n and k\n";
    cin >> n >> k;
    // cout << "Enter position of queen(rxc)\n";
    cin >> rq >> cq;
    int r[k], c[k];
    
    // cout << "\nEnter position of obstacle (rxc)";

    for (int i = 0; i < k; i++) {
        cin >> r[i] >> c[i];
    }

    tr_north(rq, cq, n, r, c);
    //cout << mov_space << endl;
    tr_south(rq, cq, n, r, c);
    //cout << mov_space << endl;
    tr_east(rq, cq, n, r, c);
    //cout << mov_space << endl;
    tr_west(rq, cq, n, r, c);
    // cout << mov_space << endl;
    tr_northEast(rq, cq, n, r, c);
    // cout << mov_space << endl;
    tr_northWest(rq, cq, n, r, c);
    // cout << mov_space << endl;
    tr_southEast(rq, cq, n, r, c);
    // cout << mov_space << endl;
    tr_southWest(rq, cq, n, r, c);
    

    cout << mov_space;
    return 0;
}