#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return i;
            }
        }
        return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    cout<<endl;
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    // if (linearsearch(arr,n,key)==1){
    //     cout<< "it exists"<<endl;
    // }
    // else {
    //     cout << "not exists" << endl;
    // }
    cout <<linearsearch(arr,n,key)<<endl;
    return 0;
}