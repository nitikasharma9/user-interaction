#include <iostream>

int main()
{
    int a , b, c, d, e, f , sum ;
    float avg;
    std::cout << "Enter value of five Integers , separated by space : ";
    std::cin >> a >> b >> c >> d >> e >> f ;
    sum=a+b+c+d+e+f;
    std::cout << "The sum of numbers are :" << sum << std::endl;
    avg=sum/5;
    std::cout << "Average value of the entered numbers are: " << avg << std::endl;

    return 0;
}
