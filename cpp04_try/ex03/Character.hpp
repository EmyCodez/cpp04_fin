/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:23:00 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/28 14:26:15 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "Queue.hpp"

class Character : public ICharacter
{
  private:
    std::string _name;
    AMateria *_inventory[4];
    Queue queue;
    
  public:
     Character();
     Character(const std::string &name);
     Character(const Character &copy);
     Character &operator=(const Character &copy);
    ~Character();

    // member functions
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

# endif