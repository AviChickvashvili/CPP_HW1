#include "PhoneticFinder.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <stdexcept>
using namespace std;

namespace phonetic{


int swapper(char c1,char c2)
{
    if(c1 >= 'A' && c1 <= 'Z')
    {
        c1 = c1+32;
    }
    if(c2 >= 'A' && c2 <= 'Z')
    {
        c2 = c2+32;
    }
    if(c1 == c2)
    {
        return 1;
    }
    else
    {
        if( (c1 == 'v' || c1 == 'w') && (c2 == 'v' || c2 == 'w')) 
        {
            return 1;
        }
        else if ((c1 == 'b' || c1 == 'f' || c1 == 'p') && (c2 == 'b' || c2 == 'f' || c2== 'p'))
        {
            return 1;
        }
        else if ((c1 == 'g' || c1 == 'j') && (c2 == 'g' || c2 == 'j'))
        {
            return 1;
        }
        else if ((c1 == 'c' || c1 == 'k' || c1 == 'q') && (c2 == 'c' || c2 == 'k' || c2== 'q'))
        {
           return 1;
        }
        else if ((c1 == 's' || c1 == 'z') && (c2 == 's' || c2 == 'z'))
        {
            return 1;
        }
        else if ((c1 == 'd' || c1 == 't') && (c2 == 'd' || c2 == 't'))
        {
           return 1;
        }
        else if ((c1 == 'o' || c1 == 'u') && (c2 == 'o' || c2 == 'u'))
        {
           return 1;
        }
        else if ((c1 == 'i' || c1 == 'y') && (c2 == 'i' || c2 == 'y'))
        {
           return 1;
        }
        return 0;
    }
}

string find(string text,string word)
{
   char* cstrText = new char[text.length()+1];
   char* cstrWord = new char(word.length()+1); 
   strcpy(cstrText,text.c_str());
   strcpy(cstrWord,word.c_str());
    char* arrWord;
    arrWord = strtok(cstrText," ");
    int ans = 1;
    while(arrWord != NULL)
    {
        ans =1;
        int counter  =0;
        while(arrWord[counter] != '\0')
        {
           if(counter < word.length())
           {
            int ansSwap = swapper(arrWord[counter],cstrWord[counter]);
            ans = ans & ansSwap;
           }
           else
           {
               ans = 0;
           }
           
            counter++;
        }
        if(counter != word.length())
        {
            ans = 0;
        }
        if(ans == 1)
        {
            return arrWord;
        }
        //cout << counter << endl;
        arrWord = strtok(NULL," ");
    }
   // throw 
   if(ans == 0)
    {
        string test = "Could not load config file '" + word + "'";
        throw std::invalid_argument(test);
    }
    return "FAIL";
}
}