class Solution {
public:
    int romanToInt(string s) {
        
        vector<int> ans (100); 
        ans['I'] = 1 ; 
        ans['V'] = 5 ; 
        ans['X'] = 10 ; 
        ans['L'] = 50 ; 
        ans['C'] = 100 ; 
        ans['D'] = 500 ; 
        ans['M'] = 1000 ; 

        int num = ans[s.at(s.length()-1)]  ; 
        for (int iCnt = s.length()-2 ; iCnt >= 0  ; iCnt--)
        {
            if (ans[s.at(iCnt)]  <  ans[s.at(iCnt + 1)] )
            {
                num = num - ans[s.at(iCnt )];
            } 
            else 
            {
                num = num + ans[s.at(iCnt)];
            }
        }
        
        return num;
    }
};