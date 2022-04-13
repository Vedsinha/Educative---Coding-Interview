using namespace std;

#include <bits/stdc++.h>

class MinSizeSubArraySum {
 public:
  static int findMinSubArray(int S, const vector<int>& arr) {
    // TODO: Write your code here
    int windowSum = 0, windowStart = 0, minLen = INT_MAX;
    for(int windowEnd = 0; windowEnd < arr.size(); windowEnd++) {
      windowSum += arr[windowEnd];
      while(windowSum >= S) {
        int len = windowEnd - windowStart + 1;
        minLen = min(minLen, len);
        windowSum -= arr[windowStart++];
      }
    }
    if(minLen == INT_MAX) minLen = 0;
    return minLen;
  }
};
