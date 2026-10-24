Understand the approach
Step 1: Count each string

For stringList = {"aba", "baba", "aba", "xzxb"}, the map stores:
String	Frequency
"aba"	2
"baba"	1
"xzxb"	1

Step 2: Answer each query
- "aba" → 2
- "xzxb" → 1
- "ab" → 0 (not found, so its default frequency is zero)
Output:
2
1
0
vector<int> matchingStrings(vector<string> stringList, vector<string> queries){
    unordered_map<string , int> freq;
    for(const string& str: stringList){
        freq[str]++;
    }
    vector<int> result;
    result.reserve(queries.size())
    for(const string& query: queries){
        result.push_back(freq[query]);
    }
    return result;

}