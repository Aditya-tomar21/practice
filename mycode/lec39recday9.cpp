//leetcode 39


class Solution {
private:
void solve(string digit , string output , int index , vector<string>& ans , string mapping[])
{
//base case
if(index >= digit.length())
{
    ans.push_back(output);
    return ;
}

int number = digit[index] - '0';// string ko number me change kr dega
string value = mapping[number]; // mapping krwa dega jaise 2  k liye abc ko


for(int i = 0 ; i<value.length() ;i++)
{
    output.push_back(value[i]);
    solve(digit , output , index+1 , ans, mapping);
    output.pop_back() ; 
}

}

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() ==0) 
        return ans; //length of given string is zero

        string output ;
        int index = 0; //travers krne k liye
              
        string mapping[10]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
        //index workenge as keypad

        solve(digits , output , index , ans , mapping);
        return ans;




    }
};