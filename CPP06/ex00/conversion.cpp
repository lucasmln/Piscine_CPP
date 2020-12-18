# include "conversion.hpp"

Convertisseur::Convertisseur()
{
    convert = "";
}

Convertisseur::Convertisseur(std::string _convert): convert(_convert)
{
}

Convertisseur::Convertisseur(Convertisseur const &c): convert(c.getConvert())
{
}

Convertisseur       &Convertisseur::operator=(Convertisseur const &c)
{
    convert = c.getConvert();
    return (*this);
}

std::string     Convertisseur::getConvert() const
{
    return (convert);
}

void            Convertisseur::setConvert(std::string _convert)
{
    convert = _convert;
    return ;
}


int             Convertisseur::check_convert()
{
    std::istringstream iss(convert.c_str());
    float      d;

    iss >> d;
    if (strlen(convert.c_str()) == 1)
    {
        d = static_cast<double>(convert[0]);
        return (1);
    }
    if (convert.length() > 1 && isalpha(convert[0]))
    {
        d = atof(convert.c_str());
        if(std::isnan(d) == false && std::isinf(d) == false)
            return (0);
    }
    return (1);
}

void            Convertisseur::toInt()
{
    std::istringstream iss(convert);
    int     i;

    i = 0;
    if (convert.length() == 1 && !isdigit(convert[0]))
        i = convert[0];
    if (i || iss >> i)
        std::cout << "Int : " << i << std::endl;
    else
        std::cout << "Int : Impossible" << std::endl;    
}

void            Convertisseur::toDouble()
{
    std::istringstream iss(convert);
    char        *point;
    double     d;

    d = 0;
    if (convert.length() == 1 && !isdigit(convert[0]))
    {
        d = convert[0];
        strtof("123", &point);
    }
    else
        d = strtof(convert.c_str(), &point);
    if (convert.compare(point))
    {
            std::cout << "Double : " << d;
        if (floor(d) == d && std::isnan(d) == false && std::isinf(d) == false)
            std::cout << ".0";
        std::cout << std::endl;
    }
    else
        std::cout << "double : Impossible" << std::endl; 
}

void            Convertisseur::toFloat()
{
    std::istringstream iss(convert);
    float     d;
    char      *point;

    d = 0;
    if (convert.length() == 1 && !isdigit(convert[0]))
    {
        d = convert[0];
        strtof("123", &point);
    }
    else
        d = strtof(convert.c_str(), &point);
    if (convert.compare(point))
    {
            std::cout << "Float : " << d;
        if (floor(d) == d && std::isnan(d) == false && std::isinf(d) == false)
            std::cout << ".0";
        std::cout << "f" << std::endl;
        
    }
    else
        std::cout << "Float : Impossible" << std::endl; 

}

void                Convertisseur::toChar()
{
    std::istringstream iss(convert);
    char                c;

    if (convert.length() == 1)
    {
_NON_PRINT:        iss >> c;
        std::cout << "Char : ";
        if (isdigit(c))
      std::cout << "Non displayable" << std::endl;
        else
            std::cout << c << std::endl;
    }
    else
    {

        if (isdigit(convert[0]))
        {
            c = (atoi(convert.c_str()));
            if (!isprint(c))
                goto _NON_PRINT;
            std::cout << "Char : " << c << std::endl;
        }
        else
            std::cout << "Char : Impossible" << std::endl;
    }
    
}

Convertisseur::~Convertisseur()
{
}
