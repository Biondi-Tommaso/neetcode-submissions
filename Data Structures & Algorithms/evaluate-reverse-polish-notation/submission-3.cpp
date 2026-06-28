class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int firstOperator, secondOperator;
            for (string token : tokens){
            if (token.size() > 1 || isdigit(token[0])) {
                st.push(std::stoi(token));
                continue;
            }
            char op = token[0];
            switch(op){
                case '+':
                    secondOperator = st.top();
                    st.pop();
                    firstOperator = st.top();
                    st.pop();
                    st.push(firstOperator+secondOperator);
                    break;
                case '-':
                    secondOperator = st.top();
                    st.pop();
                    firstOperator = st.top();
                    st.pop();
                    st.push(firstOperator-secondOperator);
                    break;
                case '*':
                    secondOperator = st.top();
                    st.pop();
                    firstOperator = st.top();
                    st.pop();
                    st.push(firstOperator*secondOperator);
                    break;
                case '/':
                    secondOperator = st.top();
                    st.pop();
                    firstOperator = st.top();
                    st.pop();
                    st.push(firstOperator/secondOperator);
                    break;
                default:
                    st.push(std::stoi(token));
            }
        }
        return st.top();
    }
};
