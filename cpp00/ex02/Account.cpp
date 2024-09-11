/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:25:32 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 14:58:17 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int 	Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount()
	<< ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount()
	<< ";closed" << std::endl;
	Account::_nbAccounts--;
}

int Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void)
{
	t::_displayTimestamp();
	std::cout << "accounts:" << t::getNbAccounts() << ";total:" << t::getTotalAmount()
	<< ";deposits:" << t::getNbDeposits() << ";withdrawals:" << t::getNbWithdrawals() << std::endl;
}
int Account::checkAmount(void) const
{
	return (this->_amount);
}
void Account::displayStatus(void) const
{
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount()
	<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
void Account::makeDeposit(int deposit)
{
	t::_displayTimestamp();
	t::_totalNbDeposits++;
	this->_nbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount()
	<< ";deposit:" << deposit << ";amount:" << this->checkAmount() + deposit 
	<< ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	t::_totalAmount += deposit; 
}
bool Account::makeWithdrawal(int withdrawal)
{
	t::_displayTimestamp();
	if (withdrawal > t::getTotalAmount() || withdrawal > t::checkAmount())
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount()
		<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_nbWithdrawals++;
		t::_totalNbWithdrawals++;
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount()
		<< ";withdrawal:" << withdrawal << ";amount:" << this->checkAmount() - withdrawal 
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		t::_totalAmount -= withdrawal;
		this->_amount -= withdrawal; 
	}
	return (true);
}
void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(NULL);
    std::tm* _local = std::localtime(&t);

    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", _local);

    std::cout << "[" << buffer << "] ";
}