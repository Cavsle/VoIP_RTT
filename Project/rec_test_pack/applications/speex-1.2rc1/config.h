/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Make use of ARM4 assembly optimizations */
#undef ARM4_ASM

/* Make use of ARM5E assembly optimizations */
#undef ARM5E_ASM

/* Make use of Blackfin assembly optimizations */
#undef BFIN_ASM

/* Disable all parts of the API that are using floats */
#undef DISABLE_FLOAT_API

/* Disable VBR and VAD from the codec */
#undef DISABLE_VBR

/* Enable valgrind extra checks */
#undef ENABLE_VALGRIND

/* Symbol visibility prefix */
//#undef EXPORT
#define EXPORT

/* Debug fixed-point implementation */
#undef FIXED_DEBUG

/* Compile as fixed-point */
//#undef FIXED_POINT
#define FIXED_POINT					//使用单精度浮点

/* Compile as floating-point */
#undef FLOATING_POINT

/* Define to 1 if you have the <alloca.h> header file. */
#undef HAVE_ALLOCA_H

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the <getopt.h> header file. */
#undef HAVE_GETOPT_H

/* Define to 1 if you have the `getopt_long' function. */
#undef HAVE_GETOPT_LONG

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the `m' library (-lm). */
#undef HAVE_LIBM

/* Define to 1 if you have the `winmm' library (-lwinmm). */
#undef HAVE_LIBWINMM

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the <sys/audioio.h> header file. */
#undef HAVE_SYS_AUDIOIO_H

/* Define to 1 if you have the <sys/soundcard.h> header file. */
#undef HAVE_SYS_SOUNDCARD_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* The size of `int', as computed by sizeof. */
#undef SIZEOF_INT

/* The size of `long', as computed by sizeof. */
#undef SIZEOF_LONG

/* The size of `short', as computed by sizeof. */
#undef SIZEOF_SHORT

/* Version extra */
//#undef SPEEX_EXTRA_VERSION

/* Version major */
//#undef SPEEX_MAJOR_VERSION

/* Version micro */
//#undef SPEEX_MICRO_VERSION

/* Version minor */
//#undef SPEEX_MINOR_VERSION

/* Complete version string */
//#undef SPEEX_VERSION

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Enable support for TI C55X DSP */
#undef TI_C55X

/* Make use of alloca */
#undef USE_ALLOCA

/* Use FFTW3 for FFT */
#undef USE_GPL_FFTW3

/* Use Intel Math Kernel Library for FFT */
#undef USE_INTEL_MKL

/* Use KISS Fast Fourier Transform */
#undef USE_KISS_FFT

/* Use FFT from OggVorbis */
#undef USE_SMALLFT

/* Use C99 variable-size arrays */
#undef VAR_ARRAYS

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
#undef WORDS_BIGENDIAN

/* Enable SSE support */
#undef _USE_SSE

/* Define to empty if `const' does not conform to ANSI C. */
//#undef const

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#undef inline
#endif

#ifdef  __CC_ARM               /* ARM Compiler */
#define inline __inline
#endif

/* Define to equivalent of C99 restrict keyword, or to nothing if this is not
   supported. Do not define if restrict is supported directly. */
#undef restrict
