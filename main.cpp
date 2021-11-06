#include<iostream>
int main()
{
int a, b, c;
std::cout << "podaj 3 liczby"<< std::endl;
std::cin >> a >> b >> c;
std::cout << std::endl << (a + b + c) / 3 <<"! ";
return 0;
}
