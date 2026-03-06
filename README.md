# COMPSCI1-Project1
COMPSCI 1 Project 1

# Project 1: Trip Cost Calculator

## Objective
Write a C++ program that calculates the cost of a trip.

Your program should include the following functions:

- `double gas_cost(double miles, double mpg, double gas_price)`
- `double total_trip_cost(double gas, double food, double hotel)`

## Requirements
Your program must:

1. Calculate gas cost using:
   `miles / mpg * gas_price`

2. Calculate total trip cost using:
   `gas + food + hotel`

3. Include a `main()` function that tests your program with these values:
   - miles = 100
   - mpg = 25
   - gas price = 4.0
   - food = 20
   - hotel = 50

4. Print the results clearly.

## Expected Output
Your program should display:

Gas cost: 16
Total trip cost: 86

## How to Run
Compile and run your program with:

```bash
g++ trip.cpp -o trip
./trip
