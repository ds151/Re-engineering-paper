/* tvm_config.h.  Generated from tvm_config.h.in by configure.  */
#ifndef TVM_CONFIG_H
#define TVM_CONFIG_H

#if !defined (HAVE_INTTYPES_H)
/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1
#endif /* !HAVE_INTTYPES_H */

#if !defined (HAVE_STRING_H)
/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1
#endif /* !HAVE_STRING_H */

/* define for big-endian TVM */
/* #undef TVM_BIG_ENDIAN */

/* define to enable memcpy/memset overriding */
#define TVM_CUSTOM_MEM_OPS 1

/* define to dispatch instructions using switch rather than a jump table */
#define TVM_DISPATCH_SWITCH 1

/* define to alloc dynamic memory allocation */
#define TVM_DYNAMIC_MEMORY 1

/* define to emulate a T2 processor */
/* #undef TVM_EMULATE_T2 */

/* define to emulate a T4 processor */
#define TVM_EMULATE_T4 1

/* define to emulate a T8 processor */
/* #undef TVM_EMULATE_T8 */

/* define for external channel bundles */
/* #undef TVM_EXTERNAL_CHANNEL_BUNDLES */

/* define if C compiler supports maths on double words */
/* #undef TVM_HAVE_TWOWORD */

/* define for little-endian TVM */
#define TVM_LITTLE_ENDIAN 1

/* define to use the AVR memory interface */
/* #undef TVM_MEM_INTF_AVR */

/* define to enable occam-pi support */
#define TVM_OCCAM_PI 1

/* define for Darwin TVM */
/* #undef TVM_OS_DARWIN */

/* define for FreeBSD TVM */
/* #undef TVM_OS_FREEBSD */

/* define for Linux TVM */
/* #undef TVM_OS_LINUX */

/* define for OS independent TVM */
#define TVM_OS_NONE 1

/* define for Solaris TVM */
/* #undef TVM_OS_SOLARIS */

/* define for Windows TVM */
/* #undef TVM_OS_WINDOWS */

/* define to enable profiling */
/* #undef TVM_PROFILING */

/* define to T9000 short ops */
/* #undef TVM_SHORT_OPS */

/* define for type shadowing */
/* #undef TVM_TYPE_SHADOW */

/* define to allow FPU usage */
/* #undef TVM_USE_FPU */

/* define to allow inline keyword usage */
#define TVM_USE_INLINE 1

/* define to use memcpy */
/* #undef TVM_USE_MEMCPY */

/* define to use memset */
/* #undef TVM_USE_MEMSET */

/* define to allow malloc usage */
/* #undef TVM_USE_MALLOC */

/* define to use TLSF dynamic memory allocator */
#define TVM_USE_TLSF 1

/* define emulated word length */
#define TVM_WORD_LENGTH 4

/* define an alias for occam-pi with dynamic memory */
#if defined(TVM_DYNAMIC_MEMORY) && defined(TVM_OCCAM_PI)
#define TVM_DYNAMIC_OCCAM_PI 1
#endif

#endif /* !TVM_CONFIG_H */
