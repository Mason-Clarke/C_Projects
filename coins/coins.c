#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculateCoins(int coins)
{
	int totalCoins = coins;  //set working integer to total number of coins 
	int dollars = floor(totalCoins/100);	// calc number of loonies
	totalCoins = totalCoins - (dollars * 100);  //decrement total coins by number of pennies in dollars
	int quarters = floor(totalCoins/25);  //calc number of quarters
	totalCoins = totalCoins - (quarters * 25);  //decrement coin total by number of pennies in quarters
	int dimes = floor(totalCoins/10);  //calc number of dimes
	totalCoins -= (dimes * 10);  //decrement coin total by number of pennies in dimes
	int nickels = floor(totalCoins/5);  //calc number of nickels
	totalCoins -= (nickels * 5);  //decrement coin total by number of pennies in nickels
	int pennies = totalCoins;  //set pennies to remaining number of coins
	printf("%d dollars, %d quarters, %d dimes, %d nickels, %d pennies\n", dollars, quarters, dimes, nickels, pennies);  //print total number of each coin
}
