/*
 * Copyright (c) 2003 Regents of The University of Michigan.
 * All Rights Reserved.  See COPYRIGHT.
 */

#ifdef HAVE_STRTOLL
#define strtoofft(x,y,z)	((off_t) strtoll((x),(y),(z)))
#define strtotimet(x,y,z)	((time_t) strtoll((x),(y),(z)))
#define PRIofft			"ll"
#define PRItimet		"ll"
#define CASTofft		(long long)
#define CASTtimet		(long long)
#else
#define strtoofft(x,y,z)        ((off_t) strtol((x),(y),(z)))
#define strtotimet(x,y,z)	((time_t) strtol((x),(y),(z)))
#define PRIofft			"ll"
#define PRItimet		"ll"
#define CASTofft		(long)
#define CASTtimet		(long)
#endif

