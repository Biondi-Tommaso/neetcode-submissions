class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;

        for(char c : s){
            switch(c){
                case '(':
                    st.push(c);
                    break;
                case '[':
                    st.push(c);
                    break;
                case '{':
                    st.push(c);
                    break;
                case '}':
                    if(!st.empty() && st.top() == '{') {st.pop(); break;}
                    return false;
                case ']':
                    if(!st.empty() && st.top() == '[') {st.pop();break;}
                    return false;
                case ')':
                    if(!st.empty() && st.top() == '('){st.pop(); break;}
                    return false;

            }
        }
        if(st.empty())
            return true;
        return false;
    }
};
