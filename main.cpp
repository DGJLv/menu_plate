//main,cpp
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "menuItemType.cpp"
using namespace std;
const int NO_OF_ITEMS = 8;

int main(){
menuItemType menuList[NO_OF_ITEMS];
int choiceList[NO_OF_ITEMS];
int choiceListLength;
ifstream inFile;
cout << fixed << showpoint << setprecision(2);
inFile.open("breakfasts.txt");
if (!inFile)
{
cout << "Cannot open the input file. Program Terminates!"
<< endl;
return 1;
}
menuList[0].getData(inFile, menuList, NO_OF_ITEMS);
menuList[0].showMenu(menuList, NO_OF_ITEMS);
menuList[0].makeSelection(menuList, NO_OF_ITEMS,choiceList, choiceListLength);
menuList[0].printCheck(menuList, NO_OF_ITEMS,choiceList, choiceListLength);

return 0;
}
