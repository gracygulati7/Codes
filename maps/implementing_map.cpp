//! Implementing map

#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main(){

    // empty map container
    map<int,int>mp;

    // insert elements in random order
    mp.insert(pair<int,int>(1,40));
    mp.insert(pair<int,int>(2,30));
    mp.insert(pair<int,int>(3,20));

    // another way of inserting a value in a map
    mp[4]=10;

    //  printing map mp
    map<int,int>::iterator it;
    cout<<"KEY\tELEMENT\n";
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<"\t"<<it->second<<"\n";
    }

    //! Assigning the elements from one map to another

    map<int,int>mp2(mp.begin(),mp.end());

    // printing map mp2
    cout<<"KEY\tELEMENT\n";
    for(it=mp2.begin();it!=mp2.end();it++){
        cout<<it->first<<"\t"<<it->second<<"\n";
    }
    return 0;
}