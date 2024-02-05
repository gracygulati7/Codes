#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tp=0;
    for(int i=0;i<n;i++){
        int curr=arr[i];
        for(int j=i+1;j<n;j++){
            cout<< "(" << curr << "," << arr[j] << ")" << " " ;
            tp++;
        }
        cout<<endl;
    }
    cout<<"total pairs: "<<tp<<endl;
}

/*
total pairs in an array of n elements = (n(n-1))/2
eg- arr=[2,4,6,8]
pairs of 2= (2,4), (2,6), (2,8)
pairs of 4= (4,6), (4,8)
pairs of 6= (6,8)
total pairs= (4*3)/2= 6 pairs
logic-
start-> for int i=0 to `i<n`
int curr=arr[i]
end-> for int j=i+1 to `j<n`
pairs=> (curr,arr[j])
*/