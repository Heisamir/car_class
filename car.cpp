#include <iostream>
#include <string>

class Car {
public:
    // ????????
    std::string brand;
    std::string model;
    int distanceDriven;

    // ?????? ???? ???????? ????? ????????
    Car(std::string b, std::string m, int d) : brand(b), model(m), distanceDriven(d) {}

    // ???? drive ???? ?????? ??????? ??????
    void drive(int distance) {
        distanceDriven += distance;
    }

    // ???? showData ???? ????? ??????? ?????
    void showData() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Distance driven: " << distanceDriven << "km" << std::endl;
    }
};

int main() {
    // ????? ??????? ?? ?????
    std::string brand;
    std::string model;
    int distanceDriven;

    std::cout << "Enter the car brand: ";
    std::getline(std::cin, brand);

    std::cout << "Enter the car model: ";
    std::getline(std::cin, model);

    std::cout << "Enter the initial distance driven (in km): ";
    std::cin >> distanceDriven;

    // ????? ??? Car ?? ??????? ?? ??????? ?????
    Car myCar(brand, model, distanceDriven);

    // ??????? ?? ??????? ???? Car
    myCar.showData();

    int additionalDistance;
    std::cout << "Enter the distance to drive (in km): ";
    std::cin >> additionalDistance;

    myCar.drive(additionalDistance);
    myCar.showData();

    return 0;
}
