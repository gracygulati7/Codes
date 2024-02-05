/*#include <iostream>
#include <vector>
using namespace std;
void sortedmarbles(vector<int>& marbles){
    int left=0,right=marbles.size()-1;
    while(left<=right){
        if(marbles[left]==1 && marbles[right]==0){
            swap(marbles[left],marbles[right]);
            left++;
            right--;
        }
        else{
            if(marbles[left]==0){
                left++;
            }
            if(marbles[right]==1){
                right--;
            }
        }
    }
}
int main() {
    int n;
    cout<<"enter no. of marbles: "<<" ";
    cin>>n;
    vector<int> marbles;
    for(int i=0;i<n;i++){
        int marble;
        cin>>marble;
        marbles.push_back(marble);
    }
    sortedmarbles(marbles);
    for(int i=0;i<marbles.size();i++){
        cout<<marbles[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/

#include<iostream>
#include<vector>
using namespace std;
int sortedmarbles(vector<int>& marbles){
    int left=0, end=marbles.size()-1;
    while(left<=end){
        if(marbles[left]==1 && marbles[end]==0){
            swap(marbles[left],marbles[end]);
            left++;
            end--;
        }
        else{
            if(marbles[left]==0){
                left++;
            }
            if (marbles[end]==1){
                end--;
                }
            }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> marbles;
    for(int i=0;i<n;i++){
        // cin>>arr[i];
        int marble;
        cin>>marble;
        marbles.push_back(marble);
    }
    sortedmarbles(marbles);
    for(int i=0;i<marbles.size();i++){
        cout<<marbles[i]<<" ";
    }
    cout<<endl;
    return 0;
}