#include <iostream>

class Fruit {
public:
    Fruit() : totalFruits(0) {}

    void setTotalFruits(int count) {
        totalFruits = count;
    }

    int getTotalFruits() const {
        return totalFruits;
    }

    void displayTotal() const {
        std::cout << "Total fruits in the basket: " << totalFruits << std::endl;
    }

private:
    int totalFruits;
};

class Apples : public Fruit {
public:
    void setApples(int count) {
        applesCount = count;
        setTotalFruits(getTotalFruits() + applesCount);
    }

    int getApples() const {
        return applesCount;
    }

    void displayApples() const {
        std::cout << "Apples in the basket: " << applesCount << std::endl;
    }

private:
    int applesCount;
};

class Mangoes : public Fruit {
public:
    void setMangoes(int count) {
        mangoesCount = count;
        setTotalFruits(getTotalFruits() + mangoesCount);
    }

    int getMangoes() const {
        return mangoesCount;
    }

    void displayMangoes() const {
        std::cout << "Mangoes in the basket: " << mangoesCount << std::endl;
    }

private:
    int mangoesCount;
};

int main() {
    Apples applesBasket;
    Mangoes mangoesBasket;

    char userInput;

    while (true) {
        int apples, mangoes;

        std::cout << "Enter the number of apples (q to quit): ";
        std::cin >> apples;

        if (std::cin.fail()) {
            break;
        }

        applesBasket.setApples(apples);

        std::cout << "Enter the number of mangoes: ";
        std::cin >> mangoes;

        if (std::cin.fail()) {
            break;
        }

        mangoesBasket.setMangoes(mangoes);

        applesBasket.displayApples();
        mangoesBasket.displayMangoes();

        applesBasket.displayTotal();
        mangoesBasket.displayTotal();
    }

    return 0;
}

