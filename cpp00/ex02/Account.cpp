#include "Account.hpp"
#include <iostream>
#include <time.h>  

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts( void )
{
    return t::_nbAccounts;
}
int	Account::getTotalAmount( void )
{
    return _totalAmount;
}
int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    this->_accountIndex = getNbAccounts();
    this->_amount = initial_deposit;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";created";
    std::cout << std::endl;
    _totalAmount += _amount;
    _nbAccounts++;
}
// index:7;amount:8942;closed
Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" <<_accountIndex << ";";
    std::cout << "amount:" <<_amount << ";";
    std::cout << "closed" << std::endl;

}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    t::_totalAmount += deposit;
    t::_nbDeposits++;
    t::_totalNbDeposits++;
    std::cout << "nb_deposits:" << this->_nbDeposits;
    std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << ";";
    this->_amount-=withdrawal;
    std::cout << "amount:" << this->_amount << ";";
    t::_totalAmount -= withdrawal;
    t::_totalNbWithdrawals++;
    t::_nbWithdrawals++;
    std::cout << "nb_withdrawals:" << _nbWithdrawals;
    std::cout <<std::endl;
    return true;
}

int		Account::checkAmount( void ) const
{
    _displayTimestamp();
    std::cout << "amount:" << this->_amount <<std::endl;
    return 0;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";",
    std::cout << "withdrawals:" << getNbWithdrawals();
    std::cout << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t  now;
    struct tm   *time_now;
    time (&now);
    time_now = localtime(&now);
    std::cout << "[" << time_now->tm_year + 1900 << time_now->tm_mon + 1 << time_now->tm_mday;
    std::cout << "_" << time_now->tm_hour << time_now->tm_min << time_now->tm_sec << "] ";

}
