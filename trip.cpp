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
