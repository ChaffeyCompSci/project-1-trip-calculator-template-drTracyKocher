#include <iostream>
using namespace std;

double gas_cost(double miles, double mpg, double gas_price) {
    double gas = miles / mpg * gas_price;
    return gas;
}

double total_trip_cost(double gas, double food, double hotel) {
    double totalCost = gas + food + hotel;
    return totalCost;
}

int main() {
    double gas = gas_cost(100, 25, 4.0);
    double total = total_trip_cost(gas, 20, 50);

    cout << "Gas cost: " << gas << endl;
    cout << "Total trip cost: " << total << endl;

    return 0;
}
