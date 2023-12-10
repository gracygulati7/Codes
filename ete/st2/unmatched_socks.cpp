// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int res=0;
//     for(int i=0;i<n;i++){
//         res=res^arr[i];
//     }
//     cout<<res<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
    }
    cout<<result<<endl;
    return 0;
}