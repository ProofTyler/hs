#include "xmath.h"

#define NBITS (48+_DOFF)
#if _DO
#define INIT(w0) 0,0,0,w0
#else
#define INIT(wo) w0,0,0,0
#endif
	
NAN = {{INIT(_DNAN)}}