////////////////////////////////////////////////////////////////

class RACIONAL
{
	int n;
	int d;

	public : RACIONAL (          ) ;
	public : RACIONAL ( int      ) ;
	public : RACIONAL ( int, int ) ;

	public : bool operator== ( RACIONAL ) const ;
	public : bool operator!= ( RACIONAL ) const ;

	public : RACIONAL operator+ ( RACIONAL ) const ;
	public : RACIONAL operator- ( RACIONAL ) const ;
	public : RACIONAL operator* ( RACIONAL ) const ;
	public : RACIONAL operator/ ( RACIONAL ) const ;

	friend bool operator== ( int, RACIONAL ) ;
	friend bool operator!= ( int, RACIONAL ) ;

	friend RACIONAL operator+ ( int, RACIONAL ) ;
	friend RACIONAL operator- ( int, RACIONAL ) ;
	friend RACIONAL operator* ( int, RACIONAL ) ;
	friend RACIONAL operator/ ( int, RACIONAL ) ;
};

////////////////////////////////////////////////////////////////