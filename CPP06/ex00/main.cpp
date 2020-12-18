# include "conversion.hpp"

int         main(int ac, char **av)
{
    std::string     input;
    Convertisseur   nb;

    if (ac != 2)
    {
        std::cout << "Error: 1 argument require" << std::endl;
        return (1);
    }
    input = av[1];
    if (!input.compare(0, 4, "nanf") || !input.compare(0, 4, "inff")
        || !input.compare(0, 5, "+inff") || !input.compare(0, 5, "-inff"))
    {
        if (input.length() == 4)
            input[3] = 0;
        else if (input.length() == 5)
            input[4] = 0;
        else
            goto _ERROR;
    
    }nb.setConvert(input);

    if (!nb.check_convert())
    {
_ERROR:        std::cout << "Error : Argument invalid" << std::endl;
        return (1);
    }
    nb.toChar();
    nb.toInt();
    nb.toDouble();
    nb.toFloat();
    while(1);
    return (0);
}