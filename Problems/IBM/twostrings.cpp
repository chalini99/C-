Given two strings, s1 and s2, determine whether they share at least one common character.
- If they share a character, return "YES".
- If they don't share any character, return "NO".
A common substring of length 1 is enough.
 
Hashing / Character Frequency

Create a boolean array of size 26 to track the characters a to z in the first string.

Traverse the first string and mark each character as present.

Traverse the second string:
- If a character is already marked, return "YES".

If no common character is found, return "NO".

s1 = "hello"
s2 = "world"
YES
Time: \(O(n+m)\), where \(n\) and \(m\) are the lengths of the strings.



Extra space: \(O(1)\), because the boolean array always has 26 entries.


CODE:
string twoStrings(string s1, string s2) {
    bool seen[26] = {false};

    for (char c : s1) {
        seen[c - 'a'] = true;
    }

    for (char c : s2) {
        if (seen[c - 'a']) {
            return "YES";
        }
    }

    return "NO";
}