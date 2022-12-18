#include <iostream>
double exp::power(double num, int pow)
{
    if (num==0 && pow>0)
        num=0;
    else if (num==0 && pow<=0)
        std::cout << "Не имеет смысла." << std::endl;
    else
    {
        if (pow==0)
            num = 1;
        else if (pow<0)
        {
            double temp = num;
            for (int i=1; i<pow; ++i)
                num *= temp;
            num = 1/num;
        }
        else
        {
            double temp = num;
            for (int i=1; i<pow; ++i)
                num *= temp;
        }
    }
    return num;
}