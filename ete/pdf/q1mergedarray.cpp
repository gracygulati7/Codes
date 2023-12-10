#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cout << "Enter the size of the first array: ";
    cin>>n;
    vector<int> arr1(n);
    cout << "Enter sorted elements for the first array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout << "Enter the size of the second array: ";
    cin>>m;
    vector<int> arr2(m);
    cout << "Enter sorted elements for the second array: ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    vector<int> mergedarray(n+m);
    merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),mergedarray.begin());

    cout << "Merged Array: ";
    for(int i=0;i<n+m;i++){
        cout<<mergedarray[i]<<" ";
    }
    return 0;
}