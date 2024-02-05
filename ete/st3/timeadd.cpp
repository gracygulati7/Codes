/*  #include <iostream>

int main() {
    // Input for the first time instance
    int h1, m1, s1;
    std::cin >> h1 >> m1 >> s1;

    // Input for the second time instance
    int h2, m2, s2;
    std::cin >> h2 >> m2 >> s2;

    // Calculate total seconds
    int totalSeconds = s1 + s2 + m1 * 60 + m2 * 60 + h1 * 3600 + h2 * 3600;

    // Calculate hours, minutes, and seconds from total seconds
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    // Output the result
    std::cout << "Addition of two time: " << hours << " hours, "
              << minutes << " minutes, and " << seconds << " seconds\n";

    return 0;
}    */

#include<iostream>
using namespace std;
int main(){
    int h1,m1,s1;
    cin>>h1>>m1>>s1;
    int h2,m2,s2;
    cin>>h2>>m2>>s2;
    int totalsec=s1+s2+m1*60+m2*60+h1*3600+h2*3600;
    int hour=totalsec/3600;
    int min=(totalsec%3600)/60;
    int sec=totalsec%60;
    cout<<hour<< ":" <<min<< ":" <<sec;
}