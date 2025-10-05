class Solution {
public:
    int minAddToMakeValid(string s) {
        int size = 0;
        int open = 0;

        for (auto& ch : s) {
            if (ch == '(') {
                size++;
            } else if (ch == ')' and size) {
                size--;
            } else {
                open++;
            }
        }

        return open + size;
    }
};
