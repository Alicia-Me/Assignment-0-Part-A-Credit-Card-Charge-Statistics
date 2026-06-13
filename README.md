# Assignment 0 Part-A Credit Card Charge Statistics

Write a program that lets the user enter the total amount of money spent on a credit card for each of 12 months into an array of doubles. The program should have the following functions:

A totalAmount function that takes in an array and size of the array as input arguments and returns the total of the 12 values in the array
An averageAmount function that takes in an array and size of the array as input arguments and returns the average of the 12 values in the array
A largestMonth function that takes in an array and size of the array as input arguments and returns the largest value in the array
A smallestMonth function that takes in an array and size of the array as input arguments and returns the smallest value in the array
The output should look like the following (given the example input):

Here are the credit card totals for each month:

January  : $9.50

February : $19.50

March    : $29.50

April    : $39.50

May      : $0.00

June     : $59.50

July     : $59.50

August   : $100.00

September: $40.75

October  : $30.75

November : $20.75

December : $10.75


The total amount of money spent was $420.00

The average amount of money spent per month was $35.00

The most amount of money spent in a month was $100.00

The least amount of money spent in a month was $0.00


NOTES:  To print out the month names, consider having an array of strings.  For the spacing and the proper number of decimal places, you must use functions from the iomanip library.  Formatting must be followed, as we are dealing with money.

Input Validation: Do not accept negative numbers for monthly credit card charges. If the credit card charge for the month is negative, assume the value to be 0.

