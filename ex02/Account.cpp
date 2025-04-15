/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisi <nisi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:37:56 by nisi              #+#    #+#             */
/*   Updated: 2025/04/15 17:33:05 by nisi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>
#include <utility>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account()
{
    _displayTimestamp();

    std::cout << " index:" << _accountIndex
            << ";amount:" << _amount
            << ";deposits:" << _nbDeposits
            << ";withdrawals:" << _nbWithdrawals
            << ";closed" << std::endl;
}

void    Account::_displayTimestamp()
{
    std::time_t now = std::time(0);
    std::tm *tm = std::localtime(&now);

    std::cout << "["
            << (tm->tm_year + 1900)
            << std::setw(2) << std::setfill('0') << tm->tm_mon + 1
            << std::setw(2) << std::setfill('0') << tm->tm_mday
            << "_"
            << std::setw(2) << std::setfill('0') << tm->tm_hour
            << std::setw(2) << std::setfill('0') << tm->tm_min
            << std::setw(2) << std::setfill('0') << tm->tm_sec
            << "] ";
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accont:" << _nbAccounts
            << ";total:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals
            << std::endl;
}

void    Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
            << ";amount:" << _amount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals
            << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
            << ";p_amount:" << _amount
            << ";deposit:" << deposit;

    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;

    std::cout << ";amount:" << _amount
            << ";deposits:" << _nbDeposits
            << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
            << ";p_amount:" << _amount
            << ";withdrawal:";

    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    else
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;

        std::cout << withdrawal
                << ";amount:" << _amount
                << ";withdrawals:" << _nbWithdrawals
                << std::endl;
        return true;
    }
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

int Account::checkAmount(void) const {
    return _amount;
}