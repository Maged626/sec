#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    int TotalofSeconds;

    cout << "Enter the number of seconds: " << endl;
    cin >> TotalofSeconds;

    int Secondsofdays = 24*60*60;
    int Secondsofhours = 60*60;
    int Secondsofminutes = 60;
    int Secondsofseconds = 1;

    int NumberofDays = round ( TotalofSeconds / Secondsofdays );
    int Remainder = TotalofSeconds % Secondsofdays;

    int NumberofHours = round ( Remainder / Secondsofhours );
    Remainder = Remainder % Secondsofhours;

    int NumberofMinutes = round ( Remainder / Secondsofminutes );
    Remainder = Remainder % Secondsofminutes;

    int NumberofSeconds = round ( Remainder / Secondsofseconds );
    Remainder = Remainder;

    cout << "The number of days is: " << NumberofDays << " : " << NumberofHours << " : " << NumberofMinutes << " : " << NumberofSeconds << endl;

    return 0;
}
