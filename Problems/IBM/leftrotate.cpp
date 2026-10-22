int n = arr.size();
    vector<int> result;

    for (int i = d; i < n; i++) {
        result.push_back(arr[i]);
    }

    for (int i = 0; i < d; i++) {
        result.push_back(arr[i]);
    }

    return result;