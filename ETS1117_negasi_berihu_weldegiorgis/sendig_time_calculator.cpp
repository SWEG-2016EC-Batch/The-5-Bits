/***********************
A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long
it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may
take days.
****************************/
#include <iostream>

using namespace std;

int main () {
    int file_size, sending_time_days, sending_time_hours, sending_time_minutes, sending_time_seconds;
    
    cout << "Sending Time Calculator" << endl;

    cout << "Enter file size in bytes: ";
    cin >> file_size;

    sending_time_seconds = file_size/960;
    sending_time_days = sending_time_seconds/86400;
    sending_time_seconds = sending_time_seconds % 86400;
    sending_time_hours = sending_time_seconds/3600;
    sending_time_seconds = sending_time_seconds % 3600;
    sending_time_minutes = sending_time_seconds/60;
    sending_time_seconds = sending_time_seconds % 60;

    cout << "It will take " << sending_time_days << " day(s), " << sending_time_hours << " hour(s), " << sending_time_minutes << " minute(s), and " << sending_time_seconds << " second(s) to send this file.";
}
