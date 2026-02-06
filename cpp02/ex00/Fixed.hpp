
class Fixed
{
	private:
		int					value;
		static const int	bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &old);
		Fixed &operator = (const Fixed &old);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
	};