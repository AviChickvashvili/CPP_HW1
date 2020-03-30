#include "PhoneticFinder.hpp"
#include <string>
#include <cstring>
#include <iostream>


using namespace std;
namespace phonetic {
    bool change(char word1, char word2) {

        if (word1 == word2) {
            return true;
        } else {
            if ((word1 == 'v' || word1 == 'w') && (word2 == 'v' || word2 == 'w')) {
                return true;
            } else if ((word1 == 'b' || word1 == 'f' || word1 == 'p') &&
                       (word2 == 'b' || word2 == 'f' || word2 == 'p')) {
                return true;
            } else if ((word1 == 'g' || word1 == 'j') && (word2 == 'g' || word2 == 'j')) {
                return 1;
            } else if ((word1 == 'c' || word1 == 'k' || word1 == 'q') &&
                       (word2 == 'c' || word2 == 'k' || word2 == 'q')) {
                return 1;
            } else if ((word1 == 's' || word1 == 'z') && (word2 == 's' || word2 == 'z')) {
                return 1;
            } else if ((word1 == 'd' || word1 == 't') && (word2 == 'd' || word2 == 't')) {
                return 1;
            } else if ((word1 == 'o' || word1 == 'u') && (word2 == 'o' || word2 == 'u')) {
                return 1;
            } else if ((word1 == 'i' || word1 == 'y') && (word2 == 'i' || word2 == 'y')) {
                return 1;
            }
            return 0;
        }
    }

    char asciitolower(char in) {
        if (in <= 'Z' && in >= 'A')
            return in - ('Z' - 'z');
        return in;
    }

    int getSize(char *s) {
        char *t; // first copy the pointer to not change the original
        int size = 0;

        for (t = s; *t != '\0'; t++) {
            size++;
            *t = asciitolower(*t);
        }
        return size;
    }

    bool check(char *p_text, char *_word) {

        string orig = (string) p_text;
        int size1 = getSize(p_text);
        int size2 = getSize(_word);

//   cout<<"*******"<<_word<<"*******"<<endl;
//    cout<<p_text<<endl;
        int h = 0;
        if (size1 == size2) {
            bool ans = true;
            while (h < size1 && ans == true) {
                ans = change(p_text[h], _word[h]);
                h++;
            }
            if (ans == true) {
                cout << orig << endl;
                return true;
            }
        }
    return false;
    }

    string find(string text, string word) {
        char *cstr = new char[text.length() + 1];
        strcpy(cstr, text.c_str());

        char *_word = new char[word.length() + 1];
        strcpy(_word, word.c_str());

        char *p = strtok(cstr, " ");
        string x =(string)cstr;
        string _e = (string)_word;
        int y = 0;
        bool exists = false;
        string temp = "";
        while (p != 0 && y<x.length() && exists==false) {
            // cout << p << '\n';

              exists = check(p, _word);
        temp= (string)p;
        //p = strtok(NULL, " ");
    }

    if (exists == true) {
        return p;
    }
        else if(_e.length()==0)
        {
            string word2 = "The word is Empty";
            throw std::invalid_argument(word2);
        }
        else {
            string word2 = "The word : " + word +" dosen't exists";
            throw std::invalid_argument(word2);
        }
        return temp;
    }
}
