#include "Account.hpp"
#include <iostream>
#include <iomanip>

#include <time.h>

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0), _accountIndex(Account::_nbAccounts)
{
    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;
    time_t timer;

    timer = time(NULL);
    std::cout << "[" << std::put_time(localtime(&timer), "%Y/%m/%d %H:%m:%S") << "] " << "Index :" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";Created" << std::endl;
    return ;
}

Account::~Account( void )
{
    time_t timer;

    timer = time(NULL);
    std::cout << "[" << std::put_time(localtime(&timer), "%Y/%m/%d %H:%m:%S") << "] " << "Index :" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";Closed" << std::endl;
    return ;
}

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return(Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit )
{
    time_t timer;
    
    timer = time(NULL);
    std::cout << "[" << std::put_time(localtime(&timer), "%Y/%m/%d %H:%m:%S") << "] " << "Index :" << this->_accountIndex;

    std::cout << ";amount:" << this->_amount;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;
    this->_amount += deposit;
    this->_nbDeposits++;
    std::cout << ";Deposit:" << deposit;
    std::cout << ";amount:" << this->_amount << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    time_t timer;

    timer = time(NULL);
    std::cout << "[" << std::put_time(localtime(&timer), "%Y/%m/%d %H:%m:%S") << "] " << "Index :" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    if (this->_amount - withdrawal >= 0)
    {
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals += 1;
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        std::cout << ";Withdrawal:" << withdrawal;
        std::cout << ";amount:" << this->_amount << std::endl;
        return (true);
    }
    else
    {
        std::cout << ";Withdrawal:refused" << std::endl;
        return(false);
    }
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    time_t timer;

    timer = time(NULL);
    std::cout << "[" << std::put_time(localtime(&timer), "%Y/%m/%d %H:%m:%S") << "] " << "Index :" << this->_accountIndex;
    std::cout << ";Amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << ";Active" << std::endl;
}

void	Account::displayAccountsInfos( void ) 
{
    time_t timer;
    struct tm * ptm;

    timer = time(NULL);
    std::cout << "[" << std::put_time(localtime(&timer), "%Y/%m/%d %H:%m:%S")  << "] " << "Accounts :" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount() << ";deposits:" 
    << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals();
    std::cout << ";Active" << std::endl;
    return;
}

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;