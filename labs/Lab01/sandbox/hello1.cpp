#include <iostream>
// #include <string>

int main()
{
    std::string userName;

    std::cout << "Hello!" << std::endl;
    std::cout << "What's your name? ";
    std::cin >> userName;
    std::cout << "Hello, " << userName << '.' << std::endl;
    std::cout << "\tIs it ok if I call you " << userName << '?' << std::endl;

    return 0;
}
