#ifndef BIGINT_H
#define BIGINT_H

#include <string>

using namespace std;

class BigInt
{
public:
	BigInt(unsigned long long n = 0);
	BigInt(const string &);
	BigInt(const BigInt &);

	/* * * * Operator Overloading * * * */

	// assignment
	BigInt& operator=(const BigInt&);
    // assignment: copy and swap idiom (strong exception safety guarantee)
    // BigInt& operator=(BigInt) noexcept;

	//Post/Pre - Incrementation
	BigInt& operator++();
	BigInt operator++(int);
	BigInt& operator--();
	BigInt operator--(int);

	//Comparison operators
	friend bool operator==(const BigInt&, const BigInt&);
	friend bool operator!=(const BigInt&, const BigInt&);

	friend bool operator>(const BigInt&, const BigInt&);
	friend bool operator>=(const BigInt&, const BigInt&);
	friend bool operator<(const BigInt&, const BigInt&);
	friend bool operator<=(const BigInt&, const BigInt&);

    //Addition and Subtraction
	BigInt& operator+=(const BigInt&);
	friend BigInt operator+(const BigInt&, const BigInt&);
    BigInt& operator-=(const BigInt&);
	friend BigInt operator-(const BigInt&, const BigInt&);

	//Multiplication and Division
	BigInt& operator*=(const BigInt&);
	friend BigInt operator*(const BigInt&, const BigInt&);
	BigInt& operator/=(const BigInt&);
	friend BigInt operator/(const BigInt&, const BigInt&);

	//Modulo
	friend BigInt operator%(const BigInt&, const BigInt&);
	BigInt& operator%=(const BigInt&);

	//Power Function
	BigInt& operator^=(const BigInt&);
	friend BigInt operator^(BigInt&, const BigInt&);

	//Read and Write
	friend ostream& operator<<(ostream&, const BigInt&);
	friend istream& operator>>(istream&, BigInt&);

private:
	string digits;

};

#endif