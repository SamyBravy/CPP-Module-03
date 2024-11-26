/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:02:31 by sdell-er          #+#    #+#             */
/*   Updated: 2024/11/26 18:32:04 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap1("Ciao");
	ClapTrap claptrap2(claptrap1);
	ClapTrap claptrap3("Nonna");
	ClapTrap claptrap4;

	claptrap2.attack("Nonna");
	claptrap3.takeDamage(5);
	claptrap3.beRepaired(4);
	claptrap3.beRepaired(4);
	claptrap3.beRepaired(4);
	claptrap3.beRepaired(4);
	claptrap3.beRepaired(4);
	claptrap3.beRepaired(4);
	claptrap3.beRepaired(4);
	claptrap3.beRepaired(4);
	claptrap3.beRepaired(4);
	claptrap3.beRepaired(4);
	claptrap3.beRepaired(4);

	return 0;
}
