/*  //!input int,long int,char,float,double precision till 3 after decimal in float, in double upto 9

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    long int k;
    char c;
    float m;
    double h;
    // cout << "enter an integer" << endl;
    // cin >> n;
    // cout << "enter a long integer" << endl;
    // cin >> k;
    // cout << "enter a character" << endl;
    // cin >> c;
    // cout << "enter a float number" << endl;
    // cin >> m;
    // cout << "enter a double number" << endl;
    // cin >> h;
    cin >> n >> k >> c >> m >> h;
    cout << n << endl;
    cout << k << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << m << endl;
    cout << fixed << setprecision(9) << h << endl;
}
*/

/* //* maximun chocolate
//!if we have 15rs and we want to buy chocolates, 
//!each chocolate costs 1rs and 3 wrappers of 
//!chocolate can get u an additional free chocolate 
//! then how many chocolates can u have ??

#include<iostream>
using namespace std;
int main(){
    int money;                             //15
    int price;                             // 1
    int chocolate=money/price;             //15
    int wrapper=chocolate;
    while(wrapper>=3){
        int newchocolate=wrapper/3;
        chocolate+=newchocolate;
        wrapper=wrapper%3+newchocolate;     // 15%3=0+5=5   // wrapper are 5 now! & so on...
    }
    cout<<chocolate<<endl;                  // 22 chocolates
    return 0;
}*/

/* //! swap alternate numbers in array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter total no. of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    for(int i=0;i<n;i+=2){
        if(i+1<n){
        swap(arr[i],arr[i+1]);
    }}
    cout<<"after swapping array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/

/* //!power of 2 leetcode problem

Question was if the given number is a power of 2 or not
num  = 4
num - 1 = 3
binary of 4 = 100
binary of 3 = 011
100 & 011 = 0
only 1 & 1 = 1 rest all 0
if num is power of 2 then num & num-1 = 0

#include<iostream>
using namespace std;
bool isPowerOfTwo(int x){
            if(x>0){
            if ((x & (x-1)) ==0){
                return true;
                }
            else{
                return false;
                }
            }
    }
int main(){
    int x;
    cin>>x;
    if((isPowerOfTwo(x))){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
*/

/* //! calculate ncr
ncr=n!/r!(n-r)!
#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    int num=factorial(n);
    int den=factorial(r)*factorial(n-r);
    int result=num/den;
    return result;
}
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    cout<<"factorial of n is: "<<endl; 
    cout <<factorial(n)<<endl;
    int r;
    cout<<"enter r: "<<endl;
    cin>>r;
    cout<<"factorial of r is: "<<endl; 
    cout <<factorial(r)<<endl;
    cout <<"result of ncr is: "<<ncr(n,r)<<endl;
} */

/* //!unique element in array
#include<iostream>
using namespace std;
int uniquearrayelement(int arr[], int n) {
    for(int i=0; i<n; i++) {
        bool isUnique = true;
        for(int j=0; j<n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            return arr[i];
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter total number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"unique element is: "<< uniquearrayelement(arr,n)<<endl;
} 

//*alernate way
#include<iostream>
using namespace std;
int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<unique(arr,size)<<endl;
}
//* NOTE- this method only applies for even multiple occurences 
//*       of a no. it dosent work on od multiple occurences.

*/

