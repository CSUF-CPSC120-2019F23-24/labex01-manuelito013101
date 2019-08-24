// This program calculates the user's pay.

#include <iostream>

int main()
{
  double hours, rate, pay;
std::cout << "Welcome to the Earnings Calculator!" << std::endl;
  // Get the nustd::endl;mber of hours worked.
  std::cout << "How many candy bars did you sell?";
  std::cin >> hours;

  // Get the hourly pay rate.
  std::cout << "How much does the organization earn for each bar sold?";
  std::cin >> rate;

  // Calculate the pay.
  pay = hours * rate;

  // Display the pay.
  std::cout << "Congratulations! You have earned $ for the organization!" << pay << std::endl;

  return 0;
}
