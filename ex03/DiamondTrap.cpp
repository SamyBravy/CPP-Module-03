/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 00:07:12 by samuele           #+#    #+#             */
/*   Updated: 2024/11/28 17:28:16 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : DiamondTrap("")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string str_name) : ClapTrap(str_name + "_clap_name"), ScavTrap(str_name), FragTrap(str_name), _name(str_name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
    std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
    *this = src;
    std::cout << "DiamondTrap " << _name << " copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

DiamondTrap&   DiamondTrap::operator=(const DiamondTrap& src)
{
    ClapTrap::operator=(src);
    ScavTrap::operator=(src);
    FragTrap::operator=(src);
    _name = src._name;
    _hit_points = src._hit_points;
    _energy_points = src._energy_points;
    _attack_damage = src._attack_damage;
    
    return *this;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
	if (_hit_points == 0)
	{
		std::cout << "DiamondTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
    std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}
