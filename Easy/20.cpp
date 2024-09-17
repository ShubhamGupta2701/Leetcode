// 20. Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        for(auto i : s){
            if(i=='(' || i=='{' || i=='[') check.push(i);
            else{
                if(check.empty() || (check.top()=='(' && i!=')' || check.top()=='{' && i!='}' || check.top()=='[' && i!=']')) return false;
                check.pop();
            }
        }
        return check.empty();
    }
};