
#include <iostream>

int main()
{
    double RISE_LEVEL = 1.5;

    double YEAR_1 = 5;
    double YEAR_2 = 7;
    double YEAR_3 = 10;

    // calculate rise for the 3 year vals
    double rise1 = RISE_LEVEL * YEAR_1;
    double rise2 = RISE_LEVEL * YEAR_2;
    double rise3 = RISE_LEVEL * YEAR_3;

    std::cout << "Ocean rise after 5 years: " << rise1;
    std::cout << "mm\nOcean rise after 7 years: " << rise2;
    std::cout << "mm\nOcean rise after 10 years: " << rise3 << "mm";

    return 0;
}