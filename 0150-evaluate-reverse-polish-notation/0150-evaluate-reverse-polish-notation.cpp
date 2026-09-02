class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for(int i = 0; i < tokens.size(); i++) {

            string ch = tokens[i];

            // Number
            if(ch != "+" && ch != "-" && ch != "*" && ch != "/") {
                st.push(stoi(ch));
            }

            // Addition
            else if(ch == "+") {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                st.push(a + b);
            }

            // Subtraction
            else if(ch == "-") {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                st.push(a - b);
            }

            // Multiplication
            else if(ch == "*") {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                st.push(a * b);
            }

            // Division
            else if(ch == "/") {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                st.push(a / b);
            }
        }

        return st.top();
    }
};