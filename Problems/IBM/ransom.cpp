We are given two word lists:
- Magazine: Contains the available words.
- Note: Contains the words required to construct a note.
We must determine whether the note can be formed using the magazine words.

Rules:
- Each magazine word can be used only once.
- Every word in the note must be available in the magazine.
- If all words are available, print "Yes"; otherwise, print "No"

--APPROACH:
Create an unordered_map<string, int> to store the frequency of each magazine word.

Traverse the magazine and increment the count of every word.

Traverse the note and check each required word:
- If its frequency is 0, print "No" and stop.
- Otherwise, decrement its frequency by 1 because that word has been used.



If all note words are processed successfully, print "Yes"



void checkMagazine(vector<string> magazine, vector<string> note){
    unorederd_map<string,int> freq;
    for(const string& str: magazine){
        freq[str]++;
    }
    for(const string& str: note){
        if (freq[str]==0){
            cout<<"No"<<endl;
            return;
        }
        freq[str]--;
    }
    cout<<"Yes"<<endl;
}