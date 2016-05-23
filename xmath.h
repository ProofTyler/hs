/* xmath.h internal header for Microsoft C */
#ifndef _XMATH
#define _XMATH

		/* FLOAT PROPERTIES */
#define _DBIAS	0x3fe
#define _DOFF	4
#define _FBIAS	0x7e
#define _FOFF	7
#define _FRND	1
 #define _D0	3	/* little-endian, small long doubles */
 #define _D1	2
 #define _D2	1
 #define _D3	0
 #define _DLONG	0
 #define _LBIAS	0x3fe
 #define _LOFF	4


typedef const union {
	unsigned short _W[4];
	double _D;
	}_Dconst;
extern _Dconst _Hugeval;
extern _Dconst _Nan;

#define _DNAN (0x8000 | _DMAX << _DOFF | 1 << (_DOFF-1))


		/* IEEE 754 double properties */
#define _DFRAC	((1 << _DOFF) - 1)
#define _DMASK	(0x7fff & ~_DFRAC)
#define _DMAX	((1 << (15 - _DOFF)) - 1)

#define _DSIGN	0x8000
#define DSIGN(x)	(((unsigned short *)&(x))[_D0] & _DSIGN)
#define HUGE_EXP	(int)(_DMAX * 900L / 1000)
#define HUGE_RAD	3.14e30/*3.37e9*/	/* ~pi * 2^30 */
#define SAFE_EXP	(_DMAX >> 1)
		/* IEEE 754 float properties */
#define _FFRAC	((1 << _FOFF) - 1)
#define _FMASK	(0x7fff & ~_FFRAC)
#define _FMAX	((1 << (15 - _FOFF)) - 1)
#define _FSIGN	0x8000
#define FSIGN(x)	(((unsigned short *)&(x))[_F0] & _FSIGN)
#define FHUGE_EXP	(int)(_FMAX * 900L / 1000)
#define FHUGE_RAD	3.37e9	/* ~pi * 2^30 */
#define FSAFE_EXP	(_FMAX >> 1)
 #define _F0	1	/* little-endian order */
 #define _F1	0
		/* IEEE 754 long double properties */
#define _LFRAC	(-1)
#define _LMASK	0x7fff
#define _LMAX	0x7fff
#define _LSIGN	0x8000
#define LSIGN(x)	(((unsigned short *)&(x))[_L0] & _LSIGN)
#define LHUGE_EXP	(int)(_LMAX * 900L / 1000)
#define LHUGE_RAD	3.37e9	/* ~pi * 2^30 */
#define LSAFE_EXP	(_LMAX >> 1)
 #define _L0	4	/* little-endian order */
 #define _L1	3
 #define _L2	2
 #define _L3	1
 #define _L4	0
		/* return values for testing functions */
#define FINITE	_FINITE
#define INF		_INFCODE
#define NAN	(0x8000 | _DMAX << _DOFF | 1 << (_DOFF-1))


		/* double declarations */



#endif /* _XMATH */

/*
 * Copyright (c) 1994 by P.J. Plauger.  ALL RIGHTS RESERVED. 
 * Consult your license regarding permissions and restrictions.
 */
