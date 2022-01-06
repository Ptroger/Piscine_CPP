#include "Account.hpp"
#include <iomanip>
#include <iostream>

//INITIALIZATION OF STATIC INSTANCES
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//CREATOR
Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" ;
	std::cout << "amount:" << _amount << ";" ;
	std::cout << "created" << std::endl;
	return ;
}

//DESTRUCTOR
Account::~Account ( void ) {
	_displayTimestamp();
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _totalNbWithdrawals;
	std::cout << " index:" << _accountIndex << ";" ;
	std::cout << "amount:" << _amount << ";" ;
	std::cout << "closed" << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" ;
	std::cout << "p_amount:" << _amount << ";" ;
	std::cout << "deposit:" << deposit << ";";
	if (deposit <= 0)
	{
		std::cout << "deposit:refused" << std::endl;
		return ;
	}
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits+= 1;
	_totalNbDeposits += 1;
	std::cout << "amount:" << _amount << ";" ;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl ;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" ;
	std::cout << "p_amount:" << _amount << ";" ;
	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (0);
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals+= 1;
	_totalNbWithdrawals += 1;
	std::cout << "amount:" << _amount << ";" ;
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl ;
	return (1);
}

int		Account::checkAmount( void ) const{
	return Account::_amount;
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" ;
	std::cout << "amount:" << _amount << ";" ;
	std::cout << "deposits:" << _nbDeposits << ";" ;
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532]" ;
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl ;
	return ;
}