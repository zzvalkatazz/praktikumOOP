
#include"f1Team.h"
#include<iostream>
#include<fstream>
#include<string>
void saveToFile(const char* const& teambin, const F1Team& collection) {

    std::ofstream file(teambin);

    if (!file.is_open()) return;

    file << "Ime, Familiya, Fakulteten nomer, Imeyl adres" << '\n';

    for (int i = 0; i < 2; i++)
    {
        file << collection.cars[i].name << ","
            << collection.cars[i].year << ","
            << collection.cars[i].wins << ","
            << collection.cars[i].engine_capacity << '\n';
    }
}


int main() {
    F1Car car = {"Ferrari", 2023, 0, 1.6 };
    F1Car car2 = { "Mercedes", 2023, 0, 1.6 };

    std::ofstream o_file("car.bin", std::ios::binary);
    if (!o_file.is_open()) {
        std::cout << "Error opening file!\n";
        return 1;
    }
    o_file.write((char*)&car, sizeof(F1Car));
    o_file.close();
    F1Car kola;
    std::ifstream i_file("car.bin", std::ios::binary);
    if (!i_file.is_open()) {
        std::cout << "Error opening file!\n";
        return 1;
    }
    F1Car car2;
    i_file.read((char*)&car2, sizeof(F1Car));
    i_file.close();
    std::cout << "Name: " << car2.name << "\n"
        << "Year: " << car2.year << "\n"
        << "Wins: " << car2.wins << "\n"
        << "Engine capacity: " << car2.engine_capacity << "\n";

    return 0;