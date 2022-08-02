#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <time.h>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts() << ";";
	cout << "total:" << getTotalAmount() << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawals:" << getNbWithdrawals() << endl;
}


/*
The constructor for each account.
The _accountIndex is set based on the current number of accounts
*/
Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "created" << endl;
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
}

Account::~Account(void)
{
	_displayTimestamp();
	_nbAccounts -= 1;
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "closed" << endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount << ";";
	cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	cout << "amount:" << _amount << ";";
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	cout << "nb_deposits:" << _nbDeposits << endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount << ";";
	cout << "withdrawal:";
	if (withdrawal <= _amount)
	{
		cout << withdrawal << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		cout << "amount:" << _amount << ";";
		cout << "nb_withdrawals:" << _nbWithdrawals << endl;
		return (true);
	}
	else
	{
		cout << "refused" << endl;
		return (false);
	}
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "deposits:" << _nbDeposits << ";";
	cout << "withdrawals:" << _nbWithdrawals << endl;
}

void Account::_displayTimestamp(void)
{
	time_t current_time = time(NULL);
	struct tm *local_time = localtime(&current_time);

	cout << "[";
	cout << local_time->tm_year + 1900;
	cout << setfill('0') << setw(2) << local_time->tm_mon;
	cout << setfill('0') << setw(2) << local_time->tm_mday;
	cout << "_";
	cout << setfill('0') << setw(2) << local_time->tm_hour;
	cout << setfill('0') << setw(2) << local_time->tm_min;
	cout << setfill('0') << setw(2) << local_time->tm_sec;
	cout << "] ";
}