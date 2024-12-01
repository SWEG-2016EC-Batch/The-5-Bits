#include <iostream>
#include <iomanip>  // For setting output formatting

using namespace std;

int main() {
    int file_size, transfer_rate = 960;
    int total_seconds, days, hours, minutes, seconds;

    // Display the program purpose
    cout << "File Transfer Time Calculator" << endl;

    // Input the file size in bytes
    cout << "Enter file size in bytes: ";
    cin >> file_size;

    // Calculate total time in seconds
    total_seconds = file_size / transfer_rate;

    // Calculate days, hours, minutes, and seconds
    days = total_seconds / 86400;
    total_seconds %= 86400;  // Remaining seconds after days
    hours = total_seconds / 3600;
    total_seconds %= 3600;   // Remaining seconds after hours
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;  // Remaining seconds after minutes

    // Display the result
    cout << "It will take " << days << " day(s), " 
         << hours << " hour(s), " 
         << minutes << " minute(s), and " 
         << seconds << " second(s) to transfer this file." << endl;

    return 0;
}
