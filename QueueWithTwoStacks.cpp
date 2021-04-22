#include<bits/stdc++.h>

using namespace std;

stack<int> s1;
stack<int> s2;
int front;

void enqueue(int x) {
    while(!s2.empty()) {
        s1.push(s2.top());
        s2.pop();
    }
    if(s1.empty()) {
        front = x;
    }
    s1.push(x);
}

int dequeue() {
    while(!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
    int x = s2.top();
    s2.pop();
    if(!s2.empty()) {
        front = s2.top();
    }
    return x;
}

int front_val() {
    return front;
}

int main() {
    

    int q;
    cin >> q;

    while(q-- > 0) {
        int type;
        cin >> type;

        // if(type == 1) {
        //     int x;
        //     cin >> x;
        //     enqueue(x);
        // }
        // else if(type == 2) {
        //     dequeue();
        // }
        // else if(type == 3) {
        //     cout << front_val() << endl;
        // }

        switch(type) {
            case 1:
                int x;
                cin >> x;
                enqueue(x);
                break;
            case 2:

                dequeue();
                break;
            case 3:
                cout << front_val() << endl;
                break;
        }
    }


    return 0;
}