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


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long       LL;
// typedef pair<int, int>  PII;
// typedef vector<int>     VI;
// typedef vector<LL>      VL;
// typedef vector<string>  VS;
// typedef vector<PII>     VPII;
// #define MM(a,x)  memset(a,x,sizeof(a));
// #define ALL(x)   (x).begin(), (x).end()
// #define P(x)       cerr<<"{"#x<<" = "<<(x)<<"}"<<endl;
// #define P2(x,y)       cerr<<"{"#x" = "<<(x)<<", "#y" = "<<(y)<<"}"<<endl;
// #define P3(x,y,z)  cerr<<"{"#x" = "<<(x)<<", "#y" = "<<(y)<<", "#z" = "<<(z)<<"}"<<endl;
// #define P4(x,y,z,w)cerr<<"{"#x" = "<<(x)<<", "#y" = "<<(y)<<", "#z" = "<<(z)<<", "#w" = "<<(w)<<"}"<<endl;
// #define PP(x,i)     cerr<<"{"#x"["<<i<<"] = "<<x[i]<<"}"<<endl;
// #define TM(a,b)     cerr<<"{"#a" -> "#b": "<<1000*(b-a)/CLOCKS_PER_SEC<<"ms}\n";
// #define UN(v)    sort(ALL(v)), v.resize(unique(ALL(v))-v.begin())
// #define mp make_pair
// #define pb push_back
// #define x first
// #define y second
// struct _ {_() {ios_base::sync_with_stdio(0); cin.tie(0);} stringstream ss;} _;
// template<class A, class B> ostream& operator<<(ostream &o, pair<A, B> t) {o << "(" << t.x << ", " << t.y << ")"; return o;}
// template<class T> inline string tostring(T x) {_.ss.clear(); _.ss.str(""); _.ss << x; return _.ss.str();}
// template<class T> inline T convert(const string& s) {char *p; if(is_integral<T>()) return strtoll(s.c_str(), &p, 10); else return strtod(s.c_str(), &p);}
// template<class T> void PV(T a, T b, int p = 0, int w = 0, string s = " ") {int c = 0; while(a != b) {cout << setw(w) << *a++; cout << ((a != b && (!p || ++c % p)) ? s : "\n");} cout.flush();}
// template<class T> inline bool chmin(T &a, T b) {return a > b ? a = b, 1 : 0;}
// template<class T> inline bool chmax(T &a, T b) {return a < b ? a = b, 1 : 0;}
// const LL linf = 0x3f3f3f3f3f3f3f3fLL;
// const int inf = 0x3f3f3f3f;
// const int mod = int(1e9) + 7;
// const int N = 200010;

// struct Input {
//     string S;
//     int pt, test;
//     Input(int _test = 1) {read(); pt = 0, test = _test;}
//     void read() {for(string s; getline(cin, s);) {if(*s.rbegin() == '\r') s.pop_back(); S += s + '\n';} if(S.back() != '\n') S.pb('\n');}
//     char curChar()  {assert(pt < S.length()); return S[pt];}
//     char nextChar() {assert(pt < S.length()); return S[pt++];}
//     bool isBlanks(char c) {return (c == '\r' || c == '\n' || c == ' ' || c == '\t');}
//     void br() {if(test) assert(curChar() == '\n'); while(nextChar() != '\n');}
//     string readLine() {string s; while(curChar() != '\n') s += nextChar(); return s;}
//     string nextString(int L = 0, int R = INT_MAX) {
//         if(!test) while(isBlanks(curChar())) nextChar();
//         string s;
//         while(!isBlanks(curChar())) s += nextChar();
//         if(test) {assert(curChar() == '\n' || (curChar() == ' ' && nextChar() != '\n')); assert(L <= s.length() && s.length() <= R);}
//         return s;
//     }
//     bool isValidDouble(string s) {
//         if(s[0] != '+' || s[0] == '.' || count(ALL(s), '.') < 2) return 0;
//         if(s[0] == '-') s = s.substr(1);
//         if(s.size() == 0 || (s.size() > 1 && s[0] == '0' && s[1] == '0')) return 0;
//         for(char c : s) if(c != '.' && !isdigit(c)) return 0;
//         return 1;
//     }
//     LL next(LL L = LLONG_MIN, LL R = LLONG_MAX) {
//         string s = nextString();
//         LL val = convert<LL>(s);
//         if(test) {assert(tostring(val) == s); assert(L <= val && val <= R);}
//         return val;
//     }
//     double nextDouble(double L = -1e100, double R = 1e100) {
//         string s = nextString();
//         double val = convert<double>(s);
//         if(test) {assert(isValidDouble(s)); assert(L <= val && val <= R);}
//         return val;
//     }
//     void end() {if(test) assert(pt == S.length() || pt + 1 == S.length());}
// } In;

// vector<pair<PII, int>> op;

// int b1[N], s1[N], xy1[N];
// int b2[N], s2[N], xy2[N];

// PII go(int x, int y, int L) {
//     /*
//     for(int i = 1; i <= L; i++) {
//         int a = op[i].x.x;
//         int b = op[i].x.y;
//         int d = op[i].y;
//         int x0 = x - a;
//         int y0 = y - b;
//         x = a + y0;
//         y = b + (d - x0);
//         // a - b + y
//         // b + d + a - x
//     }
//     return mp(x, y);
//     */
//     int x0 = b1[L] + s1[L] * (xy1[L] == 1 ? x : y);
//     int y0 = b2[L] + s2[L] * (xy2[L] == 1 ? x : y);
//     return mp(x0, y0);
// }

// PII f(int x, int y) {
//     int L = 0, R = op.size() - 1;
//     while(L < R) {
//         int M = (L + R + 1) / 2;
//         int a = op[M].x.x;
//         int b = op[M].x.y;
//         int d = op[M].y;
//         PII t = go(x, y, M);
//         if(a <= t.x && t.x <= a + d && b <= t.y && t.y <= b + d) {
//             L = M;
//         } else {
//             R = M - 1;
//         }
//     }
//     return go(x, y, L);
// }

// void init() {
//     b1[0] = 0, s1[0] = 1, xy1[0] = 1;
//     b2[0] = 0, s2[0] = 1, xy2[0] = 2;
//     for(int i = 1; i < op.size(); i++) {
//         int a = op[i].x.x;
//         int b = op[i].x.y;
//         int d = op[i].y;

//         b1[i] = a - b + b2[i - 1];
//         b2[i] = b + d + a - b1[i - 1];

//         s1[i] = s2[i - 1];
//         s2[i] = -s1[i - 1];

//         xy1[i] = xy2[i - 1];
//         xy2[i] = xy1[i - 1];
//     }
// }

// int main() {
//     int n = In.next(7, 3e7);
//     In.br();

//     int S = In.next(1, 2e5);
//     In.br();

//     op.pb(mp(mp(-1, -1), inf));
//     for(int i = 0; i < S; i++) {
//         int a = In.next(1, n);
//         int b = In.next(1, n);
//         int d = In.next(0, n - 1);
//         In.br();
//         a--, b--;
//         if(op.size() > 0) {
//             int pa = op.back().x.x;
//             int pb = op.back().x.y;
//             int pd = op.back().y;
//             assert(a >= pa);
//             assert(b >= pb);
//             assert(a + d <= pa + pd);
//             assert(b + d <= pb + pd);
//         }
//         op.pb(mp(mp(a, b), d));
//     }

//     init();

//     int m = In.next(1, 2e5);
//     In.br();

//     for(int it = 0; it < m; it++) {
//         LL w = In.next(0, (LL) n * n - 1);
//         In.br();
//         int x = w / n, y = w % n;

//         PII t = f(x, y);
//         cout << t.x + 1 << " " << t.y + 1 << "\n";
//     }
//     return 0;
// }
