class MinStack {
public:
    stack<int> st;
    MinStack() {
    
    }
    
    void push(int val) {
        st.push(val);
        cout << "[debug] fatto il push di "<<val<<endl;
    }
    
    void pop() {
        st.pop();
        cout << "[debug] fatto il pop "<<endl;
    }
    
    int top() {
        
        cout << "[debug] fatto il top di "<<st.top()<<endl;
        return st.top();
    }
    
    int getMin() {
        stack<int> aux;
        int min = st.top();
        while(!st.empty()){
            int tmp = st.top();
            min = std::min(min, tmp);
            st.pop();
            aux.push(tmp);
        }

        while(!aux.empty()){
            st.push(aux.top());
            aux.pop();
        }
        return min;

        cout << "[debug] fatto il min "<<endl;
    }
};
