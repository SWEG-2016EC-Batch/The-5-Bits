#include <iostream>

using namespace std;

int main() {
    long long fileSize = 419430400;
    int rate = 960;
    cout << "Enter file size in bytes: ";
    cin >> fileSize;

    double timeSec = static_cast<double>(fileSize) / rate;  // Ensure floating-point division
    int days = timeSec / (24 * 3600);
    int hours = (timeSec - (days * 24 * 3600)) / 3600;
    int minutes = (timeSec - (days * 24 * 3600) - (hours * 3600)) / 60;
    int seconds = timeSec - (days * 24 * 3600) - (hours * 3600) - (minutes * 60);

    cout << "Time: " << days << "d " << hours << "h " 
         << minutes << "m " << seconds << "s" << endl;
    return 0;
}
