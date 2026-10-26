Patterns in C++
Frequency count
cpp
unordered_map<int, int> freq;

for (int x : arr) {
    freq[x]++;
}
Check existence safely
cpp
if (freq.count(x)) {
    // x exists
}
Avoid relying on freq[x] just to check existence, because it can insert a default value if the key is absent.

Sort frequencies
cpp
vector<int> counts;

for (auto &[id, count] : freq) {
    counts.push_back(count);
}

sort(counts.begin(), counts.end());
Two pointers
cpp
int left = 0, right = n - 1;

while (left < right) {
    // process arr[left], arr[right]
    left++;
    right--;
}
Sliding window
cpp
unordered_map<char, int> freq;
int left = 0;

for (int right = 0; right < s.size(); right++) {
    freq[s[right]]++;

    while (/* window invalid */) {
        freq[s[left]]--;
        left++;
    }

    // update answer
}
Event simulation
cpp
unordered_map<string, long long> quantity;
long long profit = 0;

for (const string &event : events) {
    stringstream ss(event);
    string action, item;
    long long value;

    ss >> action;

    if (action == "ADD") {
        ss >> item >> value;
        quantity[item] += value;
    }
    else if (action == "QUERY") {
        // store or print result
    }
}