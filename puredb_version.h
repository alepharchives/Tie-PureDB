#ifdef VERSION
#define  realVERSION VERSION
#undef VERSION
#endif
#include "config.h"
#ifdef realVERSION
#undef VERSION
#define VERSION realVERSION
#undef realVERSION
#endif
#ifndef PACKAGE_STRING
#define PACKAGE_STRING "puredb ??"
#endif
#define the_puredb_PACKAGE_STRING PACKAGE_STRING
