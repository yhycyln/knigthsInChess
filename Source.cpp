/******************************************
* YAHYA CEYLANI
* 25.06.2018
* The program that finds the maximum number of knights in chess table
* As we know a knight,which is in a black small square in the chess table, can only move to a white small square
*******************************************/


#include <iostream>

#define SIZE 8		// size of table


// 2D array as 8x8
// 0 means the coordinate is empty and there can a knight
// 1 means there is a knight in this coordinate
int table[SIZE][SIZE] = {};

void printTable(){
	std::cout << std::endl;
	std::cout << std::endl;
	for (unsigned int i = 0; i < SIZE; i++){
		for (unsigned int j = 0; j < SIZE; j++)
			std::cout << table[i][j];
		std::cout << std::endl;
	} // end for
} // end function

void addHorse(){
	// add a horse to the given coordinates in the table
	// 1 means there is a knight
	// try all coordinates
	// the code locate first knight to a white square
	// that means all of the knights will be at white squares
	for (unsigned int i = 0; i < SIZE; i++){
		// try to add knights
		for (unsigned int j = 0 + (i % 2); j < SIZE; j += 2){
			
			table[i][j] = 1;
		} // end nested for
	} // end for

} // end function




int main(){
	unsigned int counter = 0;	// initalize counter with zero

	addHorse();


	for (unsigned int i = 0; i < SIZE; i++){
		for (unsigned int j = 0; j < SIZE; j++){
			if (table[i][j] == 1){
				counter++;
				std::cout << "KNIGHT-" << counter << "--->" << (char)(65 + j)  << "-" << i << std::endl;
			} // end if
		} // end nested for
	} // end for


	std::cout << std::endl << "Representation of the chess table (1 means there is a knight)";
	printTable();
	
	return 0;
}