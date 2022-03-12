#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <fstream>

#include "Lib/Loader.cpp"
#include "Lib/Util.h"

//#include "Log.h"

//using namespace std

// Note: #include "../" means to get the parent of the file. Use the .. to keep getting the parent of something!

int Books = 0;
std::string Booklist[] = {"Harry Potter And The Sorcerer Stone", "PopularMMOS Book", "Baby book", "The neb book"};
std::string BooksCheckedOut[] = { "Harry Potter And The Sorcerer Stone", "PopularMMOS Book", "Baby book", "The neb book"};

/* Booklist project 
	Make it so whenever someone checks out a book, the book

*/

int main()
{
	for (int i = 0; i < sizeof(Booklist); i++) {
		/*ifstream read("BookListed.txt"); // Opens up a file
		getline(read, Booklist[i]);*/ 
		Books++;
	}

	std::cout << "Books: " << Books << "\n";

	int Options;

	std::cout << "Select an option to begin."<<'\n'<<'\n';

	std::cout << "[1]: Check out a book"<<'\n';

	std::cin >> Options;

	if (Options == 1) {
		std::cout << "Select your book you want to be check out, " << "\n" << "\n";

		for (int BookID = 0; BookID < sizeof(Booklist); BookID++) {
			//std::cout << "Please work" << "\n"; 
			std::cout << "[" << std::to_string(BookID) << "]: " << Booklist[BookID] << "\n";
		}
		std::cout << "\n";
	}

	int BookOption;

	/*BooksCheckedOut.push_back("Next");
	std::cout << std::to_string(Booklist.size()) << "\n"; */
	//Booklist[BookOption]

	std::cin >> BookOption;

	if (BookOption) {
		delete Booklist[BookOption];
		Utils::PrintArrayOfString(Booklist, sizeof(Booklist));

		int BookID;

		std::cout<<"Pick a book to be checked out"<< "\n";

		
	}

	system("Pause");

	return 0;
}