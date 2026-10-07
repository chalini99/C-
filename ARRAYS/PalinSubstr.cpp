class Solution {
public:

    bool valid(string s)
    {
        if(s.size() > 1 && s[0] == '0')
            return false;

        int num = stoi(s);

        return num >= 0 && num <= 255;
    }

    void solve(string s,
               int index,
               int parts,
               string current,
               vector<string>& ans)
    {
        if(parts == 4 && index == s.size())
        {
            current.pop_back();
            ans.push_back(current);
            return;
        }

        if(parts == 4)
            return;

        for(int len = 1; len <= 3; len++)
        {
            if(index + len > s.size())
                break;

            string part = s.substr(index, len);

            if(valid(part))
            {
                solve(
                    s,
                    index + len,
                    parts + 1,
                    current + part + ".",
                    ans
                );
            }
        }
    }

    vector<string> generateIp(string s)
    {
        vector<string> ans;

        solve(s, 0, 0, "", ans);

        return ans;
    }
};