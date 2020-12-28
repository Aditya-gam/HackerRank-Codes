//contest code
#include <cmath>
#include <stack>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    int i,j,k;
    cin>>s1;
    stack<char>st;
    stack<long>index;
    
    for(i = 0;i < s1.length();i++) {
        // cout<<i<<endl;
        if(s1[i] == '{'){
            st.push('}');
            index.push(i);
        }
        if(s1[i] == '['){
            st.push(']');
            index.push(i);
        }
        if(s1[i] == '('){
            st.push(')');
            index.push(i);
        }
        
        if(s1[i] == '}'){

            if(st.empty()){
                cout<<(i+1)<<endl;
                break;
            }

            if(st.top() == '}'){
                st.pop();
                index.pop();
            }
            else{
                cout<<(i+1)<<endl;
                break;
            }

        }
        if(s1[i] == ']'){

            if(st.empty()){
                cout<<(i+1)<<endl;
                break;
            }

            if(st.top() == ']'){
                st.pop();
                index.pop();
            }
            else{
                cout<<(i+1)<<endl;
                break;
            }

        }
        if(s1[i] == ')'){

            if(st.empty()){
                cout<<(i+1)<<endl;
                break;
            }

            if(st.top() == ')'){
                st.pop();
                index.pop();
            }
            else{
                cout<<(i+1)<<endl;
                break;
            }

        }    
    } 
    if(i == s1.length()){
        if(st.empty()){
           cout<<"NICE"<<endl; 
        }
        else{
            long temp;
            while(!index.empty()){
                temp = index.top();
                index.pop();
            }
            cout<<(temp+1)<<endl;      
        }   
    } 
}