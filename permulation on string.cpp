#include<iostream>
#include<cstring>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;

        int freq1[26] = {0}, freq2[26] = {0};

        // Build frequency of s1 and first window of s2
        for(int i = 0; i < s1.length(); i++){
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        // Check if first window matches
        if(memcmp(freq1, freq2, 26 * sizeof(int)) == 0)
            return true;

        // Now slide over the rest of s2
        for(int i = s1.length(); i < s2.length(); i++){
            freq2[s2[i] - 'a']++;           // include new char
            freq2[s2[i - s1.length()] - 'a']--; // remove old char

            if(memcmp(freq1, freq2, 26 * sizeof(int)) == 0)
                return true;
        }
        return false;
    }
};
