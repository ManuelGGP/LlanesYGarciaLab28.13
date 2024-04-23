#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
private:
    string itemName;
    int itemPrice;
    int itemQuantity;

public:
    ItemToPurchase();
    
    string GetName() const;
    int GetPrice() const;
    int GetQuantity() const;
    
    void SetName(const string &name);
    void SetPrice(int price);
    void SetQuantity(int quantity);

};

#endif
