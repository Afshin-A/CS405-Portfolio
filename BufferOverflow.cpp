// BufferOverflow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
// used to find maximum allowed size for streams
#include <numeric>

int main()
{
  std::cout << "Buffer Overflow Example" << std::endl;

  // TODO: The user can type more than 20 characters and overflow the buffer, resulting in account_number being replaced -
  //  even though it is a constant and the compiler buffer overflow checks are on.
  //  You need to modify this method to prevent buffer overflow without changing the account_order
  //  varaible, and its position in the declaration. It must always be directly before the variable used for input.

  const std::string account_number = "CharlieBrown42";
  const int max_allowed_chars = 20;
  // In this case, just using a string instead of a character array would solve potential buffer overflows
  char user_input[max_allowed_chars];
  //std::string user_input_str;
  std::cout << "Enter a value: ";
  // Only take appropriate number of chars into user_input
  std::cin >> std::setw(max_allowed_chars) >> user_input;
  // Ignore all the remaining characters until the maimum allowed size for the stream, or the new line character, is reached. Whichever comes first.
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::cout << "You entered: " << user_input << std::endl;
  std::cout << "Account Number = " << account_number << std::endl;
  
  //std::string remaining;
  //std::cin >> remaining;

  char user_input_2[20];
  std::cin >> user_input_2;
  std::cout << user_input_2;


  std::cout << std::numeric_limits<int>::max();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
