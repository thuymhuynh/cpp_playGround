#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;

double MilesToLaps( double userMiles)
{
     return userMiles / 0.25;
}

int main() {
   double userinput;
   cin >> userinput;
   cout << fixed << setprecision(2);
   cout << MilesToLaps(userinput) << endl;
   return 0;
}
