#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <iomanip>
# include <cstring>
# include <sstream>


class Convertisseur
{
    private:
        std::string convert;

    public:
        Convertisseur();
        Convertisseur(std::string _convert);
        Convertisseur(Convertisseur const &c);
        ~Convertisseur();

        Convertisseur   &operator=(Convertisseur const &c);
        std::string     getConvert() const;
        void            setConvert(std::string);
        int             check_convert();
        void            toInt();
        void            toFloat();
        void            toChar();
        void            toDouble();
};

#endif