class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || 
               c == 'o' || c == 'u';
    }

    int countVowels(const string& word) {
        int cnt = 0;
        for (char c : word) {
            if (isVowel(c)) cnt++;
        }
        return cnt;
    }

    string reverseWords(string s) {
        vector<string> words;
        string curr = "";

        // Split words
        for (char c : s) {
            if (c == ' ') {
                words.push_back(curr);
                curr.clear();
            } else {
                curr.push_back(c);
            }
        }
        words.push_back(curr);

        // Vowel count of first word
        int target = countVowels(words[0]);

        // Process remaining words
        for (int i = 1; i < words.size(); i++) {
            if (countVowels(words[i]) == target) {
                reverse(words[i].begin(), words[i].end());
            }
        }

        // Rebuild result
        string result;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += ' ';
            result += words[i];
        }

        return result;
    }
};
