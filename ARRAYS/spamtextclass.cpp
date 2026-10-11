#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

vector<string> classifyspam(vector<string> texts, vector<string> spamwords){
    unordered_set<string> spamset;
    // stores spam words in lowercsae;
    for (string word: spamwords){
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        spamset.insert(word);

    }
    vector<string> result;
    for (string text : texts){
        transform(text.begin(), text.end(), text.begin(), ::tolower);
        stringstream ss(text);
        string word;

        int count= 0;
        while(ss >> word){
            if (spamset.count(word)){
                count++;
            }
            if (count >= 2){
                break;
            }
        }
        if (count>=2){
            result.push_back("spam");
        }
        else{
            result.push_back("not_spam");
        }
    }
    return result;
}