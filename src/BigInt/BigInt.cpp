#include <BigInt/BigInt.h>

#include <iostream>
#include <vector>

using namespace std;

BigInt::BigInt(const string& s)
{
	// TODO
}

BigInt::BigInt(unsigned long long nr)
{
	// TODO
}

BigInt::BigInt(const BigInt& other)
{
	digits = other.digits;
}

BigInt &BigInt::operator=(const BigInt& other)
{
    // Guard self assignment
    if (this == &other)
    {
        return *this;
    }
	// TODO:
    return *this;
}

/*
BigInt& BigInt::operator=(BigInt other) noexcept
{
    // exchange resources between *this and other
    std::swap(digits, other.digits);
    return *this;
}
*/

bool operator==(const BigInt& a, const BigInt& b)
{
	// TODO
    return true;
}

bool operator!=(const BigInt& a,const BigInt& b)
{
	return !(a == b);
}

bool operator<(const BigInt& a, const BigInt& b)
{
	// TODO
    return true;
}

bool operator>(const BigInt& a, const BigInt& b)
{
	return b < a;
}

bool operator>=(const BigInt& a, const BigInt& b)
{
	return !(a < b);
}

bool operator<=(const BigInt& a, const BigInt& b)
{
	return !(a > b);
}

BigInt &BigInt::operator++()
{
	// TODO
    return *this;
}

BigInt BigInt::operator++(int /* tmp */)
{
	BigInt aux;
	aux = *this;
	++(*this);
	return aux;
}

BigInt &BigInt::operator--()
{
	// TODO
    return *this;
}

BigInt BigInt::operator--(int /* tmp */)
{
	BigInt aux;
	aux = *this;
	--(*this);
	return aux;
}

BigInt& BigInt::operator+=(const BigInt& b)
{
	// TODO
    return *this;
}

BigInt operator+(const BigInt& a, const BigInt& b)
{
	BigInt temp;
	temp = a;
	temp += b;
	return temp;
}

BigInt& BigInt::operator-=(const BigInt& b)
{
	// TODO
    return *this;
}

BigInt operator-(const BigInt& a, const BigInt& b)
{
	BigInt temp;
	temp = a;
	temp -= b;
	return temp;
}

BigInt& BigInt::operator*=(const BigInt& b)
{
	// TODO
    return *this;
}

BigInt operator*(const BigInt& a, const BigInt& b)
{
	BigInt temp;
	temp = a;
	temp *= b;
	return temp;
}

BigInt& BigInt::operator/=(const BigInt& b)
{
	// TODO
    return *this;
}

BigInt operator/(const BigInt& a, const BigInt& b)
{
	BigInt temp;
	temp = a;
	temp /= b;
	return temp;
}

BigInt& BigInt::operator%=(const BigInt& b)
{
	// TODO
    return *this;
}

BigInt operator%(const BigInt& a, const BigInt& b)
{
	BigInt temp;
	temp = a;
	temp %= b;
	return temp;
}

BigInt& BigInt::operator^=(const BigInt& b)
{
	// TODO
    return *this;
}

BigInt operator^(const BigInt& a, const BigInt& b)
{
	BigInt temp(a);
	temp ^= b;
	return temp;
}

istream &operator>>(istream& in, BigInt& a)
{
    // TODO
    return in;
}

ostream &operator<<(ostream& out, const BigInt& a)
{
	// TODO
    return out;
}