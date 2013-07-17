#include "misc.h"

uint32 makeByteID( uint8 a, uint8 b, uint8 c, uint8 d ) {
	return a | ( b << 8 ) | ( c << 16 ) | ( d << 24 );
}

// =============================================================================
// -----------------------------------------------------------------------------
str binaryConfigName( str ver ) {
	return fmt( "binaries/%1", ver );
}