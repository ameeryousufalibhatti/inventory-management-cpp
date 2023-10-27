#include <iostream>
#include <string>
#include <vector>

struct InventoryItem {
    std::string name;
    int quantity;
    double price;
};

void addItemToInventory(std::vector<InventoryItem>& inventory) {
    InventoryItem item;
    std::cout << "Enter the item name: ";
    std::cin >> item.name;
    std::cout << "Enter the quantity: ";
    std::cin >> item.quantity;
    std::cout << "Enter the price: ";
    std::cin >> item.price;

    inventory.push_back(item);
    std::cout << "Item added to inventory.\n";
}

void displayInventory(const std::vector<InventoryItem>& inventory) {
    std::cout << "Inventory Contents:\n";
    for (size_t i = 0; i < inventory.size(); ++i) {
        const InventoryItem& item = inventory[i];
        std::cout << "Item: " << item.name << " | Quantity: " << item.quantity << " | Price: $" << item.price << "\n";
    }
}

int main() {
    std::vector<InventoryItem> inventory;

    // Adding items to inventory
    addItemToInventory(inventory);
    addItemToInventory(inventory);

    // Displaying inventory
    displayInventory(inventory);

    return 0;
}

