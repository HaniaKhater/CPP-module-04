#include <string>
#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class   Weapon {
    private:
        std::string _type;
    public:
        Weapon( std::string type );
        ~Weapon( void );
        const std::string	&getType( void ) const;
        void        setType( std::string type );
};

#endif