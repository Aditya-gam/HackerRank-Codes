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


//Editorial solution 1:
// #include<stdio.h>
// #include<map>
// #include<iostream>
// #include<assert.h>

// using namespace std;

// map <pair<int,int>,int> mp;

// int ans,n,x,y,x1,y1,k;

// const int maxi=1e5;

// int range(int x,int y)
// {
//     return(x<=n && x>0 && y<=n && y>0);
// }

// void check(int x,int y,int xx, int yy)
// {
//     while(range(x,y) && !mp[{x,y}])
//      {
//         x+=xx;
//         y+=yy;
//         ans++;
//      }
// }

// int main()
// {
//     scanf("%d%d",&n,&k);

//     assert(0<n && n<=maxi);
//     assert(0<=k && k<=maxi);

//     cin>>x>>y;
//     assert(x>0 && x<=n);
//     assert(y>0 && y<=n);


//     while(k--)
//     {
//         scanf("%d%d",&x1,&y1);

//         assert(x1!=x || y1!=y);
//         assert(x1>0 && x1<=n);
//         assert(y1>0 && y1<=n);

//         mp[{x1,y1}]=1;
//     }

//      check(x+1,y,1,0);
//      check(x-1,y,-1,0);
//      check(x,y+1,0,1);
//      check(x,y-1,0,-1);
//      check(x+1,y+1,1,1);
//      check(x+1,y-1,1,-1);
//      check(x-1,y+1,-1,1);
//      check(x-1,y-1,-1,-1);

//      printf("%d\n",ans);
//     return 0;
// }


//Editorial solution 2:

// #include <bits/stdc++.h>
// using namespace std;

// #define IN(a,x,y) (a>=x && a<=y)

// const int MAXOBS = 100000;

// int N, K;
// int ox[MAXOBS+10], oy[MAXOBS+10];

// int val(int x, int y)
// {
//     int i;

//     int d11,d12,d21,d22,r1,r2,c1,c2;

//     d11 = min( x-1, y-1 );
//     d12 = min( N-x, N-y );
//     d21 = min( N-x, y-1 );
//     d22 = min( x-1, N-y );

//     r1 = y-1;
//     r2 = N-y;
//     c1 = x-1;
//     c2 = N-x;
//     for(i=0; i<K; i++)
//     {
//         if( x>ox[i] && y>oy[i] && x-ox[i] == y-oy[i] ) d11 = min( d11, x-ox[i]-1 );
//         if( ox[i]>x && oy[i]>y && ox[i]-x == oy[i]-y ) d12 = min( d12, ox[i]-x-1 );
//         if( ox[i]>x && y>oy[i] && ox[i]-x == y-oy[i] ) d21 = min( d21, ox[i]-x-1 );
//         if( x>ox[i] && oy[i]>y && x-ox[i] == oy[i]-y ) d22 = min( d22, x-ox[i]-1 );

//         if( x == ox[i] && oy[i]<y ) r1 = min( r1, y-oy[i]-1 );
//         if( x == ox[i] && oy[i]>y ) r2 = min( r2, oy[i]-y-1 );
//         if( y == oy[i] && ox[i]<x ) c1 = min( c1, x-ox[i]-1 );
//         if( y == oy[i] && ox[i]>x ) c2 = min( c2, ox[i]-x-1 );
//     }

//     return d11 + d12 + d21 + d22 + r1 + r2 + c1 + c2;
// }
// int main(void)
// {
//     int i,j,k,kase=0;

//     int x,y;
//     scanf("%d %d",&N, &K);
//     scanf("%d %d",&x, &y);

//     assert(IN(N,1,100000));
//     assert(IN(K,0,100000));

//     for(i=0; i<K; i++)
//     {
//         scanf("%d %d",&ox[i], &oy[i]);
//         assert(IN(ox[i],1,N) && IN(oy[i],1,N) && (ox[i]!=x || oy[i]!=y));
//     }

//     printf("%d\n",val(x, y));
//     return 0;
// }