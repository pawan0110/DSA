#include<bits/stdc++.h>
using namespace std;

// using two pointer approach-----> optimal
int celebrity(vector<vector<int>> & M , int n){
    int a=0, b=n-1;
    
    while(a<b){
        if(M[a][b]==1){
            a++;
        } else {
            b--;
        }
    }
    int candidate = a;

    for(int i=0; i<n; i++){
        if(i != candidate){
            if(M[i][candidate]==0 || M[candidate][i]==1){
                return -1;
            }
        }
    }
    return candidate;
}
// tc = 0(n)
// sc = 0(1)


// using stack----> extra space required ---- 0(n)

int celebrity(vector<vector<int>> & M , int n){
    stack<int> st;
    for(int i=0; i<n; i++){
        st.push(i);
    }

    while(!st.empty()){
        int a = st.top(); st.pop();
        int b = st.top(); st.pop();

        if(M[a][b]==1){
            st.push(b);
        } else {
            st.push(a);
        }
    }
    int candidate = st.top();

    
    for(int i=0; i<n; i++){
        if(i != candidate){
            if(M[i][candidate]==0 || M[candidate][i]==1){
                return -1;
            }
        }
    }
    return candidate;
}
// tc = 0(n)
// sc = 0(n)