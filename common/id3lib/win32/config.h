/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */
/*
** This file has been automatically generated by 'acconfig' from aclocal.m4
** Copyright (C) 1988 Eleftherios Gkioulekas <lf@amath.washington.edu>
**  
** This file is free software; as a special exception the author gives
** unlimited permission to copy and/or distribute it, with or without 
** modifications, as long as this notice is preserved.
** 
** This program is distributed in the hope that it will be useful, but
** WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
** implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

/* This is the top section */


/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define as __inline if that's what the C compiler calls it.  */
/* #undef inline */

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* And now the rest of the boys */
/* #undef CXX_HAS_BUGGY_FOR_LOOPS */
/* #undef CXX_HAS_NO_BOOL */

/* config.h defines these preprocesser symbols to be used by id3lib for
 * determining internal versioning information.  The intent is that these
 * macros will be made available int the library via functions or static
 * methods.
 */
/* Defines which version of id3lib is being used (int) */
#define ID3LIB_VERSION (3)
/* Defines which revision of id3lib is being used (int) */
#define ID3LIB_REVISION (0)
/* Defines which patch of id3lib is being used (int) */
#define ID3LIB_PATCH (6)
/* The date of this id3lib release */
#define ID3LIB_DATE ": 1999/12/03 00:47:51 "
/* The identifying string of this id3lib */
#define ID3LIB_FULLNAME "id3lib-3.0.6"

/* Define if you have the ftruncate function.  */
/* #define HAVE_FTRUNCATE 1 */

/* Define if you have the <ctype.h> header file.  */
#define HAVE_CTYPE_H 1

/* Define if you have the <iostream.h> header file.  */
#define HAVE_IOSTREAM_H 1

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H 1

/* Define if you have the <memory.h> header file.  */
#define HAVE_MEMORY_H 1

/* Define if you have the <stdio.h> header file.  */
#define HAVE_STDIO_H 1

/* Define if you have the <unistd.h> header file.  */
/*#define HAVE_UNISTD_H 1 */

/* Define if you have the <wchar.h> header file.  */
#define HAVE_WCHAR_H 1

/* Define if you have the <zlib.h> header file.  */
#define HAVE_ZLIB_H 1

/* Define if you have the z library (-lz).  */
/* #define HAVE_LIBZ 1 */

/* Name of package */
#define PACKAGE "id3lib"

/* Version number of package */
#define VERSION "3.6.0"

/* This is the bottom section */

// This file defines portability work-arounds for various proprietory
// C++ compilers

// Workaround for compilers with buggy for-loop scoping
// That's quite a few compilers actually including recent versions of
// Dec Alpha cxx, HP-UX CC and SGI CC.
// The trivial "if" statement provides the correct scoping to the 
// for loop

#ifdef CXX_HAS_BUGGY_FOR_LOOPS
/* #undef for */
#define for if(1) for
#endif

//
// If the C++ compiler we use doesn't have bool, then
// the following is a near-perfect work-around. 
// You must make sure your code does not depend on "int" and "bool"
// being two different types, in overloading for instance.
//

#ifdef CXX_HAS_NO_BOOL
#define bool int
#define true 1
#define false 0
#endif
   
#define MAXPATHLEN 1024