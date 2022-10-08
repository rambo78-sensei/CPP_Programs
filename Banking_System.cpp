#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
 
 
using namespace std;
 
 
//***************  C U S T O M E R  ***************
 
class Customer {
	string fname, lname;
	long accno;
	float balance;
	static long count;
public:
	Customer() {}
 
	Customer(string fn, string ln, float b) {
		count++;
		fname = fn;
		lname = ln;
		balance = b;
		accno = count;
	}
	long getaccno() {
 
		return accno;
 
	}
	void greetnewcx() {
		cout << "Hello, " << fname << " " << lname << endl;
		cout << "Account Successfully Created. Account Number: " << getaccno();
		cout<<"\nBalance: Rs." << balance;
 
	}
	void deposit(float dep) {
		balance += dep;
		cout << "Successfully deposited\nNew Balance: Rs." << balance;
	}
 
	void greeting() {
		cout << "Hello, " << fname << " " << lname << endl;
	}
 
	void withdraw(float withdraw) {
		balance -= withdraw;
		cout << "Successfully withdrawn\nRemaining Balance: Rs." << balance;
	}
 
	friend ostream& operator<<(ostream& out, Customer& c);
 
};
long Customer::count = 0;
 
 
 
 
//***************  B A N K  ***************
 
class Bank {
	map<long, Customer> accounts;
 
public:
   
   Bank() {
	 
   }
   
   
   
   Customer	open_account(string f, string l, float b);
   void show_allaccounts();
   void show_balance(long acno);
   void deposit(long acno);
   void withdraw(long acno);
   void removeacc(long acno);
 
 
};
 
 
 
//***************  M A I N  ***************
 
 
int main() {
 
 
	Bank b;
	Customer cx;
 
	int choice;
	string fname, lname;
	long accountNumber;
	float balance;
 
	do {
		cout << "\n\n\tSelect one option below ";
		cout << "\n\t1 Open an Account";
		cout << "\n\t2 Balance Enquiry";
		cout << "\n\t3 Deposit";
		cout << "\n\t4 Withdrawal";
		cout << "\n\t5 Close an Account";
		cout << "\n\t6 Show All Accounts";
		cout << "\n\t7 Quit";
		cout << "\nEnter your choice: ";
		cin >> choice;
 
		switch (choice) {
		case 1:
			cout << "\nFirst Name: " << endl;
			cin >> fname;
			cout << "\nLast Name: " << endl;
			cin >> lname;
			cout << "Initial Balance: Rs." << endl;
			cin >> balance;
 
			cx = b.open_account(fname, lname, balance);
			
			break;
 
		case 2:
			cout << "Enter Account Number: ";
			cin >> accountNumber;
			b.show_balance(accountNumber);
			break;
		case 3:
			cout << "Enter Account Number: ";
			cin >> accountNumber;
			b.deposit(accountNumber);
			break;
 
		case 4:
			cout << "Enter Account Number: ";
			cin >> accountNumber;
			b.withdraw(accountNumber);
			break;
 
		case 5:
			cout << "Enter Account Number: ";
			cin >> accountNumber;
			b.removeacc(accountNumber);
			break;
 
		case 6:
			b.show_allaccounts();
			break;
		case 7:
			break;
		default:
			cout << "\nEnter corret choice";
			exit(0);
		 
		}
	} while (choice != 7);
 
 
	
	return 0;
}
 
//***************  F U N C T I O N S  **************
 
Customer Bank::open_account(string f, string l, float b) {
 
	Customer cx(f, l, b);   //calling constructor of Class Customer
	
	accounts.insert(pair<long,Customer>(cx.getaccno(), cx));
	cx.greetnewcx();
	return cx; 
 
};
 
 
void Bank::show_balance(long acno) {
	map<long, Customer> ::iterator itr;
	itr = accounts.find(acno);
 
	cout << itr->second << endl;
 
}
 
void Bank::deposit(long acno) {
	map<long, Customer> ::iterator itr;
	itr = accounts.find(acno);
	auto &cx = itr->second; //changes else a seperate copy will be created for Customer store reference
	cx.greeting();
	cout << "\nEnter the ammount to deposit: Rs.";
	float d;
	cin >> d;
	cx.deposit(d);
 
 
	
 
}
 
void Bank::withdraw(long acno) {
	map<long, Customer> ::iterator itr;
	itr = accounts.find(acno);
	auto &c = itr->second; //changes
	c.greeting();
	cout << "\nEnter the ammount to withdraw: Rs.";
	float d;
	cin >> d;
	c.withdraw(d);
}
 
 
void Bank::removeacc(long acno) {
 
	accounts.erase(acno);
	cout << "Account Deleted.";
 
}
 
void Bank::show_allaccounts() {
	map<long, Customer> ::iterator itr;
	for (itr = accounts.begin(); itr != accounts.end(); itr++) {
		cout <<"Account No. " <<itr->first<< endl;
		cout << itr->second<<endl;
 
	}
 
}
 
 
 
//***************  OPERATOR OVERLOADED F U N C T I O N S  **************
 
ostream& operator<<(ostream& out, Customer& c) {
	out << c.fname << " " << c.lname << endl;
	out << "Balance: Rs." << c.balance << endl << endl;
	return out;
}