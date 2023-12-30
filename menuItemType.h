//menuItemType.h
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
// class for menuItemType
// load data from file
class menuItemType{
public:
void getData(ifstream& inFile, menuItemType mList[], int listSize);
void showMenu(menuItemType mList[], int listSize);
void printCheck(menuItemType mList[], int listSize,
int cList[], int cListLength);
bool isItemSelected(int cList[], int cListLength, int itemNo);
void makeSelection(menuItemType mList[], int listSize,
int cList[], int& cListLength);
string item;
double price;
};