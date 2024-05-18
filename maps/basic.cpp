//! Traversing through the MAP 

#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){

    // Create a map of strings to integers
    map<string,int>mp;
    // string - key and int - value

    // Insert some values into the map
    mp["one"]=1;
    mp["two"]=2;
    mp["three"]=3;

    // Iterate through the map// Get an iterator pointing to the first element in the map
    map<string,int>::iterator it=mp.begin();

    // Iterate through the map and print the elements
    while(it!=mp.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    //! Size of the map
    cout<<"Size of map: "<<mp.size()<<endl;

    return 0;
}


//* LOGIC:
/*
The order of elements in a std::map is not based on the order of insertion, but rather on the keys being sorted according to their
 natural ordering (or a custom comparator, if provided). In your case, you're using std::map, which sorts its elements based on the keys.
To explain the difference in output:
- The keys "one", "two", and "three" are in lexicographical order.
- When you iterate over the map using m.begin() to m.end(), it traverses the elements in sorted order of keys.
- Hence, the output is "one 1", "three 3", and "two 2" because "one" comes before "three" and "two" based on alphabetical order.
If you want to maintain the order of insertion, you can use another container, such as std::unordered_map (which does not guarantee any particular order of elements) 
or a sequential container like std::vector in combination with std::pair, where you explicitly maintain the order.
*/