#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m,k;
    cin >> n >> m >> k;

    vector<int> arr1(n, 0);
    vector<int> arr2(m, 0);
    vector<int> arr3(k, 0);

    for (int i=0; i<n; i++) {
        cin >> arr1[i];
    }

    for (int j=0; j<m; j++) {
        cin >> arr2[j];
    }

    for (int p=0; p<k; p++) {
        cin >> arr3[p];
    }

    vector<int> ans;

    int target;
    cin >> target;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            for (int p=0; p<k; p++) {
                if (arr1[i] + arr2[j] + arr3[p] == target) {
                    ans.push_back(arr1[i]);
                    ans.push_back(arr2[j]);
                    ans.push_back(arr3[p]);
                }
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
