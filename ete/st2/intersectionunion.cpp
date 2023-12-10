/*#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> Union(int arr1[],int n,int arr2[],int m){
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int j=0;j<m;j++){
        s.insert(arr2[j]);
    }
    vector<int> vec(s.begin(),s.end());
    return vec;
}
void intersection(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout<<arr2[j]<<" ";
            i++;
            j++;
        }
    }
}
int main(){
    int n;
    cout<<"enter size of first array: "<<" ";
    cin>>n;
    int arr1[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"enter size of second array: "<<" ";
    cin>>m;
    int arr2[m];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> uni= Union(arr1,n,arr2,m);
    for(int i=0;i<uni.size();i++){
        cout<<uni[i]<<" ";
    }
    cout<<endl;
    intersection(arr1,n,arr2,m);
}*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> Union(int arr1[],int n,int arr2[],int m){
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    vector<int> vec(s.begin(),s.end());
    return vec;
}
int intersection(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]) {
            j++;
        }
        else{
            cout<<arr2[j]<<" ";
            i++;
            j++;
            }
        }
    }
int main(){
    int n,m;
    cin>>n;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
            cin >> arr1[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
            cin >>arr2[i];
    }
    cout<<"union:"<<endl;
    vector<int> uni=Union(arr1,n,arr2,m);
    for(int i=0;i<uni.size();i++){
        cout<<uni[i]<<" ";
    }
    cout<<endl;
    cout<<"intersection:"<<endl;
    intersection(arr1,n,arr2,m);
    return 0;
}