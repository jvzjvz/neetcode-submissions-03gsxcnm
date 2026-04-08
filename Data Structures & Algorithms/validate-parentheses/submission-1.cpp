class Solution {
public:
    bool isValid(string s) {
        std::stack<char> openings;

        for (char c : s) {
            if (c == '[' || c == '(' || c == '{') {
                openings.push(c);
            } else {
                if (openings.empty()) return false;
                char last_opening = openings.top();
                openings.pop();
                if (last_opening == '[' && c == ']')
                    continue;
                
                if (last_opening == '(' && c == ')')
                    continue;

                if (last_opening == '{' && c == '}')
                    continue;

                return false;
            }
        }

        return openings.empty();
    }
};
