#ifndef UNTITLED_PROBLEM57_H
#define UNTITLED_PROBLEM57_H

#include <string>
#include <vector>
#include <iostream>

class Problem57 {
public:
    std::vector<std::string> solve(std::string s, int k) {
        using namespace std;
        vector<string> vec;
        if (s.empty() || s.size() < k) {
            vec.push_back(s);
            return vec;
        }

        string word = "", tmp = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                // if a word length is greater than k then the string cannot be broken.
                if (word.size() > k) {
                    vec.clear();
                    return vec;
                }
                int len_word = word.size();
                int len_tmp = tmp.size();
                if (len_tmp > 0) len_tmp++;
                if (len_tmp + len_word > k) {
                    vec.push_back(tmp);
                    tmp = word;
                    word = "";
                } else {
                    if (!tmp.empty())
                        tmp += ' ';
                    tmp += word;
                    word = "";
                }
            }
        }

        if (tmp.size() + word.size() != 0) {
            int len_word = word.size();
            int len_tmp = tmp.size();
            if (len_tmp > 0) len_tmp++;
            if (len_tmp + len_word < k) {
                tmp += ' ';
                tmp += word;
                word = "";
            } else {
                vec.push_back(tmp);
                tmp = word;
            }
        }

        if (!tmp.empty()) {
            vec.push_back(tmp);
        }

        return vec;

    }
};


#endif //UNTITLED_PROBLEM57_H
