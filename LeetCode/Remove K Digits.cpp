/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3328/ */

class Solution {
public:
    /* concept is using STACK push the character in the stack till next char is greater than prev else pop it
       repeat ths step i.e. the motive is to find local maxima from left and delete it till k deletions. */
    string removeKdigits(string num, int k) {
        if(num.length() < 1 || k <= 0)
            return num;
        if(k == num.length())
            return "0";
        string s;
        char ch = num[0];
        s.push_back(ch);
        int i=1;
      while(k && i < num.length())
      {
        while(i<num.length() && num[i] >= ch)
        {
            ch = num[i];
            s.push_back(ch);
            i++;
        }
        int n = s.length();
        if(!s.empty())
        { 
            s.erase(s.begin() + n-1); 
            k--;
            n--;
        }
        if(n >= 1)
            ch = s[n-1];
        else
            ch = '0';
      }
      string temp = num.substr(i);
      s = s + temp;
      i = 0;
      if(k > 0)
      {
          s = s.substr(0, s.length()-k);
      }
      while(!s.empty() && s[i] == '0')
      {
          s.erase(s.begin()+i);
      }
        if(s == "")
            return "0";
        return s;
    }
};
