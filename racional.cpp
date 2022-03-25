////////////////////////////////////////////////////////////////

#include "./racional.hpp"

////////////////////////////////////////////////////////////////

RACIONAL::RACIONAL (                ) { n =  0; d =  1; }
RACIONAL::RACIONAL ( int _n         ) { n = _n; d =  1; }
RACIONAL::RACIONAL ( int _n, int _d ) { n = _n; d = _d; }

bool RACIONAL::operator== ( RACIONAL otro ) const { return n * otro.d == d * otro.n ; }
bool RACIONAL::operator!= ( RACIONAL otro ) const { return n * otro.d != d * otro.n ; }

bool operator== ( int a, RACIONAL b ) { return RACIONAL( a ) == b ; }
bool operator!= ( int a, RACIONAL b ) { return RACIONAL( a ) != b ; }

RACIONAL RACIONAL::operator+ ( RACIONAL otro ) const { return RACIONAL( n * otro.d + d * otro.n, d * otro.d ) ; }
RACIONAL RACIONAL::operator- ( RACIONAL otro ) const { return RACIONAL( n * otro.d - d * otro.n, d * otro.d ) ; }
RACIONAL RACIONAL::operator* ( RACIONAL otro ) const { return RACIONAL( n * otro.n,              d * otro.d ) ; }
RACIONAL RACIONAL::operator/ ( RACIONAL otro ) const { return RACIONAL( n * otro.d,              d * otro.n ) ; }

RACIONAL operator+ ( int a, RACIONAL b ) { return RACIONAL( a ) + b ; }
RACIONAL operator- ( int a, RACIONAL b ) { return RACIONAL( a ) - b ; }
RACIONAL operator* ( int a, RACIONAL b ) { return RACIONAL( a ) * b ; }
RACIONAL operator/ ( int a, RACIONAL b ) { return RACIONAL( a ) / b ; }

////////////////////////////////////////////////////////////////