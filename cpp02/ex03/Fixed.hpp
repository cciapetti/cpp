#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	fractional_bits = 8;
	
	public:
		Fixed();
		Fixed(const int val);
		Fixed (const float val);
		Fixed(const Fixed &old);

		Fixed &operator = (const Fixed &old);
		bool operator < (const Fixed &fixed_point);
		bool operator > (const Fixed &another);
		bool operator >= (const Fixed &another);
		bool operator <= (const Fixed &another);
		bool operator == (const Fixed &another);
		bool operator != (const Fixed &another);
		Fixed operator + (const Fixed &antoher);
		Fixed operator - (const Fixed &another);
		Fixed operator * (const Fixed &another);
		Fixed operator / (const Fixed &another);
		Fixed &operator ++ ();
		Fixed operator ++ (int);
		Fixed &operator -- ();
		Fixed operator -- (int);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;
		~Fixed();

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

	};

std::ostream  &operator << (std::ostream &out, const Fixed &fixed_number);