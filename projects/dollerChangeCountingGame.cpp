/*
A dollar is worth 100 cents. Using only pennies, nickels, dimes, and quarters, 
there are many different ways to make a dollar. ... Answer:
100 pennies, 20 nickels, 10 dimes, or 4 quarters; each = 1 dollar.

Create a change-counting game that gets the user to enter the number of coins required to make exactly one dollar. 
The program should ask the user to enter the number of pennies, nickles, dimes, and quarters. 
If the total value of the coins entered is equal to one dollar, the program should congratulate the user for winning the game. 
  Otherwise, the program should display a message indicating  whether the amount entered was more than or less than one dollar.
*/

#include<iostream>
//#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
	double pennies, nickels, dimes, quarters, total;
	cout<< "    Change for a Dollar Game\n";
	while(1)
	{
	cout << "Enter the number of pennies: ";
	cin >> pennies;
	cout << "Enter the number of nickels: ";
	cin >> nickels;
	cout << "Enter the number of dimes: ";
	cin >> dimes;
	cout << "Enter the number of quarters: ";
	cin >> quarters;
	total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);
	if(total == 1.00)
	{
	cout << "\nCongratulations, You Win!!! You entered exactly one dollar!! \n\n";
	exit(0);
	}
	else
	{
		if(total < 1.00 && total > 0)
		cout << "\nYou entered less than one dollar.  Try again later!! \n\n";
		else if(total > 1.00) 
		cout << "\nYou entered more than one dollar.  Try again later!! \n\n";
		else
		cout << "\n The number of coins have to be greater than 0!! Try again \n\n";
		
	}	
	}
}

