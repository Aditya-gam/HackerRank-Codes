#include<bits/stdc++.h>

using namespace std;

class matrix {
    int **aa;
public : 
    matrix(int n) {
        int i, count = 0;
        aa = new int*[n];
        for(i = 0; i < n; i++){
            aa[i] = new int[n];
        }
        for(i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                aa[i][j] = count++;
            }
        }
    }

    void rotate(int a, int b, int c) {
        int **ba, i, j;
        int x = 0, y = c;
        // cout<<c-a+1<<" "<<c-b+1<<endl;
        ba = new int*[c + 1];
        for(i = 0; i < c + 1; i++){
            ba[i] = new int[c + 1];
        }
        //   cout<<"hii "<<endl;
        for(i = a; i <= a + c; i++)
        {
            for(j = b; j <= b + c; j++){
                ba[x++][y] = aa[i][j];
            }
            x = 0;
            y--;
        }
            // cout<<"ba[0][0] = "<<ba [0][0]<<endl;
        x = 0;
        y = 0;
        for(i = a; i <= a + c; i++) {
            for(j = b; j <= b + c; j++) {
                aa[i][j] = ba[x][y++];
            }
            x++;
            y = 0;
        }
    //cout<<"reached to deallocation of memory "<<endl;
        for(i = 0; i < c + 1; i++) {
            //cout<<"just before i die "<<endl;
            delete [] ba[i];
        }
        delete [] ba;
    }

    void find(int x, int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(aa[i][j] == x) {
                    cout << i + 1<< " " <<j + 1 << endl;
                    goto end;
                }
            }
        }
        end:;
    }

    void print(int n) {
        int i, j;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++){
                cout << aa[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n, s;
    cin >> n >> s;
    matrix obj(n);
    int a, b, d;
    for(int i = 0; i < s; i++) {
        cin >> a >> b >> d;
        obj.rotate(a-1, b-1, d);
    }
    int num, k;
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> k;
        obj.find(k, n);
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;



// int main(){
//     int sizeOfBoard, noOfRots, a, b, d, i, j, noOfOut, toOut, num;
//     cin >> sizeOfBoard >> noOfRots;

//     vector<vector<int>> mainArr( sizeOfBoard, vector<int> (sizeOfBoard)), posiArray( sizeOfBoard, vector<int> (sizeOfBoard));

//     for(i = 0; i < sizeOfBoard; i++){
//         for(j = 0; j < sizeOfBoard; j ++){
//             mainArr[i][j] = (sizeOfBoard*i) + j;
//             posiArray[i][j] = (sizeOfBoard*i) + j;
//         }
//     }


//     while (noOfRots --){
//         cin >> a >> b >> d;
//         a --;
//         b --;
//         d ++;

//         vector<vector<int>> tempArr( d + 1, vector<int> (d + 1));

//         for(i = 0; i < d; i++){
//             for(j = 0; j < d; j ++){
//                 tempArr[j][d - i - 1] = mainArr[a+i][b+j];
//             }
//         }

//         for(i = 0; i < d; i++){
//             for(j = 0; j < d; j ++){
//                 mainArr[a+i][b+j] = tempArr[i][j];
//                 num = mainArr[a+i][b+j];
//                 posiArray[num/sizeOfBoard][num%sizeOfBoard] = ((a+i)*sizeOfBoard) + (b+j);
//             }
//         }

//         // for(i = 0; i < sizeOfBoard; i++){
//         //     for(j = 0; j < sizeOfBoard; j ++){
//         //         cout << posiArray[i][j] << " ";
//         //     }
//         //     cout << endl;
//         // }

//     }

//     cin >> noOfOut;

//     while (noOfOut--){
//         cin >> toOut;

//         num = posiArray[toOut/sizeOfBoard][toOut%sizeOfBoard];

//         cout << (num/sizeOfBoard)+1 << " " << (num%sizeOfBoard)+1 << endl;

//     }
// }
