//********************************************************************
// G.T. BALLESTEROS
// 04-08-22
//
//BEVERAGE'S STORE BILLING SYSTEM 
//A simple billing system with just limited 5 items to buy. 
//********************************************************************

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string> 

//void functions
void storeHeader();

void itemsList();

void inputItemStatement();

void quantityItemStatement();

void pricePerItemStatement();

void storeFooter();

int main()
{
	//declaring variables
	std::string itemOne, itemTwo, itemThree, itemFour, itemFive;
	std::string cashierName, customersName;
	int quantityOne, quantityTwo, quantityThree, quantityFour, quantityFive;
	int priceOne, priceTwo, priceThree, priceFour, priceFive;
	int discount, customersCash;
	int width = 24;
	int widthR = 36;
	int widthr = 13;

	storeHeader();

	itemsList();
	//pause program
	system("pause");

	//start of the User's input
	inputItemStatement();
	std::cout << "no. 1: ";
	std::cin >> itemOne;
	quantityItemStatement();
	std::cin >> quantityOne;
	pricePerItemStatement();
	std::cin >> priceOne;
	std::cout << std::endl;

	inputItemStatement();
	std::cout << "no. 2: ";
	std::cin >> itemTwo;
	quantityItemStatement();
	std::cin >> quantityTwo;
	pricePerItemStatement();
	std::cin >> priceTwo;
	std::cout << std::endl;

	inputItemStatement();
	std::cout << "no. 3: ";
	std::cin >> itemThree;
	quantityItemStatement();
	std::cin >> quantityThree;
	pricePerItemStatement();
	std::cin >> priceThree;
	std::cout << std::endl;

	inputItemStatement();
	std::cout << "no. 4: ";
	std::cin >> itemFour;
	quantityItemStatement();
	std::cin >> quantityFour;
	pricePerItemStatement();
	std::cin >> priceFour;
	std::cout << std::endl;

	inputItemStatement();
	std::cout << "no. 5: ";
	std::cin >> itemFive;
	quantityItemStatement();
	std::cin >> quantityFive;
	pricePerItemStatement();
	std::cin >> priceFive;
	std::cout << std::endl;

	//end of the User's Input
	std::cout << "*******************************************************" << std::endl;
	system("pause");

	//Formulas
	int sumOfQuantity = quantityOne + quantityTwo + quantityThree + quantityFour + quantityFive;
	int sumsOfPrice_One = quantityOne * priceOne;
	int sumsOfPrice_Two = quantityTwo * priceTwo;
	int sumsOfPrice_Three = quantityThree * priceThree;
	int sumsOfPrice_Four = quantityFour * priceFour;
	int sumsOfPrice_Five = quantityFive * priceFive;
	int sumOfItemsPrice = sumsOfPrice_One + sumsOfPrice_Two + sumsOfPrice_Three + sumsOfPrice_Four + sumsOfPrice_Five;

	//Cashier's Input
	std::cout << "Cashier's Name: ";
	std::cin >> cashierName;
	std::cout << "Customer's Name: ";
	std::cin >> customersName;
        std::cout << std::endl;

	std::cout << "Total Price: " << sumOfItemsPrice << '\n';

	//discount's input
	std::cout << "Enter discount: ";
	std::cin >> discount;
	int totalAmount = sumOfItemsPrice - discount;
	std::cout << "Total Amount: " << totalAmount << '\n';

	//cashier and customer's cash transaction
	std::cout << "Customer's Cash: ";
	std::cin >> customersCash;
	int amountChange = customersCash - totalAmount;
	std::cout << "Change: " << amountChange << std::endl;
	std::cout << "Please wait for the receipt...." << std::endl;

	//end of the Cashier's Input
	std::cout << "*******************************************************";
	std::cout << std::endl;
	//pause program
	system("pause");

	//start of the receipt
	storeHeader(); 

	std::cout << "Item's Name    \t  No. Quantity      \t Item's Price " << '\n';
	std::cout << std::left;
	std::cout << std::setw(width) << itemOne << std::setw(width) << quantityOne << std::setw(width) << priceOne << '\n';
	std::cout << std::setw(width) << itemTwo << std::setw(width) << quantityTwo << std::setw(width) << priceTwo << '\n';
	std::cout << std::setw(width) << itemThree << std::setw(width) << quantityThree << std::setw(width) << priceThree << '\n';
	std::cout << std::setw(width) << itemFour << std::setw(width) << quantityFour << std::setw(width) << priceFour << '\n';
	std::cout << std::setw(width) << itemFive << std::setw(width) << quantityFive << std::setw(width) << priceFive << '\n';
	std::cout << "-------------------------------------------------------" << '\n';
	std::cout << std::setw(width) << "Total" << std::setw(width) << sumOfQuantity << "P" << sumOfItemsPrice << '\n';
	std::cout << std::right;
	std::cout << std::setw(widthR) << "DISCOUNT: " << std::setw(widthr) << "P" << discount << '\n';
	std::cout << std::setw(widthR) << "TOTAL DUE: " << std::setw(widthr) << "P" << totalAmount << '\n';
	std::cout << std::setw(widthR) << "CASH: " << std::setw(widthr) << "P" << customersCash << '\n';
	std::cout << std::setw(widthR) << "CHANGE: " << std::setw(widthr) << "P" << amountChange << '\n';
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Cashier's Name: " << cashierName << '\n';
	std::cout << "Customer's Name: " << customersName << '\n';

	storeFooter();
	//end of the receipt

	return 0;
}

void storeHeader()
{
	std::cout << "-------------------------------------------------------" << '\n';
	std::cout << "               ABC Beverage Grocery Store              " << '\n';
	std::cout << "                   Gwen Incorporated                   " << '\n';
	std::cout << "          1234 Oxford St.Clark Green City, PH          " << '\n';
	std::cout << "-------------------------------------------------------" << '\n';
	std::cout << std::endl;
}

void itemsList()
{
	std::cout << "                  Beverage's Menu                      " << '\n';
	std::cout << " Items                              Price              " << '\n';
	std::cout << std::endl;
	std::cout << " Beer                               P50                " << '\n';
	std::cout << " Wine                               P200               " << '\n';
	std::cout << " Juice                              P20                " << '\n';
	std::cout << " Beer                               P50                " << '\n';
	std::cout << " Rum                                P60                " << '\n';
	std::cout << " Soda                               P15                " << '\n';
	std::cout << " Chocolate                          P35                " << '\n';
	std::cout << " Vodka                              P350               " << '\n';
	std::cout << " Water                              P10                " << '\n';
	std::cout << " Lemonade                           P25                " << '\n';
	std::cout << " Tea                                P105               " << '\n';
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------" << '\n';
	std::cout << std::endl;
}

void inputItemStatement()
{
	std::cout << "Enter the item's name ";
}

void quantityItemStatement()
{
	std::cout << "Enter the quantity of the item: ";
}

void pricePerItemStatement()
{
	std::cout << "Enter the price per item: ";
}

void storeFooter()
{
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------" << '\n';
	std::cout << "                 Thank you for Shopping!               " << '\n';
	std::cout << "           This serves as your sales invoice.          " << '\n';
	std::cout << "                                                       " << '\n';
	std::cout << "         This invoice/receipt shall be valid for       " << '\n';
	std::cout << "           five (5) years from the date of the         " << '\n';
	std::cout << "                     permit to use.                    " << '\n';
	std::cout << "-------------------------------------------------------" << '\n';
	std::cout << std::endl;
	std::cout << "*******************************************************" << '\n';
}

