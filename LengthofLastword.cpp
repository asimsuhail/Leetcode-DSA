// 58. Length of Last Word
// Checks from last if its space increase if space and size is 0 continue;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                size ++;
            } 
            if (s[i] == ' ' && size != 0) {
                break;
            }
        }
        return size;
    }
};
