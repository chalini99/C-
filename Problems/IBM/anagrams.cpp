int anagrams(string s1, string s2){
    int freq[26] = {0};
    for (char c:s1){
        freq[c-'a']++;
    }
    for (char c: s2){
        freq[c-'a']--;
    }
    int del = 0;
    for (int i=0; i<26; i++){
        del += abs(freq[i]);
    }
    return del;
}