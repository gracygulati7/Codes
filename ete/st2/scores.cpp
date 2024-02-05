// #include<iostream>
// #include<vector>
// using namespace std;
// void outperform(vector<int> arr,int n){
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(i!=j && arr[j]>arr[i]){
//                 count++;
//             }
//         }
//         if(count>=2){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<endl;
//     cout<<"outpeformed players: "<<" ";
//     outperform(arr,n);
//     return 0;
// }


#include<iostream>
using namespace std;
int outperform(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(i!=j && arr[j]>arr[i]){
                count++;
            }
        }
        if(count>=2){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"outperformed players: "<<endl;
    outperform(arr,n);
    return 0;
}