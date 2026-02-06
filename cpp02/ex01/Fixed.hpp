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
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;
		~Fixed();
	};
		
std::ostream  &operator << (std::ostream &out, const Fixed &fixed_number);
