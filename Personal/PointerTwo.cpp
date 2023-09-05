#include <iostream>

struct Pets
{
    std::string name;
    int age;
    std::string isVaccinated;
};

void showRegisters(Pets arr[], int size);
void updateVaccinationStatus(std::string *vaccinated);

int main()
{
    int n, option, size, condition = 0;

    std::cout << "How many registers are needed? ";
    std::cin >> size;

    struct Pets *registers = new struct Pets[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "\nRegister #" << (i + 1) << "\n";
        std::cout << "Pet's name: ";
        std::cin >> (registers + i)->name;
        std::cout << "Pet's age: ";
        std::cin >> (registers + i)->age;
        std::cout << "Is the pet vaccinated? Enter 'yes' or 'no': ";
        std::cin >> (registers + i)->isVaccinated;
    }

    while (condition == 0)
    {
        showRegisters(registers, size);
        std::cout << "Is there a register's vaccination status you want to update?\n1. Yes\n2. No\n";
        std::cin >> option;

        switch (option)
        {
        case 1:
            std::cout << "Select the pet's number.\n";
            std::cin >> n;
            updateVaccinationStatus(&(registers[n - 1].isVaccinated));
            break;
        case 2:
            condition++;
            break;

        default:
            condition++;
            break;
        }
    }
    return 0;
}

void showRegisters(Pets arr[], int size)
{
    std::system("cls");
    for (int i = 0; i < size; i++)
    {
        std::cout << "Pet #" << (i + 1) << std::endl;
        std::cout << "- Name: " << (arr + i)->name << "\tAge: " << (arr + i)->age << "\tVaccinated? " << (arr + i)->isVaccinated << std::endl;
    }
}

void updateVaccinationStatus(std::string *vaccinated)
{
    if (*vaccinated == "yes")
    {
        *vaccinated = "no";
    }
    else if (*vaccinated == "no")
    {
        *vaccinated = "yes";
    }
    else
    {
        *vaccinated = "no";
    }
}