#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'findSubsequence' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY numbers
 *  2. INTEGER k
 */

vector<int> findSubsequence(vector<int> nums, int k) {
        if(nums.size() <=1 || nums.size() == k)
            return nums;
        
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> div(mx+1, 0);
        for(int i=0; i<nums.size();i++)
        {
            for(int j=1; j<=sqrt(nums[i]); j++)
            {
                if(nums[i]%j == 0)
                {
                    div[j]++;
                    if(j != nums[i]/j)
                         div[(nums[i]/j)]++;
                }
            }

        }
        for(int i=mx; i>=1; i--)
        {   //cout<<i<<"->"<<div[i]<<"* ";
            if(div[i] >= k)
            {
                mx = i;
                //cout<<"-"<<mx;
                break;
            }
        } 
        vector<int> res;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%mx == 0)
                res.push_back(nums[i]);
        }
        return res;
    }
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string numbers_count_temp;
    getline(cin, numbers_count_temp);

    int numbers_count = stoi(ltrim(rtrim(numbers_count_temp)));

    vector<int> numbers(numbers_count);

    for (int i = 0; i < numbers_count; i++) {
        string numbers_item_temp;
        getline(cin, numbers_item_temp);

        int numbers_item = stoi(ltrim(rtrim(numbers_item_temp)));

        numbers[i] = numbers_item;
    }

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    vector<int> result = findSubsequence(numbers, k);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

