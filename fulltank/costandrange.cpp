
#include <iostream>
using namespace std;

int main()
{
    double milesPerGallon;
    double gallons;
    double costPerGallon = 3.15;

    cout << "Enter the number of miles per gallon your car gets:" << endl;
    cin >> milesPerGallon;

    cout << "Thanks - now enter the number of gallons of gas your car can hold:" << endl;
    cin >> gallons;

    double totalCost = gallons * costPerGallon;
    double totalMiles = milesPerGallon * gallons;

    cout << endl;
    cout << "The current cost per gallon of gas is $" << costPerGallon << "." << endl;
    cout << "So it would cost you " << totalCost
        << " dollars to fill up from empty," << endl;
    cout << "and you could travel a distance of "
        << totalMiles << " miles." << endl;

    return 0;
}