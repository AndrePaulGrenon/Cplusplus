#ifndef CHARACTER_H
#define CHARACTER_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : virtual public ICharacter
{
private:
    std::string _name;
    AMateria    *_inventory[4];
public:
    Character(void);
    Character(std::string name);
    Character(Character const &rhs);

    ~Character(void);

    Character &operator=(const Character &rhs);

    std::string const   &getName() const;
    void                equip(AMateria *m);
    void                unequip(int idx);
    void                use(int idx, ICharacter &target);
};

#endif
