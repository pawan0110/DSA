//155. Min Stack

#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack <int> st;
    stack <int> minSt;
public:

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
       if(minSt.empty()){                             //t.c = o(1)
        minSt.push(val);                              //s.c = o(1)
       } else {
        minSt.push(min(val,minSt.top()));
       }
        
    }
    
    void pop() {
        st.pop();
        minSt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};



//method 2
class MinStack {
    stack <int> st;
    stack <int> minSt;
public:

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
       if(minSt.empty() || val <= minSt.top()){               // tc = o(1)
        minSt.push(val);                                    // sc = o(k)
       }                               // k = num of times a new minimum is added
        
    }
    
    void pop() {
      
        if(st.top()==minSt.top()){
            minSt.pop();
        }  
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};

