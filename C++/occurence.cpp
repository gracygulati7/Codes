#include <iostream>
using namespace std;
int main() {
    int size;
    cin>>size;
    int arr[size] ;
    for( int i=0;i<size;i++){
        cin>>arr[i];}
    cout << "Element counts in the array:" << endl;
    for (int i = 0; i < size; ++i) {
        int count = 1; // Initialize count for the current element
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        // Print the element and its count if not already printed
        bool printed = false;
        for (int k = 0; k < i; ++k) {
            if (arr[i] == arr[k]) {
                printed = true;
                break;
            }
        }
        if (!printed) {
            cout << arr[i] << ": " << count << " times" << endl;
        }
    }
    return 0;
}




