
// We are given two arrays that represent the arrival and departure times of trains that stop at the platform. 
// We need to find the minimum number of platforms needed at the railway station so that no train has to wait.

// Examples 1:

// Input: N=6, 
// arr[] = {9:00, 9:45, 9:55, 11:00, 15:00, 18:00} 
// dep[] = {9:20, 12:00, 11:30, 11:50, 19:00, 20:00}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector < pair<int, int>>a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i].first;
    }
    for (int i = 0; i < n;i++){
        cin >> a[i].second;
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n;i++){
        
    }
}