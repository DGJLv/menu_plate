//menuItemType.cpp
#include "menuItemType.h"
inline void menuItemType::getData(ifstream& inFile, menuItemType mList[], int listSize){
    for(int i = 0; i< listSize; i++){
        getline(inFile, mList[i].item);
        inFile >> mList[i].price;
        inFile.ignore();
    }

    }
// part a
inline void menuItemType::showMenu(menuItemType mList[], int listSize){
    std::cout <<"NO." <<setw(18)<< "Item"<<setw(34) <<"Price"<< std::endl;
    cout << "========================================================="<<endl;
for(int i=0; i<listSize; i++){
cout << i+1 <<setw(20)<<mList[i].item <<setw(30)<<"$"<< mList[i].price <<endl;
}cout<<endl;
cout<<endl;}
// part c
inline void menuItemType::printCheck(menuItemType mList[], int listSize, int cList[], int cListLength){   
    double due = 0;
    double tax = 0;
    cout << "\n\nReceipt"<<endl;
    cout << "========================================="<<endl;
    for(int i=0; i<cListLength; i++){
    cout <<mList[cList[i]-1].item <<setw(30-mList[cList[i]-1].item.length())<<"$" << mList[cList[i]-1].price<<endl;
    due += mList[cList[i]-1].price;
    }
    tax = due * 0.05;
    cout << "Tax"<<setw(27)<<"$" << tax <<endl;
    cout << "========================================="<<endl;
    cout << "Amount Due"<<setw(20)<<"$" << due + tax;
    cout << "\nThank you!";
}
inline bool menuItemType::isItemSelected(int cList[], int cListLength, int itemNo){ 
    for(int i=0; i<cListLength; i++){
    if(itemNo == cList[i]){
        cout<<"This item is already selected"<<endl;
    return true;}}
    
    return false;
}
// part b
inline void menuItemType::makeSelection(menuItemType mList[], int listSize,
int cList[], int& cListLength){
    int itemNo = 0;
    do{
        cout<<"Enter item number to buy (press 0 to end)"<<endl;
        cin>>itemNo;
        if(itemNo < 0 || itemNo > listSize)
        cout << "Invalid item, try again"<< endl;
        else if(itemNo != 0)
        if((isItemSelected(cList, cListLength, itemNo)))
        cout << "selected item, choose another" << endl;
        else
        cList[cListLength++] = itemNo;
    }while(itemNo != 0);

}
