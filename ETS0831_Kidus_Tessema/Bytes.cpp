#include <iostream>

using namespace std;

int main () {
    int size, time_in_sec, time_in_min, time_in_hour, time_in_day;
    cout << "Please enter the size of your file in bytes ";
    cin >> size;
    time_in_sec = (size / 960) ;
    time_in_day = (time_in_sec / 86400) ;
    time_in_sec = (time_in_sec % 86400) ;
    time_in_hour = (time_in_sec / 3600) ;
    time_in_sec = (time_in_sec % 3600) ;
    time_in_min = (time_in_sec / 60) ;
    time_in_sec = (time_in_sec % 60) ;
    cout << "The amount of time that will take to send this file is " << endl;
    cout << time_in_day << " days, " << time_in_hour << " hours, " << time_in_min << " minutes, " << time_in_sec << " seconds, ";
}