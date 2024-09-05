#include <iostream>
#include <string>

struct Product {
    std::string name;
    double price;
    double weight;
    double width, height, length;

    void input() {
        std::cout << "Enter product name: ";
        std::cin.ignore();
        std::getline(std::cin, name);
        std::cout << "Enter price: ";
        std::cin >> price;
        std::cout << "Enter weight (grams): ";
        std::cin >> weight;
        std::cout << "Enter dimensions (width height length in cm): ";
        std::cin >> width >> height >> length;
    }

    void print() const {
        std::cout << "Product Name: " << name << std::endl;
        std::cout << "Price: " << price << std::endl;
        std::cout << "Weight: " << weight << " grams" << std::endl;
        std::cout << "Dimensions (W x H x L): " << width << " x " << height << " x " << length << " cm" << std::endl;
    }

    double shippingCost() const {
        return 35 + 0.01 * price + (width * height * length / 1000) * 35;
    }
};

int main() {
    Product prod;
    prod.input();
    prod.print();
    std::cout << "Shipping cost: " << prod.shippingCost() << std::endl;

    return 0;
}



