//Time Complexity: O(n) needed to pass through each character
//Space Complexity: O(1) required to store the map values
//difficulty: easy
class Solution {

public:
    int romanToInt(string s) {
        map<char,int> values;
        values['I']=1;
        values['V']=5;
        values['X']=10;
        values['L']=50;
        values['C']=100;
        values['D']=500;
        values['M']=1000;
        int sum=0;
        for(int i=0; i<s.length()-1;++i){
            if(values[s[i]]>=values[s[i+1]]){
              sum+=values[s[i]];
            }else{
              sum-=values[s[i]];
            }
        }
        sum+=values[s[s.length()-1]];
        return sum;
    }
};