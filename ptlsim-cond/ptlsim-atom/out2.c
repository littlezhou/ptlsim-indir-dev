# 1 "uopimpl.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "uopimpl.cpp"







# 1 "./globals.h" 1
# 12 "./globals.h"
extern "C" {
# 1 "/usr/include/sys/ptrace.h" 1 3 4
# 23 "/usr/include/sys/ptrace.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 363 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 372 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 373 "/usr/include/sys/cdefs.h" 2 3 4
# 364 "/usr/include/features.h" 2 3 4
# 387 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 388 "/usr/include/features.h" 2 3 4
# 24 "/usr/include/sys/ptrace.h" 2 3 4

extern "C" {


enum __ptrace_request
{



  PTRACE_TRACEME = 0,



  PTRACE_PEEKTEXT = 1,



  PTRACE_PEEKDATA = 2,



  PTRACE_PEEKUSER = 3,



  PTRACE_POKETEXT = 4,



  PTRACE_POKEDATA = 5,



  PTRACE_POKEUSER = 6,



  PTRACE_CONT = 7,



  PTRACE_KILL = 8,




  PTRACE_SINGLESTEP = 9,




   PTRACE_GETREGS = 12,




   PTRACE_SETREGS = 13,




   PTRACE_GETFPREGS = 14,




   PTRACE_SETFPREGS = 15,



  PTRACE_ATTACH = 16,



  PTRACE_DETACH = 17,




   PTRACE_GETFPXREGS = 18,




   PTRACE_SETFPXREGS = 19,



  PTRACE_SYSCALL = 24,



  PTRACE_SETOPTIONS = 0x4200,



  PTRACE_GETEVENTMSG = 0x4201,



  PTRACE_GETSIGINFO = 0x4202,



  PTRACE_SETSIGINFO = 0x4203,



  PTRACE_GETREGSET = 0x4204,



  PTRACE_SETREGSET = 0x4205,




  PTRACE_SEIZE = 0x4206,



  PTRACE_INTERRUPT = 0x4207,



  PTRACE_LISTEN = 0x4208
};



enum __ptrace_flags
{
  PTRACE_SEIZE_DEVEL = 0x80000000
};


enum __ptrace_setoptions
{
  PTRACE_O_TRACESYSGOOD = 0x00000001,
  PTRACE_O_TRACEFORK = 0x00000002,
  PTRACE_O_TRACEVFORK = 0x00000004,
  PTRACE_O_TRACECLONE = 0x00000008,
  PTRACE_O_TRACEEXEC = 0x00000010,
  PTRACE_O_TRACEVFORKDONE = 0x00000020,
  PTRACE_O_TRACEEXIT = 0x00000040,
  PTRACE_O_MASK = 0x0000007f
};


enum __ptrace_eventcodes
{
  PTRACE_EVENT_FORK = 1,
  PTRACE_EVENT_VFORK = 2,
  PTRACE_EVENT_CLONE = 3,
  PTRACE_EVENT_EXEC = 4,
  PTRACE_EVENT_VFORK_DONE = 5,
  PTRACE_EVENT_EXIT = 6
};
# 192 "/usr/include/sys/ptrace.h" 3 4
extern long int ptrace (enum __ptrace_request __request, ...) throw ();

}
# 14 "./globals.h" 2
}

typedef long unsigned int size_t;
typedef unsigned long long W64;
typedef signed long long W64s;
typedef unsigned int W32;
typedef signed int W32s;
typedef unsigned short W16;
typedef signed short W16s;
typedef unsigned char byte;
typedef unsigned char W8;
typedef signed char W8s;




typedef W64 Waddr;






# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4
extern "C" {



# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/inf.h" 1 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/nan.h" 1 3 4
# 44 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 26 "/usr/include/bits/mathdef.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/mathdef.h" 2 3 4




typedef float float_t;
typedef double double_t;
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) throw (); extern double __acos (double __x) throw ();

extern double asin (double __x) throw (); extern double __asin (double __x) throw ();

extern double atan (double __x) throw (); extern double __atan (double __x) throw ();

extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();


extern double cos (double __x) throw (); extern double __cos (double __x) throw ();

extern double sin (double __x) throw (); extern double __sin (double __x) throw ();

extern double tan (double __x) throw (); extern double __tan (double __x) throw ();




extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();

extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();

extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();




extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ()
                                                           ;





extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();

extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();

extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();







extern double exp (double __x) throw (); extern double __exp (double __x) throw ();


extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();


extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();


extern double log (double __x) throw (); extern double __log (double __x) throw ();


extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw ()
     __attribute__ ((__nonnull__ (2)));




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();








extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();








extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));


extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));


extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));


extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();




extern int __isinf (double __value) throw () __attribute__ ((__const__));


extern int __finite (double __value) throw () __attribute__ ((__const__));





extern int isinf (double __value) throw () __attribute__ ((__const__));


extern int finite (double __value) throw () __attribute__ ((__const__));


extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();



extern double significand (double __x) throw (); extern double __significand (double __x) throw ();





extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));






extern double nan (__const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnan (double __value) throw () __attribute__ ((__const__));



extern int isnan (double __value) throw () __attribute__ ((__const__));


extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();






extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();






extern double tgamma (double) throw (); extern double __tgamma (double) throw ();





extern double gamma (double) throw (); extern double __gamma (double) throw ();






extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();







extern double rint (double __x) throw (); extern double __rint (double __x) throw ();


extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));



extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();



extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();



extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();




extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();



extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();



extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));



extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();






extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw (); extern double __fmax (double __x, double __y) throw ();


extern double fmin (double __x, double __y) throw (); extern double __fmin (double __x, double __y) throw ();



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();








extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();

extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();

extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();

extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();


extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();

extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();

extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();




extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();

extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();

extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();




extern void
 sincosf
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (float __x, float *__sinx, float *__cosx) throw (); extern void
 __sincosf
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (float __x, float *__sinx, float *__cosx) throw ()
                                                           ;





extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();

extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();

extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();







extern float expf (float __x) throw (); extern float __expf (float __x) throw ();


extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();


extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();


extern float logf (float __x) throw (); extern float __logf (float __x) throw ();


extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw ()
     __attribute__ ((__nonnull__ (2)));




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();








extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();








extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));


extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));


extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));


extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();




extern int __isinff (float __value) throw () __attribute__ ((__const__));


extern int __finitef (float __value) throw () __attribute__ ((__const__));





extern int isinff (float __value) throw () __attribute__ ((__const__));


extern int finitef (float __value) throw () __attribute__ ((__const__));


extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();



extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();





extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));






extern float nanf (__const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanf (float __value) throw () __attribute__ ((__const__));



extern int isnanf (float __value) throw () __attribute__ ((__const__));


extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();






extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();






extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();





extern float gammaf (float) throw (); extern float __gammaf (float) throw ();






extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();







extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();


extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));



extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();



extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();



extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();




extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();



extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();



extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));



extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();






extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw (); extern float __fmaxf (float __x, float __y) throw ();


extern float fminf (float __x, float __y) throw (); extern float __fminf (float __x, float __y) throw ();



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();








extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 95 "/usr/include/math.h" 2 3 4
# 142 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();

extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();

extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();

extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();


extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();

extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();

extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();




extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();

extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();

extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();




extern void
 sincosl
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (long double __x, long double *__sinx, long double *__cosx) throw (); extern void
 __sincosl
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (long double __x, long double *__sinx, long double *__cosx) throw ()
                                                           ;





extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();

extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();

extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();







extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();


extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();


extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();


extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();


extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw ()
     __attribute__ ((__nonnull__ (2)));




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();








extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();








extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));


extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));


extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();




extern int __isinfl (long double __value) throw () __attribute__ ((__const__));


extern int __finitel (long double __value) throw () __attribute__ ((__const__));





extern int isinfl (long double __value) throw () __attribute__ ((__const__));


extern int finitel (long double __value) throw () __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();



extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();





extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));






extern long double nanl (__const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanl (long double __value) throw () __attribute__ ((__const__));



extern int isnanl (long double __value) throw () __attribute__ ((__const__));


extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();






extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();






extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();





extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();






extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();







extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();


extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();



extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();



extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();




extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();



extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();



extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));



extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();






extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw (); extern long double __fmaxl (long double __x, long double __y) throw ();


extern long double fminl (long double __x, long double __y) throw (); extern long double __fminl (long double __x, long double __y) throw ();



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();








extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 143 "/usr/include/math.h" 2 3 4
# 158 "/usr/include/math.h" 3 4
extern int signgam;
# 199 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };
# 292 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 315 "/usr/include/math.h" 3 4
struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 479 "/usr/include/math.h" 3 4
}
# 38 "./globals.h" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/float.h" 1 3 4
# 39 "./globals.h" 2
# 63 "./globals.h"
extern "C" void assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function) __attribute__ ((__noreturn__));


static inline void assert_fail_trap(const char *__assertion, const char *__file, unsigned int __line, const char *__function) {
  asm("ud2a" : : "a" (__assertion), "b" (__file), "c" (__line), "d" (__function));
}
# 77 "./globals.h"
template <typename T> struct limits { static const T min = 0; static const T max = 0; };

template <> struct limits<W8> { static const W8 min = (0); static const W8 max = (0xff); };;
template <> struct limits<W16> { static const W16 min = (0); static const W16 max = (0xffff); };;
template <> struct limits<W32> { static const W32 min = (0); static const W32 max = (0xffffffff); };;
template <> struct limits<W64> { static const W64 min = (0); static const W64 max = (0xffffffffffffffffULL); };;
template <> struct limits<W8s> { static const W8s min = (0x80); static const W8s max = (0x7f); };;
template <> struct limits<W16s> { static const W16s min = (0x8000); static const W16s max = (0x7fff); };;
template <> struct limits<W32s> { static const W32s min = (0x80000000); static const W32s max = (0x7fffffff); };;
template <> struct limits<W64s> { static const W64s min = (0x8000000000000000LL); static const W64s max = (0x7fffffffffffffffLL); };;

template <> struct limits<signed long> { static const signed long min = (0x8000000000000000LL); static const signed long max = (0x7fffffffffffffffLL); };;
template <> struct limits<unsigned long> { static const unsigned long min = (0x0000000000000000LL); static const unsigned long max = (0xffffffffffffffffLL); };;






template <typename T> struct isprimitive_t { static const bool primitive = 0; };

template <> struct isprimitive_t<signed char> { static const bool primitive = 1; };
template <> struct isprimitive_t<unsigned char> { static const bool primitive = 1; };
template <> struct isprimitive_t<signed short> { static const bool primitive = 1; };
template <> struct isprimitive_t<unsigned short> { static const bool primitive = 1; };
template <> struct isprimitive_t<signed int> { static const bool primitive = 1; };
template <> struct isprimitive_t<unsigned int> { static const bool primitive = 1; };
template <> struct isprimitive_t<signed long> { static const bool primitive = 1; };
template <> struct isprimitive_t<unsigned long> { static const bool primitive = 1; };
template <> struct isprimitive_t<signed long long> { static const bool primitive = 1; };
template <> struct isprimitive_t<unsigned long long> { static const bool primitive = 1; };
template <> struct isprimitive_t<float> { static const bool primitive = 1; };
template <> struct isprimitive_t<double> { static const bool primitive = 1; };
template <> struct isprimitive_t<bool> { static const bool primitive = 1; };

template<typename T> struct ispointer_t { static const bool pointer = 0; };
template <typename T> struct ispointer_t<T*> { static const bool pointer = 1; };




template <typename T> static inline T* nullptr() { return (T*)(Waddr)0; }






inline void* operator new(size_t, void* p) { return p; }
inline void* operator new[](size_t, void* p) { return p; }
inline void operator delete(void*, void*) { }
inline void operator delete[](void*, void*) { }
# 137 "./globals.h"
union W32orFloat { W32 w; float f; };
union W64orDouble {
  W64 w;
  double d;
  struct { W32 lo; W32s hi; } hilo;
  struct { W64 mantissa:52, exponent:11, negative:1; } ieee;

  struct { W64 mantissa:51, qnan:1, exponent:11, negative:1; } ieeenan;
};

static inline const float W32toFloat(W32 x) { union W32orFloat c; c.w = x; return c.f; }
static inline const W32 FloatToW32(float x) { union W32orFloat c; c.f = x; return c.w; }
static inline const double W64toDouble(W64 x) { union W64orDouble c; c.w = x; return c.d; }
static inline const W64 DoubleToW64(double x) { union W64orDouble c; c.d = x; return c.w; }





template <typename T> static inline T min(const T& a, const T& b) { typeof (a) _a = a; typeof (b) _b = b; return _a > _b ? _b : _a; }
template <typename T> static inline T max(const T& a, const T& b) { typeof (a) _a = a; typeof (b) _b = b; return _a > _b ? _a : _b; }
template <typename T> static inline T clipto(const T& v, const T& minv, const T& maxv) { return min(max(v, minv), maxv); }
template <typename T> static inline bool inrange(const T& v, const T& minv, const T& maxv) { typeof (v) _v = v; return ((_v >= minv) & (_v <= maxv)); }



static inline bool fits_in_signed_nbit(W64s v, int b) {
  return inrange(v, W64s(-(1ULL<< (b-1))), W64s(+(1ULL << (b-1))-1));
}

static inline bool fits_in_signed_nbit_tagged(W64s v, int b) {
  return inrange(v, W64s(-(1ULL<< (b-1))+1), W64s(+(1ULL << (b-1))-1));
}

static inline bool fits_in_signed_8bit(W64s v) { return fits_in_signed_nbit(v, 8); }
static inline bool fits_in_signed_16bit(W64s v) { return fits_in_signed_nbit(v, 16); }
static inline bool fits_in_signed_32bit(W64s v) { return fits_in_signed_nbit(v, 32); }
# 188 "./globals.h"
static inline W64s signext64(W64s x, const int i) { return (x << (64-i)) >> (64-i); }
static inline W32s signext32(W32s x, const int i) { return (x << (32-i)) >> (32-i); }
static inline W16s signext16(W16s x, const int i) { return (x << (16-i)) >> (16-i); }

static inline W64s bitsext64(W64s x, const int i, const int l) { return signext64((((x) >> (i)) & (((l) == 64) ? (W64)(-1LL) : ((1LL << (l))-1LL))), l); }
static inline W32s bitsext32(W32s x, const int i, const int l) { return signext32((((x) >> (i)) & (((l) == 64) ? (W64)(-1LL) : ((1LL << (l))-1LL))), l); }
static inline W16s bitsext16(W16s x, const int i, const int l) { return signext16((((x) >> (i)) & (((l) == 64) ? (W64)(-1LL) : ((1LL << (l))-1LL))), l); }

typedef byte v16qi __attribute__ ((vector_size(16)));
typedef v16qi vec16b;
typedef W16 v8hi __attribute__ ((vector_size(16)));
typedef v8hi vec8w;
typedef float v4sf __attribute__ ((vector_size(16)));
typedef v4sf vec4f;
typedef W32 v4si __attribute__ ((vector_size(16)));
typedef v4si vec4i;
typedef float v2df __attribute__ ((vector_size(16)));
typedef v2df vec2d;

inline vec16b x86_sse_pcmpeqb(vec16b a, vec16b b) { asm("pcmpeqb %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return a; }
inline vec8w x86_sse_pcmpeqw(vec8w a, vec8w b) { asm("pcmpeqw %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return a; }
inline vec4i x86_sse_pcmpeqd(vec4i a, vec4i b) { asm("pcmpeqd %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return a; }
inline vec16b x86_sse_psubusb(vec16b a, vec16b b) { asm("psubusb %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return a; }
inline vec16b x86_sse_paddusb(vec16b a, vec16b b) { asm("paddusb %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return a; }
inline vec16b x86_sse_pandb(vec16b a, vec16b b) { asm("pand %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return a; }
inline vec8w x86_sse_psubusw(vec8w a, vec8w b) { asm("psubusb %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return a; }
inline vec8w x86_sse_paddusw(vec8w a, vec8w b) { asm("paddsub %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return a; }
inline vec8w x86_sse_pandw(vec8w a, vec8w b) { asm("pand %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return a; }
inline vec16b x86_sse_packsswb(vec8w a, vec8w b) { asm("packsswb %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return (vec16b)a; }
inline W32 x86_sse_pmovmskb(vec16b vec) { W32 mask; asm("pmovmskb %[vec],%[mask]" : [mask] "=r" (mask) : [vec] "x" (vec)); return mask; }
inline W32 x86_sse_pmovmskw(vec8w vec) { return x86_sse_pmovmskb(x86_sse_packsswb(vec, vec)) & 0xff; }
inline vec16b x86_sse_psadbw(vec16b a, vec16b b) { asm("psadbw %[b],%[a]" : [a] "+x" (a) : [b] "xg" (b)); return a; }
template <int i> inline W16 x86_sse_pextrw(vec16b a) { W32 rd; asm("pextrw %[i],%[a],%[rd]" : [rd] "=r" (rd) : [a] "x" (a), [i] "N" (i)); return rd; }

inline vec16b x86_sse_ldvbu(const vec16b* m) { vec16b rd; asm("movdqu %[m],%[rd]" : [rd] "=x" (rd) : [m] "xm" (*m)); return rd; }
inline void x86_sse_stvbu(vec16b* m, const vec16b ra) { asm("movdqu %[ra],%[m]" : [m] "=xm" (*m) : [ra] "x" (ra) : "memory"); }
inline vec8w x86_sse_ldvwu(const vec8w* m) { vec8w rd; asm("movdqu %[m],%[rd]" : [rd] "=x" (rd) : [m] "xm" (*m)); return rd; }
inline void x86_sse_stvwu(vec8w* m, const vec8w ra) { asm("movdqu %[ra],%[m]" : [m] "=xm" (*m) : [ra] "x" (ra) : "memory"); }

inline vec16b x86_sse_zerob() { vec16b rd; asm("pxor %[rd],%[rd]" : [rd] "+x" (rd)); return rd; }
inline vec16b x86_sse_onesb() { vec16b rd; asm("pcmpeqb %[rd],%[rd]" : [rd] "+x" (rd)); return rd; }
inline vec8w x86_sse_zerow() { vec8w rd; asm("pxor %[rd],%[rd]" : [rd] "+x" (rd)); return rd; }
inline vec8w x86_sse_onesw() { vec8w rd; asm("pcmpeqw %[rd],%[rd]" : [rd] "+x" (rd)); return rd; }



extern const byte byte_to_vec16b[256][16];
extern const byte index_bytes_vec16b[16][16];
extern const byte index_bytes_plus1_vec16b[16][16];

inline vec16b x86_sse_dupb(const byte b) {
  return *((vec16b*)&byte_to_vec16b[b]);
}

inline vec8w x86_sse_dupw(const W16 b) {
  W32 w = (b << 16) | b;
  vec8w v;
  W32* wp = (W32*)&v;
  wp[0] = w; wp[1] = w; wp[2] = w; wp[3] = w;
  return v;
}

inline void x86_set_mxcsr(W32 value) { asm volatile("ldmxcsr %[value]" : : [value] "m" (value)); }
inline W32 x86_get_mxcsr() { W32 value; asm volatile("stmxcsr %[value]" : [value] "=m" (value)); return value; }
union MXCSR {
  struct { W32 ie:1, de:1, ze:1, oe:1, ue:1, pe:1, daz:1, im:1, dm:1, zm:1, om:1, um:1, pm:1, rc:2, fz:1; } fields;
  W32 data;

  MXCSR() { }
  MXCSR(W32 v) { data = v; }
  operator W32() const { return data; }
};
enum { MXCSR_ROUND_NEAREST, MXCSR_ROUND_DOWN, MXCSR_ROUND_UP, MXCSR_ROUND_TOWARDS_ZERO };



inline W32 x86_bsf32(W32 b) { W32 r = 0; asm("bsf %[b],%[r]" : [r] "+r" (r) : [b] "r" (b)); return r; }
inline W64 x86_bsf64(W64 b) { W64 r = 0; asm("bsf %[b],%[r]" : [r] "+r" (r) : [b] "r" (b)); return r; }
inline W32 x86_bsr32(W32 b) { W32 r = 0; asm("bsr %[b],%[r]" : [r] "+r" (r) : [b] "r" (b)); return r; }
inline W64 x86_bsr64(W64 b) { W64 r = 0; asm("bsr %[b],%[r]" : [r] "+r" (r) : [b] "r" (b)); return r; }

template <typename T> inline bool x86_bt(T r, T b) { byte c; asm("bt %[b],%[r]; setc %[c]" : [c] "=q" (c) : [r] "r" (r), [b] "r" (b)); return c; }
template <typename T> inline bool x86_btn(T r, T b) { byte c; asm("bt %[b],%[r]; setnc %[c]" : [c] "=r" (c) : [r] "r" (r), [b] "r" (b)); return c; }


template <typename T> inline W64 x86_bts(T r, T b) { asm("bts %[b],%[r]" : [r] "+r" (r) : [b] "r" (b)); return r; }
template <typename T> inline W64 x86_btr(T r, T b) { asm("btr %[b],%[r]" : [r] "+r" (r) : [b] "r" (b)); return r; }
template <typename T> inline W64 x86_btc(T r, T b) { asm("btc %[b],%[r]" : [r] "+r" (r) : [b] "r" (b)); return r; }


template <typename T> inline bool x86_test_bts(T& r, T b) { byte c; asm("bts %[b],%[r]; setc %[c]" : [c] "=r" (c), [r] "+r" (r) : [b] "r" (b)); return c; }
template <typename T> inline bool x86_test_btr(T& r, T b) { byte c; asm("btr %[b],%[r]; setc %[c]" : [c] "=r" (c), [r] "+r" (r) : [b] "r" (b)); return c; }
template <typename T> inline bool x86_test_btc(T& r, T b) { byte c; asm("btc %[b],%[r]; setc %[c]" : [c] "=r" (c), [r] "+r" (r) : [b] "r" (b)); return c; }


template <typename T> inline bool x86_locked_bts(T& r, T b) { byte c; asm volatile("lock bts %[b],%[r]; setc %[c]" : [c] "=r" (c), [r] "+m" (r) : [b] "r" (b) : "memory"); return c; }
template <typename T> inline bool x86_locked_btr(T& r, T b) { byte c; asm volatile("lock btr %[b],%[r]; setc %[c]" : [c] "=r" (c), [r] "+m" (r) : [b] "r" (b) : "memory"); return c; }
template <typename T> inline bool x86_locked_btc(T& r, T b) { byte c; asm volatile("lock btc %[b],%[r]; setc %[c]" : [c] "=r" (c), [r] "+m" (r) : [b] "r" (b) : "memory"); return c; }

template <typename T> inline T bswap(T r) { asm("bswap %[r]" : [r] "+r" (r)); return r; }


template <typename T, int N>
static inline T bitswap(T v) {
  T m =
    (N == 1) ? T(0x5555555555555555ULL) :
    (N == 2) ? T(0x3333333333333333ULL) :
    (N == 4) ? T(0x0f0f0f0f0f0f0f0fULL) : 0;

  return ((v & m) << N) | ((v & (~m)) >> N);
}

template <typename T>
T reversebits(T v) {
  v = bitswap<T, 1>(v);
  v = bitswap<T, 2>(v);
  v = bitswap<T, 4>(v);
  v = bswap(v);
  return v;
}

static inline W16 x86_sse_maskeqb(const vec16b v, byte target) { return x86_sse_pmovmskb(x86_sse_pcmpeqb(v, x86_sse_dupb(target))); }







template <typename T>
static inline T xchg(T& v, T newv) {
 switch (sizeof(T)) {
  case 1: asm volatile("lock xchgb %[newv],%[v]" : [v] "+m" (v), [newv] "+r" (newv) : : "memory"); break;
  case 2: asm volatile("lock xchgw %[newv],%[v]" : [v] "+m" (v), [newv] "+r" (newv) : : "memory"); break;
  case 4: asm volatile("lock xchgl %[newv],%[v]" : [v] "+m" (v), [newv] "+r" (newv) : : "memory"); break;
  case 8: asm volatile("lock xchgq %[newv],%[v]" : [v] "+m" (v), [newv] "+r" (newv) : : "memory"); break;
 }
 return newv;
}

template <typename T>
static inline T xadd(T& v, T incr) {
 switch (sizeof(T)) {
  case 1: asm volatile("lock xaddb %[incr],%[v]" : [v] "+m" (v), [incr] "+r" (incr) : : "memory"); break;
  case 2: asm volatile("lock xaddw %[incr],%[v]" : [v] "+m" (v), [incr] "+r" (incr) : : "memory"); break;
  case 4: asm volatile("lock xaddl %[incr],%[v]" : [v] "+m" (v), [incr] "+r" (incr) : : "memory"); break;
  case 8: asm volatile("lock xaddq %[incr],%[v]" : [v] "+m" (v), [incr] "+r" (incr) : : "memory"); break;
 }
  return incr;
}

template <typename T>
static inline T cmpxchg(T& mem, T newv, T cmpv) {
 switch (sizeof(T)) {
  case 1: asm volatile("lock cmpxchgb %[newv],%[mem]" : [mem] "+m" (mem), [cmpv] "+a" (cmpv), [newv] "+r" (newv) : : "memory"); break;
  case 2: asm volatile("lock cmpxchgw %[newv],%[mem]" : [mem] "+m" (mem), [cmpv] "+a" (cmpv), [newv] "+r" (newv) : : "memory"); break;
  case 4: asm volatile("lock cmpxchgl %[newv],%[mem]" : [mem] "+m" (mem), [cmpv] "+a" (cmpv), [newv] "+r" (newv) : : "memory"); break;
  case 8: asm volatile("lock cmpxchgq %[newv],%[mem]" : [mem] "+m" (mem), [cmpv] "+a" (cmpv), [newv] "+r" (newv) : : "memory"); break;
 }


  return cmpv;
}

static inline void cpu_pause() { asm volatile("pause" : : : "memory"); }

static inline void prefetch(const void* x) { asm volatile("prefetcht0 (%0)" : : "r" (x)); }

static inline void cpuid(int op, W32& eax, W32& ebx, W32& ecx, W32& edx) {
 asm("cpuid" : "=a" (eax), "=b" (ebx), "=c" (ecx), "=d" (edx) : "0" (op));
}

static inline W64 rdtsc() {
  W32 lo, hi;
  asm volatile("rdtsc" : "=a" (lo), "=d" (hi));
  return ((W64)lo) | (((W64)hi) << 32);
}

template <typename T>
static inline T x86_ror(T r, int n) { asm("ror %%cl,%[r]" : [r] "+q" (r) : [n] "c" ((byte)n)); return r; }

template <typename T>
static inline T x86_rol(T r, int n) { asm("rol %%cl,%[r]" : [r] "+q" (r) : [n] "c" ((byte)n)); return r; }
# 383 "./globals.h"
template <typename T>
static inline T dupb(const byte b) { return T(b) * T(0x0101010101010101ULL); }





W64 get_core_freq_hz();

static inline double ticks_to_seconds(W64 ticks) {
  return (double)ticks / (double)get_core_freq_hz();
}

static inline W64 seconds_to_ticks(double seconds) {
  return (W64)(seconds * (double)get_core_freq_hz());
}

template <int n> struct lg { static const int value = 1 + lg<n/2>::value; };
template <> struct lg<1> { static const int value = 0; };


template <int n> struct lg10 { static const int value = 1 + lg10<n/10>::value; };
template <> struct lg10<1> { static const int value = 0; };
template <> struct lg10<0> { static const int value = 0; };


template <int N, typename T>
static inline T foldbits(T a) {
  if (N == 0) return 0;

  const int B = (sizeof(T) * 8);
  const int S = (B / N) + ((B % N) ? 1 : 0);

  T z = 0;
  for (size_t i = 0; i < (S); i++) {
    z ^= a;
    a >>= N;
  }

  return (((z) >> (0)) & (((N) == 64) ? (W64)(-1LL) : ((1LL << (N))-1LL)));
}





template <bool b00, bool b01 = 0, bool b02 = 0, bool b03 = 0,
          bool b04 = 0, bool b05 = 0, bool b06 = 0, bool b07 = 0,
          bool b08 = 0, bool b09 = 0, bool b10 = 0, bool b11 = 0,
          bool b12 = 0, bool b13 = 0, bool b14 = 0, bool b15 = 0,
          bool b16 = 0, bool b17 = 0, bool b18 = 0, bool b19 = 0,
          bool b20 = 0, bool b21 = 0, bool b22 = 0, bool b23 = 0,
          bool b24 = 0, bool b25 = 0, bool b26 = 0, bool b27 = 0,
          bool b28 = 0, bool b29 = 0, bool b30 = 0, bool b31 = 0,
          bool b32 = 0, bool b33 = 0, bool b34 = 0, bool b35 = 0,
          bool b36 = 0, bool b37 = 0, bool b38 = 0, bool b39 = 0,
          bool b40 = 0, bool b41 = 0, bool b42 = 0, bool b43 = 0,
          bool b44 = 0, bool b45 = 0, bool b46 = 0, bool b47 = 0,
          bool b48 = 0, bool b49 = 0, bool b50 = 0, bool b51 = 0,
          bool b52 = 0, bool b53 = 0, bool b54 = 0, bool b55 = 0,
          bool b56 = 0, bool b57 = 0, bool b58 = 0, bool b59 = 0,
          bool b60 = 0, bool b61 = 0, bool b62 = 0, bool b63 = 0>
struct constbits {
  static const W64 value =
  (((W64)b00) << 0) +
  (((W64)b01) << 1) +
  (((W64)b02) << 2) +
  (((W64)b03) << 3) +
  (((W64)b04) << 4) +
  (((W64)b05) << 5) +
  (((W64)b06) << 6) +
  (((W64)b07) << 7) +
  (((W64)b08) << 8) +
  (((W64)b09) << 9) +
  (((W64)b10) << 10) +
  (((W64)b11) << 11) +
  (((W64)b12) << 12) +
  (((W64)b13) << 13) +
  (((W64)b14) << 14) +
  (((W64)b15) << 15) +
  (((W64)b16) << 16) +
  (((W64)b17) << 17) +
  (((W64)b18) << 18) +
  (((W64)b19) << 19) +
  (((W64)b20) << 20) +
  (((W64)b21) << 21) +
  (((W64)b22) << 22) +
  (((W64)b23) << 23) +
  (((W64)b24) << 24) +
  (((W64)b25) << 25) +
  (((W64)b26) << 26) +
  (((W64)b27) << 27) +
  (((W64)b28) << 28) +
  (((W64)b29) << 29) +
  (((W64)b30) << 30) +
  (((W64)b31) << 31) +
  (((W64)b32) << 32) +
  (((W64)b33) << 33) +
  (((W64)b34) << 34) +
  (((W64)b35) << 35) +
  (((W64)b36) << 36) +
  (((W64)b37) << 37) +
  (((W64)b38) << 38) +
  (((W64)b39) << 39) +
  (((W64)b40) << 40) +
  (((W64)b41) << 41) +
  (((W64)b42) << 42) +
  (((W64)b43) << 43) +
  (((W64)b44) << 44) +
  (((W64)b45) << 45) +
  (((W64)b46) << 46) +
  (((W64)b47) << 47) +
  (((W64)b48) << 48) +
  (((W64)b49) << 49) +
  (((W64)b50) << 50) +
  (((W64)b51) << 51) +
  (((W64)b52) << 52) +
  (((W64)b53) << 53) +
  (((W64)b54) << 54) +
  (((W64)b55) << 55) +
  (((W64)b56) << 56) +
  (((W64)b57) << 57) +
  (((W64)b58) << 58) +
  (((W64)b59) << 59) +
  (((W64)b60) << 60) +
  (((W64)b61) << 61) +
  (((W64)b62) << 62) +
  (((W64)b63) << 63);

  operator W64() const { return value; }
};

extern "C" {
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4
extern "C" {
# 203 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 204 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/environments.h" 2 3 4
# 208 "/usr/include/unistd.h" 2 3 4
# 218 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 219 "/usr/include/unistd.h" 2 3 4


typedef __ssize_t ssize_t;





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 228 "/usr/include/unistd.h" 2 3 4





typedef __gid_t gid_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __useconds_t useconds_t;




typedef __pid_t pid_t;






typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
# 335 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 346 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 377 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
# 405 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) throw () ;




extern int pipe2 (int __pipedes[2], int __flags) throw () ;
# 433 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 445 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();






extern int usleep (__useconds_t __useconds);
# 470 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) throw () ;
# 512 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () ;





extern char *get_current_dir_name (void) throw ();







extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) throw () ;


extern int dup2 (int __fd, int __fd2) throw ();




extern int dup3 (int __fd, int __fd2, int __flags) throw ();



extern char **__environ;

extern char **environ;





extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));




extern int execv (__const char *__path, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (__const char *__file, char *__const __argv[],
      char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) throw () ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 611 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw ();



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();




extern __pid_t getpgrp (void) throw ();
# 647 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 673 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();
# 690 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw () ;



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw ();




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw ();




extern int seteuid (__uid_t __uid) throw ();






extern int setgid (__gid_t __gid) throw ();




extern int setregid (__gid_t __rgid, __gid_t __egid) throw ();




extern int setegid (__gid_t __gid) throw ();





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw ();



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw ();






extern __pid_t fork (void) throw ();







extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));
# 894 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 50 "/usr/include/getopt.h" 3 4
extern "C" {
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 187 "/usr/include/getopt.h" 3 4
}
# 895 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) throw () ;





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) throw ();


extern int revoke (__const char *__file) throw () __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () ;






extern int chroot (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 980 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern int syncfs (int __fd) throw ();






extern long int gethostid (void);


extern void sync (void) throw ();





extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();
# 1018 "/usr/include/unistd.h" 3 4
extern int truncate (__const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1030 "/usr/include/unistd.h" 3 4
extern int truncate64 (__const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1040 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) throw () ;
# 1050 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () ;
# 1061 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () ;





extern void *sbrk (intptr_t __delta) throw ();
# 1082 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1105 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1115 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1136 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (__const char *__key, __const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__block, int __edflag) throw () __attribute__ ((__nonnull__ (1)));






extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) throw ();
# 1174 "/usr/include/unistd.h" 3 4
}
# 517 "./globals.h" 2
# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;
# 71 "/usr/include/sys/types.h" 3 4
typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 105 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;
# 116 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4







typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 23 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/select.h" 2 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 31 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 65 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 97 "/usr/include/sys/select.h" 3 4
extern "C" {
# 107 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 119 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 132 "/usr/include/sys/select.h" 3 4
}
# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));
# 64 "/usr/include/sys/sysmacros.h" 3 4
}
# 224 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 263 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 272 "/usr/include/sys/types.h" 2 3 4


}
# 518 "./globals.h" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 30 "/usr/include/ctype.h" 3 4
extern "C" {
# 48 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const));
# 106 "/usr/include/ctype.h" 3 4






extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();



extern int tolower (int __c) throw ();


extern int toupper (int __c) throw ();








extern int isblank (int) throw ();






extern int isctype (int __c, int __mask) throw ();






extern int isascii (int __c) throw ();



extern int toascii (int __c) throw ();



extern int _toupper (int) throw ();
extern int _tolower (int) throw ();
# 259 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 260 "/usr/include/ctype.h" 2 3 4
# 273 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();



extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();


extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
# 349 "/usr/include/ctype.h" 3 4
}
# 519 "./globals.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 67 "/usr/include/bits/waitstatus.h" 3 4
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 44 "/usr/include/stdlib.h" 2 3 4
# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

# 240 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;
# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
# 327 "/usr/include/stdlib.h" 3 4
extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));






extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));









extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));







extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;

# 808 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) throw () ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) throw () ;


extern int wctomb (char *__s, wchar_t __wchar) throw () ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (__const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (__const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4
}
# 520 "./globals.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 172 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 182 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 205 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 273 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 321 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 330 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 366 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 462 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 492 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 554 "/usr/include/libio.h" 3 4
}
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 109 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 165 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 166 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) throw ();

extern int rename (__const char *__old, __const char *__new) throw ();




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) throw ();








extern FILE *tmpfile (void) ;
# 208 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 230 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 255 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 265 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 298 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
# 420 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) throw ();
# 471 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 530 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 558 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 569 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 602 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 648 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 664 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

# 725 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
# 736 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 772 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 791 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 814 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 853 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 942 "/usr/include/stdio.h" 3 4
}
# 521 "./globals.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const void *memchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 93 "/usr/include/string.h" 3 4
}










extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *rawmemchr (__const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));

# 165 "/usr/include/string.h" 3 4
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strchr (__const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 233 "/usr/include/string.h" 3 4
}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strrchr (__const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 260 "/usr/include/string.h" 3 4
}










extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *strchrnul (__const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strpbrk (__const char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 312 "/usr/include/string.h" 3 4
}






extern "C++"
{
extern char *strstr (char *__haystack, __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strstr (__const char *__haystack,
        __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 340 "/usr/include/string.h" 3 4
}







extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" __const char *strcasestr (__const char *__haystack,
           __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 382 "/usr/include/string.h" 3 4
extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();

# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *index (__const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 487 "/usr/include/string.h" 3 4
}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *rindex (__const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 515 "/usr/include/string.h" 3 4
}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *basename (__const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 646 "/usr/include/string.h" 3 4
}
# 522 "./globals.h" 2
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4
extern "C" {



# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 47 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) throw () __attribute__ ((__const__));
# 37 "/usr/include/errno.h" 2 3 4
# 55 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;



}
# 69 "/usr/include/errno.h" 3 4
typedef int error_t;
# 523 "./globals.h" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 30 "/usr/include/fcntl.h" 3 4
extern "C" {



# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 26 "/usr/include/bits/fcntl.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/fcntl.h" 2 3 4

# 1 "/usr/include/bits/uio.h" 1 3 4
# 44 "/usr/include/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 29 "/usr/include/bits/fcntl.h" 2 3 4
# 168 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };




enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 254 "/usr/include/bits/fcntl.h" 3 4
struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};





extern "C" {




extern ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    throw ();






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern ssize_t vmsplice (int __fdout, const struct iovec *__iov,
    size_t __count, unsigned int __flags);





extern ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
         __off64_t *__offout, size_t __len,
         unsigned int __flags);





extern ssize_t tee (int __fdin, int __fdout, size_t __len,
      unsigned int __flags);






extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
# 321 "/usr/include/bits/fcntl.h" 3 4
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) throw ();





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);



}
# 35 "/usr/include/fcntl.h" 2 3 4





# 1 "/usr/include/time.h" 1 3 4
# 41 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/bits/stat.h" 1 3 4
# 46 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/bits/stat.h" 3 4
    long int __unused[3];
# 115 "/usr/include/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 167 "/usr/include/bits/stat.h" 3 4
    long int __unused[3];



  };
# 42 "/usr/include/fcntl.h" 2 3 4
# 125 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 134 "/usr/include/fcntl.h" 3 4
extern int open (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 144 "/usr/include/fcntl.h" 3 4
extern int open64 (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 158 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, __const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 169 "/usr/include/fcntl.h" 3 4
extern int openat64 (int __fd, __const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 180 "/usr/include/fcntl.h" 3 4
extern int creat (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 190 "/usr/include/fcntl.h" 3 4
extern int creat64 (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 226 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off_t __offset, __off_t __len,
     int __advise) throw ();
# 238 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64 (int __fd, __off64_t __offset, __off64_t __len,
       int __advise) throw ();
# 248 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off_t __offset, __off_t __len);
# 259 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64 (int __fd, __off64_t __offset, __off64_t __len);
# 270 "/usr/include/fcntl.h" 3 4
}
# 524 "./globals.h" 2

# 1 "/usr/include/sys/mman.h" 1 3 4
# 26 "/usr/include/sys/mman.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stddef.h" 1 3 4
# 27 "/usr/include/sys/mman.h" 2 3 4
# 42 "/usr/include/sys/mman.h" 3 4
# 1 "/usr/include/bits/mman.h" 1 3 4
# 43 "/usr/include/sys/mman.h" 2 3 4




extern "C" {
# 58 "/usr/include/sys/mman.h" 3 4
extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) throw ();
# 71 "/usr/include/sys/mman.h" 3 4
extern void *mmap64 (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off64_t __offset) throw ();




extern int munmap (void *__addr, size_t __len) throw ();




extern int mprotect (void *__addr, size_t __len, int __prot) throw ();







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) throw ();



extern int posix_madvise (void *__addr, size_t __len, int __advice) throw ();




extern int mlock (__const void *__addr, size_t __len) throw ();


extern int munlock (__const void *__addr, size_t __len) throw ();




extern int mlockall (int __flags) throw ();



extern int munlockall (void) throw ();







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     throw ();
# 134 "/usr/include/sys/mman.h" 3 4
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
       int __flags, ...) throw ();



extern int remap_file_pages (void *__start, size_t __size, int __prot,
        size_t __pgoff, int __flags) throw ();




extern int shm_open (__const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (__const char *__name);

}
# 526 "./globals.h" 2
# 1 "/usr/include/sys/utsname.h" 1 3 4
# 28 "/usr/include/sys/utsname.h" 3 4
extern "C" {

# 1 "/usr/include/bits/utsname.h" 1 3 4
# 31 "/usr/include/sys/utsname.h" 2 3 4
# 49 "/usr/include/sys/utsname.h" 3 4
struct utsname
  {

    char sysname[65];


    char nodename[65];


    char release[65];

    char version[65];


    char machine[65];




    char domainname[65];




  };
# 82 "/usr/include/sys/utsname.h" 3 4
extern int uname (struct utsname *__name) throw ();


}
# 527 "./globals.h" 2

# 1 "/usr/include/sys/signal.h" 1 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 31 "/usr/include/signal.h" 3 4
extern "C" {

# 1 "/usr/include/bits/sigset.h" 1 3 4
# 104 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember (__const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 34 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 58 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/signum.h" 1 3 4
# 59 "/usr/include/signal.h" 2 3 4
# 76 "/usr/include/signal.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 77 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 51 "/usr/include/bits/siginfo.h" 3 4
typedef struct siginfo
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;
      } _sifields;
  } siginfo_t;
# 129 "/usr/include/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};



enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR

};


enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};


enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 273 "/usr/include/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     void *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 80 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     throw ();

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     throw ();







extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     throw ();
# 113 "/usr/include/signal.h" 3 4





extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     throw ();






extern int kill (__pid_t __pid, int __sig) throw ();






extern int killpg (__pid_t __pgrp, int __sig) throw ();




extern int raise (int __sig) throw ();




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     throw ();
extern int gsignal (int __sig) throw ();




extern void psignal (int __sig, __const char *__s);




extern void psiginfo (__const siginfo_t *__pinfo, __const char *__s);
# 168 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);
# 177 "/usr/include/signal.h" 3 4
extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
# 196 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) throw () __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) throw () __attribute__ ((__deprecated__));


extern int siggetmask (void) throw () __attribute__ ((__deprecated__));
# 211 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) throw () __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) throw () __attribute__ ((__nonnull__ (1)));


extern int sigismember (__const sigset_t *__set, int __signo)
     throw () __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (__const sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, __const sigset_t *__left,
        __const sigset_t *__right) throw () __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, __const sigset_t *__left,
       __const sigset_t *__right) throw () __attribute__ ((__nonnull__ (1, 2, 3)));




# 1 "/usr/include/bits/sigaction.h" 1 3 4
# 25 "/usr/include/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 253 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, __const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) throw ();






extern int sigsuspend (__const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, __const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) throw ();


extern int sigpending (sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));






extern int sigwait (__const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (__const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (__const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    __const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, __const union sigval __val)
     throw ();
# 310 "/usr/include/signal.h" 3 4
extern __const char *__const _sys_siglist[65];
extern __const char *__const sys_siglist[65];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;

  };
# 334 "/usr/include/signal.h" 3 4
extern int sigvec (int __sig, __const struct sigvec *__vec,
     struct sigvec *__ovec) throw ();



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 26 "/usr/include/bits/sigcontext.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/sigcontext.h" 2 3 4

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 109 "/usr/include/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext
{
  unsigned long r8;
  unsigned long r9;
  unsigned long r10;
  unsigned long r11;
  unsigned long r12;
  unsigned long r13;
  unsigned long r14;
  unsigned long r15;
  unsigned long rdi;
  unsigned long rsi;
  unsigned long rbp;
  unsigned long rbx;
  unsigned long rdx;
  unsigned long rax;
  unsigned long rcx;
  unsigned long rsp;
  unsigned long rip;
  unsigned long eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  unsigned long err;
  unsigned long trapno;
  unsigned long oldmask;
  unsigned long cr2;
  struct _fpstate * fpstate;
  unsigned long __reserved1 [8];
};
# 340 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) throw ();






# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stddef.h" 1 3 4
# 350 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) throw ();

# 1 "/usr/include/bits/sigstack.h" 1 3 4
# 26 "/usr/include/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 50 "/usr/include/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 357 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 23 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 24 "/usr/include/sys/ucontext.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 25 "/usr/include/sys/ucontext.h" 2 3 4
# 33 "/usr/include/sys/ucontext.h" 3 4
typedef long int greg_t;





typedef greg_t gregset_t[23];



enum
{
  REG_R8 = 0,

  REG_R9,

  REG_R10,

  REG_R11,

  REG_R12,

  REG_R13,

  REG_R14,

  REG_R15,

  REG_RDI,

  REG_RSI,

  REG_RBP,

  REG_RBX,

  REG_RDX,

  REG_RAX,

  REG_RCX,

  REG_RSP,

  REG_RIP,

  REG_EFL,

  REG_CSGSFS,

  REG_ERR,

  REG_TRAPNO,

  REG_OLDMASK,

  REG_CR2

};


struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    unsigned long __reserved1 [8];
} mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 360 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     throw () __attribute__ ((__deprecated__));



extern int sigaltstack (__const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) throw ();







extern int sighold (int __sig) throw ();


extern int sigrelse (int __sig) throw ();


extern int sigignore (int __sig) throw ();


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) throw ();






# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 31 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       __const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)throw ();


extern int pthread_kill (pthread_t __threadid, int __signo) throw ();



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) throw ();
# 396 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) throw ();

extern int __libc_current_sigrtmax (void) throw ();



}
# 1 "/usr/include/sys/signal.h" 2 3 4
# 529 "./globals.h" 2
# 1 "/usr/include/sys/resource.h" 1 3 4
# 25 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/bits/resource.h" 1 3 4
# 33 "/usr/include/bits/resource.h" 3 4
enum __rlimit_resource
{

  RLIMIT_CPU = 0,



  RLIMIT_FSIZE = 1,



  RLIMIT_DATA = 2,



  RLIMIT_STACK = 3,



  RLIMIT_CORE = 4,






  __RLIMIT_RSS = 5,



  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,




  RLIMIT_AS = 9,



  __RLIMIT_NPROC = 6,



  __RLIMIT_MEMLOCK = 8,



  __RLIMIT_LOCKS = 10,



  __RLIMIT_SIGPENDING = 11,



  __RLIMIT_MSGQUEUE = 12,





  __RLIMIT_NICE = 13,




  __RLIMIT_RTPRIO = 14,





  __RLIMIT_RTTIME = 15,


  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS


};
# 133 "/usr/include/bits/resource.h" 3 4
typedef __rlim_t rlim_t;




typedef __rlim64_t rlim64_t;


struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };


struct rlimit64
  {

    rlim64_t rlim_cur;

    rlim64_t rlim_max;
 };



enum __rusage_who
{

  RUSAGE_SELF = 0,



  RUSAGE_CHILDREN = -1



  ,

  RUSAGE_THREAD = 1




};


# 1 "/usr/include/bits/time.h" 1 3 4
# 182 "/usr/include/bits/resource.h" 2 3 4


struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

    long int ru_maxrss;


    long int ru_ixrss;

    long int ru_idrss;

    long int ru_isrss;


    long int ru_minflt;

    long int ru_majflt;

    long int ru_nswap;


    long int ru_inblock;

    long int ru_oublock;

    long int ru_msgsnd;

    long int ru_msgrcv;

    long int ru_nsignals;



    long int ru_nvcsw;


    long int ru_nivcsw;
  };







enum __priority_which
{
  PRIO_PROCESS = 0,

  PRIO_PGRP = 1,

  PRIO_USER = 2

};


extern "C" {




extern int prlimit (__pid_t __pid, enum __rlimit_resource __resource,
      __const struct rlimit *__new_limit,
      struct rlimit *__old_limit) throw ();
# 262 "/usr/include/bits/resource.h" 3 4
extern int prlimit64 (__pid_t __pid, enum __rlimit_resource __resource,
        __const struct rlimit64 *__new_limit,
        struct rlimit64 *__old_limit) throw ();



}
# 26 "/usr/include/sys/resource.h" 2 3 4






extern "C" {
# 43 "/usr/include/sys/resource.h" 3 4
typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;





extern int getrlimit (__rlimit_resource_t __resource,
        struct rlimit *__rlimits) throw ();
# 62 "/usr/include/sys/resource.h" 3 4
extern int getrlimit64 (__rlimit_resource_t __resource,
   struct rlimit64 *__rlimits) throw ();






extern int setrlimit (__rlimit_resource_t __resource,
        __const struct rlimit *__rlimits) throw ();
# 82 "/usr/include/sys/resource.h" 3 4
extern int setrlimit64 (__rlimit_resource_t __resource,
   __const struct rlimit64 *__rlimits) throw ();




extern int getrusage (__rusage_who_t __who, struct rusage *__usage) throw ();





extern int getpriority (__priority_which_t __which, id_t __who) throw ();



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     throw ();

}
# 530 "./globals.h" 2
# 1 "/usr/include/sys/user.h" 1 3 4
# 26 "/usr/include/sys/user.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/sys/user.h" 2 3 4



struct user_fpregs_struct
{
  unsigned short int cwd;
  unsigned short int swd;
  unsigned short int ftw;
  unsigned short int fop;
  unsigned long int rip;
  unsigned long int rdp;
  unsigned int mxcsr;
  unsigned int mxcr_mask;
  unsigned int st_space[32];
  unsigned int xmm_space[64];
  unsigned int padding[24];
};

struct user_regs_struct
{
  unsigned long int r15;
  unsigned long int r14;
  unsigned long int r13;
  unsigned long int r12;
  unsigned long int rbp;
  unsigned long int rbx;
  unsigned long int r11;
  unsigned long int r10;
  unsigned long int r9;
  unsigned long int r8;
  unsigned long int rax;
  unsigned long int rcx;
  unsigned long int rdx;
  unsigned long int rsi;
  unsigned long int rdi;
  unsigned long int orig_rax;
  unsigned long int rip;
  unsigned long int cs;
  unsigned long int eflags;
  unsigned long int rsp;
  unsigned long int ss;
  unsigned long int fs_base;
  unsigned long int gs_base;
  unsigned long int ds;
  unsigned long int es;
  unsigned long int fs;
  unsigned long int gs;
};

struct user
{
  struct user_regs_struct regs;
  int u_fpvalid;
  struct user_fpregs_struct i387;
  unsigned long int u_tsize;
  unsigned long int u_dsize;
  unsigned long int u_ssize;
  unsigned long int start_code;
  unsigned long int start_stack;
  long int signal;
  int reserved;
  struct user_regs_struct* u_ar0;
  struct user_fpregs_struct* u_fpstate;
  unsigned long int magic;
  char u_comm [32];
  unsigned long int u_debugreg [8];
};
# 531 "./globals.h" 2
};

# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stdarg.h" 1 3 4
# 534 "./globals.h" 2

# 1 "./mathlib.h" 1
# 31 "./mathlib.h"
namespace math {
# 46 "./mathlib.h"
  double round(double a);
  double floor(double a);
  double ceil(double a);
  double trunc(double a);

  double sin(double a);
  double cos(double a);
  double exp2(double x);

  int ilogb(double x);
  double significand(double x);

  extern double tan(double x);

  inline double sqrt(double a) {
    double z;
    asm("sqrtsd %[ra],%[rd];" : [rd] "=x" (z) : [ra] "x" (a));
    return z;
  }

  inline double fabs(double a) {
    union {
      W64 w;
      double d;
    } u;

    u.d = a;
    u.w = u.w & 0x7fffffffffffffffULL;
    return u.d;
  }


  enum {
    FP_NAN,
    FP_INFINITE,
    FP_ZERO,
    FP_SUBNORMAL,
    FP_NORMAL
  };


  inline int isinf(double x) {
    W64orDouble u;
    u.d = x;
    u.hilo.lo |= (u.hilo.hi & 0x7fffffff) ^ 0x7ff00000;
    u.hilo.lo |= -u.hilo.lo;
    return ~(u.hilo.lo >> 31) & (u.hilo.hi >> 30);
  }


  inline int isinff(float x) {
    W32orFloat u;
    u.f = x;

    W32s t = u.w & 0x7fffffff;
    t ^= 0x7f800000;
    t |= -t;
    return ~(t >> 31) & (u.w >> 30);
  }


 inline int finite(double x) {
    W64orDouble u;
    u.d = x;
    return (int)((W32s)((u.hilo.hi & 0x7fffffff)-0x7ff00000)>>31);
  }


 inline int finitef(float x) {
    W32orFloat u;
    u.f = x;
    return (int)((W32s)((u.w & 0x7fffffff)-0x7f800000)>>31);
  }


  inline int signbit(double x) {
    W64orDouble u;
    u.d = x;
    return (((u.w) >> (63)) & 1);
  }


  inline int signbitf(float x) {
    W32orFloat u;
    u.f = x;
    return (((u.w) >> (31)) & 1);
  }


 inline int isnan(double x) {
    W64orDouble u;
    u.d = x;
    u.hilo.hi &= 0x7fffffff;
    u.hilo.hi |= (W32)(u.hilo.lo|(-u.hilo.lo))>>31;
    u.hilo.hi = 0x7ff00000 - u.hilo.hi;
    return (int)(((W32)u.hilo.hi)>>31);
  }


 inline int isnanf(float x) {
    W32orFloat u;
    u.f = x;
    u.w &= 0x7fffffff;
    u.w = 0x7f800000 - u.w;
    return (int)(((W32)(u.w))>>31);
  }


  inline int fpclassify(double x) {
    W64orDouble u;
    u.d = x;

    int retval = FP_NORMAL;
    u.hilo.lo |= u.hilo.hi & 0xfffff;
    u.hilo.hi &= 0x7ff00000;
    if ((u.hilo.hi | u.hilo.lo) == 0)
      retval = FP_ZERO;
    else if (u.hilo.hi == 0)
      retval = FP_SUBNORMAL;
    else if (u.hilo.hi == 0x7ff00000)
      retval = u.hilo.lo != 0 ? FP_NAN : FP_INFINITE;

    return retval;
  }


  inline int fpclassifyf(float x) {
    W32orFloat u;
    u.f = x;

    int retval = FP_NORMAL;

    u.w &= 0x7fffffff;
    if (u.w == 0)
      retval = FP_ZERO;
    else if (u.w < 0x800000)
      retval = FP_SUBNORMAL;
    else if (u.w >= 0x7f800000)
      retval = u.w > 0x7f800000 ? FP_NAN : FP_INFINITE;

    return retval;
  }


  inline bool isnormal(double x) { return (fpclassify(x) == FP_NORMAL); }
};
# 536 "./globals.h" 2
# 1 "./klibc.h" 1
# 14 "./klibc.h"
# 1 "./syscalls.h" 1
# 14 "./syscalls.h"
extern "C" {
  int sys_open(const char* pathname, int flags, int mode);
  int sys_close(int fd);
  ssize_t sys_read(int fd, void* buf, size_t count);
  ssize_t sys_write(int fd, const void* buf, size_t count);
  ssize_t sys_fdatasync(int fd);
  W64 sys_seek(int fd, W64 offset, unsigned int origin);
  int sys_unlink(const char* pathname);
  int sys_rename(const char* oldpath, const char* newpath);

  void* sys_mmap(void* start, size_t length, int prot, int flags, int fd, W64 offset);
  int sys_munmap(void * start, size_t length);
  void* sys_mremap(void* old_address, size_t old_size, size_t new_size, unsigned long flags);
  int sys_mprotect(void* addr, size_t len, int prot);
  int sys_madvise(void* addr, size_t len, int action);
  int sys_mlock(const void *addr, size_t len);
  int sys_munlock(const void *addr, size_t len);
  int sys_mlockall(int flags);
  int sys_munlockall(void);

  pid_t sys_fork();
  int sys_execve(const char* filename, const char** argv, const char** envp);

  pid_t sys_gettid();
  pid_t sys_getppid();
  pid_t sys_getpid();
  void sys_exit(int code);
  void* sys_brk(void* newbrk);
  int sys_readlink(const char *path, char *buf, size_t bufsiz);
  W64 sys_nanosleep(W64 nsec);

  struct utsname;
  int sys_uname(struct utsname* buf);

  void* malloc(size_t size) __attribute__((__malloc__));
  void free(void* ptr);
  char* getenv(const char* name);
  int sys_sigaction(int signum, const struct sigaction *act, struct sigaction *oldact);

  int sys_gettimeofday(struct timeval* tv, struct timezone* tz);
  time_t sys_time(time_t* t);
  pid_t sys_wait4(pid_t pid, int *status, int options, struct rusage *rusage);

  typedef void (*kernel_sighandler_t)(int signo, siginfo_t *si, void *context);


  struct kernel_sigaction {
    kernel_sighandler_t k_sa_handler;
    unsigned long sa_flags;
    void (*sa_restorer) (void);
    sigset_t sa_mask;
  };

  long sys_rt_sigaction(int sig, const struct kernel_sigaction* act, struct kernel_sigaction* oldact, size_t sigsetsize);
  int sys_getrlimit(int resource, struct rlimit* rlim);

  W64 sys_arch_prctl(int code, void* addr);
  W64 sys_ptrace(int request, pid_t pid, W64 addr, W64 data);




};
# 15 "./klibc.h" 2
# 48 "./klibc.h"
char* format_number(char* buf, char* end, W64 num, int base, int size, int precision, int type);
int format_integer(char* buf, int bufsize, W64s v, int size = 0, int flags = 0, int base = 10, int precision = 0);
int format_float(char* buf, int bufsize, double v, int precision = 6, int pad = 0);





void call_global_constuctors();
# 537 "./globals.h" 2
# 558 "./globals.h"
static inline bool fcmpeqtol(float a, float b) {
  return (a == b) || (math::fabs(a-b) <= 0.00001);
}




static inline float fsqrt(float v) { return (float)math::sqrt(v); }
static inline void freemem(void* p) { free(p); }

template <typename T> static inline void setzero(T& x) { memset(&x, 0, sizeof(T)); }
template <typename T> static inline void fillwith(T& x, byte v) { memset(&x, v, sizeof(T)); }





template <typename T, typename A> static inline T floor(T x, A a) { return (T)(((T)x) & ~((T)(a-1))); }
template <typename T, typename A> static inline T trunc(T x, A a) { return (T)(((T)x) & ~((T)(a-1))); }
template <typename T, typename A> static inline T ceil(T x, A a) { return (T)((((T)x) + ((T)(a-1))) & ~((T)(a-1))); }
template <typename T, typename A> static inline T mask(T x, A a) { return (T)(((T)x) & ((T)(a-1))); }

template <typename T, typename A> static inline T* floorptr(T* x, A a) { return (T*)floor((Waddr)x, a); }
template <typename T, typename A> static inline T* ceilptr(T* x, A a) { return (T*)ceil((Waddr)x, a); }
template <typename T, typename A> static inline T* maskptr(T* x, A a) { return (T*)mask((Waddr)x, a); }
static inline W64 mux64(W64 sel, W64 v0, W64 v1) { return (sel & v1) | ((~sel) & v0); }
template <typename T> static inline T mux(T sel, T v1, T v0) { return (sel & v1) | ((~sel) & v0); }

template <typename T> void swap(T& a, T& b) { T t = a; a = b; b = t; }






template <typename T, typename K>
T select(K cond, T if0, T if1) {
  T z = if0;
  asm("test %[cond],%[cond]; cmovnz %[if1],%[z]" : [z] "+r" (z) : [cond] "r" (cond), [if1] "rm" (if1) : "flags");
  return z;
}

template <typename T, typename K>
void condmove(K cond, T& v, T newv) {
  asm("test %[cond],%[cond]; cmovnz %[newv],%[v]" : [v] "+r" (v) : [cond] "r" (cond), [newv] "rm" (newv) : "flags");
}





template <typename T>
inline void arraycopy(T* dest, const T* source, int count) { memcpy(dest, source, count * sizeof(T)); }

template <typename T, typename V>
inline void rawcopy(T& dest, const V& source) { memcpy(&dest, &source, sizeof(T)); }



static inline bool aligned(W64 address, int size) {
  return ((address & (W64)(size-1)) == 0);
}

inline bool strequal(const char* a, const char* b) {
  return (strcmp(a, b) == 0);
}

template <typename T, int size> int lengthof(T (&)[size]) { return size; }

extern const byte popcountlut8bit[];
extern const byte lsbindexlut8bit[];

static inline int popcount8bit(byte x) {
  return popcountlut8bit[x];
}

static inline int lsbindex8bit(byte x) {
  return lsbindexlut8bit[x];
}

static inline int popcount(W32 x) {
  return (popcount8bit(x >> 0) + popcount8bit(x >> 8) + popcount8bit(x >> 16) + popcount8bit(x >> 24));
}

static inline int popcount64(W64 x) {
  return popcount((W32)((x) & 0xffffffffLL)) + popcount((W32)((x) >> 32LL));
}


extern const W64 expand_8bit_to_64bit_lut[256];




inline unsigned int lsbindex32(W32 n) { return x86_bsf32(n); }

inline int lsbindexi32(W32 n) {
  int r = lsbindex32(n);
  return (n ? r : -1);
}


inline unsigned int lsbindex64(W64 n) { return x86_bsf64(n); }
# 673 "./globals.h"
inline unsigned int lsbindexi64(W64 n) {
  int r = lsbindex64(n);
  return (n ? r : -1);
}


inline unsigned int lsbindex(W64 n) { return lsbindex64(n); }




inline unsigned int msbindex32(W32 n) { return x86_bsr32(n); }

inline int msbindexi32(W32 n) {
  int r = msbindex32(n);
  return (n ? r : -1);
}


inline unsigned int msbindex64(W64 n) { return x86_bsr64(n); }
# 705 "./globals.h"
inline unsigned int msbindexi64(W64 n) {
  int r = msbindex64(n);
  return (n ? r : -1);
}


inline unsigned int msbindex(W64 n) { return msbindex64(n); }



inline int modulo_span(int lower, int upper, int modulus) {
  int result = (upper - lower);
  if (upper < lower) result += modulus;
  return result;
}

inline int add_index_modulo(int index, int increment, int bufsize) {

  index += increment;
  if (index < 0) index += bufsize;
  if (index >= bufsize) index -= bufsize;
  return index;
}
# 775 "./globals.h"
inline bool modulo_ranges_intersect(int a0, int a1, int b0, int b1, int size) {

  int idx =
    ((a0 <= a1) << 0) |
    ((a1 <= b0) << 1) |
    ((b0 <= b1) << 2) |
    ((b1 <= a0) << 3) |
    ((a0 != b0) << 4) |
    ((a0 != b1) << 5) |
    ((a1 != b0) << 6) |
    ((a1 != b1) << 7);

  static const byte lut[256] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0
  };

  return lut[idx];
}
# 837 "./globals.h"
# 1 "./superstl.h" 1
# 28 "./superstl.h"
int current_vcpuid();

extern bool force_synchronous_streams;

namespace superstl {





  class stringbuf;

  stringbuf& operator <<(stringbuf& os, const char* v);
  stringbuf& operator <<(stringbuf& os, const char v);

  class stringbuf {
  public:
    stringbuf() { buf = __null; reset(); }
    stringbuf(int length) {
      buf = __null;
      reset(length);
    }

    void reset(int length = 256);

    ~stringbuf();

    int remaining() const {
      return (buf + length) - p;
    }

    operator char*() const {
      return buf;
    }

    void resize(int newlength);

    void expand() {
      resize(length*2);
    }

    void reserve(int extra);

    int size() const { return p - buf; }
    bool empty() const { return (size() == 0); }
    bool set() const { return !empty(); }

    stringbuf& operator =(const char* str) {
      if (__builtin_expect(!!(!str), 0)) {
        reset();
        return *this;
      }
      reset(strlen(str)+1);
      *this << str;
      return *this;
    }

    stringbuf& operator =(const stringbuf& str) {
      const char* s = (const char*)str;
      if (__builtin_expect(!!(!s), 0)) {
        reset();
        return *this;
      }
      reset(strlen(s)+1);
      *this << s;
      return *this;
    }

    bool operator ==(const stringbuf& s) {
      return strequal((char*)(*this), (char*)s);
    }

    bool operator !=(const stringbuf& s) {
      return !strequal((char*)(*this), (char*)s);
    }

  public:
    char smallbuf[256];
    char* buf;
    char* p;
    int length;
  };
# 122 "./superstl.h"
  static inline stringbuf& operator <<(stringbuf& os, const signed short v) { char buf[128]; format_integer(buf, sizeof(buf), ((1) ? (W64s)v : (W64)v)); return os << buf; };
  static inline stringbuf& operator <<(stringbuf& os, const signed int v) { char buf[128]; format_integer(buf, sizeof(buf), ((0) ? (W64s)v : (W64)v)); return os << buf; };
  static inline stringbuf& operator <<(stringbuf& os, const signed long v) { char buf[128]; format_integer(buf, sizeof(buf), ((0) ? (W64s)v : (W64)v)); return os << buf; };
  static inline stringbuf& operator <<(stringbuf& os, const signed long long v) { char buf[128]; format_integer(buf, sizeof(buf), ((0) ? (W64s)v : (W64)v)); return os << buf; };
  static inline stringbuf& operator <<(stringbuf& os, const unsigned short v) { char buf[128]; format_integer(buf, sizeof(buf), ((0) ? (W64s)v : (W64)v)); return os << buf; };
  static inline stringbuf& operator <<(stringbuf& os, const unsigned int v) { char buf[128]; format_integer(buf, sizeof(buf), ((0) ? (W64s)v : (W64)v)); return os << buf; };
  static inline stringbuf& operator <<(stringbuf& os, const unsigned long v) { char buf[128]; format_integer(buf, sizeof(buf), ((0) ? (W64s)v : (W64)v)); return os << buf; };
  static inline stringbuf& operator <<(stringbuf& os, const unsigned long long v) { char buf[128]; format_integer(buf, sizeof(buf), ((0) ? (W64s)v : (W64)v)); return os << buf; };
# 138 "./superstl.h"
  static inline stringbuf& operator <<(stringbuf& os, const float v) { char buf[128]; format_float(buf, sizeof(buf), v, 6); return os << buf; };
  static inline stringbuf& operator <<(stringbuf& os, const double v) { char buf[128]; format_float(buf, sizeof(buf), v, 16); return os << buf; };

  static inline stringbuf& operator <<(stringbuf& os, const bool v) {
    return os << (int)v;
  }





  static inline stringbuf& operator <<(stringbuf& os, const stringbuf& sb) {
    os << ((char*)sb);
    return os;
  }

  template <class T>
  static inline stringbuf& operator <<(stringbuf& os, const T* v) {
    char buf[128];
    format_integer(buf, sizeof(buf), (W64)(Waddr)v, 0, 32, 16);
    return os << buf;
  }




  template <class T>
  static inline stringbuf& operator ,(stringbuf& os, const T& v) {
    return os << v;
  }




  static const char endl[] = "\n";
  static class iosflush { } flush;



  class odstream {
  protected:
    int fd;
    byte* buf;
    int bufsize;
    int tail;
    odstream* chain;
    W64 offset;
    bool ringbuf_mode;
    byte* ringbuf;
    int ringbuf_tail;
  public:
    bool close_on_destroy;

    odstream();

    bool open(const char* filename, bool append = false, int bufsize = 65536);

    bool open(int fd, int bufsize = 65536);

    void close();

    int setbuf(int bufsize);

    void setchain(odstream* chain);

    void set_ringbuf_mode(bool new_ringbuf_mode);

    ~odstream();

    odstream(int fd) {
      this->fd = -1;
      open(fd);
    }

    odstream(const char* filename, bool append = false, int bufsize = 65536) {
      this->fd = -1;
      open(filename, append, bufsize);
    }

    int write(const void* buf, int count);

    operator bool() const {
      return ok();
    }

    bool ok() const {
      return (fd >= 0);
    }

    int filehandle() const {
      return fd;
    }

    W64 seek(W64 pos, int whence = 0);

    W64 where() const;

    void flush();
  };




  static inline odstream& operator <<(odstream& os, const iosflush& v) {
    os.flush();
    return os;
  }

  template <typename T>
  static inline odstream& operator <<(odstream& os, const T& v) {
    os.write(&v, sizeof(T));
    return os;
  }

  template <typename T>
  static inline odstream& operator ,(odstream& os, const T& v) {
    return os << v;
  }

  class ostream: public odstream {
  public:
    ostream(): odstream() { }

    ostream(int fd): odstream(fd) { }

    ostream(const char* filename, bool append = false): odstream(filename, append) { }
  };





  template <typename T>
  static inline ostream& operator <<(ostream& os, const T& v) {
    stringbuf sb;
    sb << v;
    os.write((char*)sb, sb.size());
    return os;
  }

  template <>
  inline ostream& operator <<(ostream& os, const iosflush& v) {
    os.flush();
    return os;
  }

  template <>
  inline ostream& operator <<(ostream& os, const char& v) {
    os.write(&v, sizeof(char));
    return os;
  }

  static inline ostream& operator <<(ostream& os, const char* v) {
    if (__builtin_expect(!!(!v), 0)) v = "<null>";
    os.write(v, strlen(v));
    return os;
  }

  template <>
  inline ostream& operator <<(ostream& os, const stringbuf& v) { stringbuf sb; sb << (char*)v; os.write((char*)sb, sb.size()); return os; }

  template <class T>
  static inline ostream& operator ,(ostream& os, const T& v) {
    return os << v;
  }




  struct bitstring {
    W64 bits;
    int n;
    bool reverse;

    bitstring() { }

    bitstring(const W64 bits, const int n, bool reverse = false) {
      (static_cast<void> (((__builtin_expect(!!(n <= 64), 0))) ? 0 : (assert_fail ("n <= 64", "./superstl.h", 315, __PRETTY_FUNCTION__), 0)));
      this->bits = bits;
      this->n = n;
      this->reverse = reverse;
    }
  };

  stringbuf& operator <<(stringbuf& os, const bitstring& bs);

  inline ostream& operator <<(ostream& os, const bitstring& arg) { stringbuf sb; sb << arg; os << sb; return os; };

  struct bitmaskstring {
    W64 bits;
    W64 mask;
    int n;
    bool reverse;

    bitmaskstring() { }

    bitmaskstring(const W64 bits, W64 mask, const int n, bool reverse = false) {
      (static_cast<void> (((__builtin_expect(!!(n <= 64), 0))) ? 0 : (assert_fail ("n <= 64", "./superstl.h", 335, __PRETTY_FUNCTION__), 0)));
      this->bits = bits;
      this->mask = mask;
      this->n = n;
      this->reverse = reverse;
    }
  };

  stringbuf& operator <<(stringbuf& os, const bitmaskstring& bs);

  inline ostream& operator <<(ostream& os, const bitmaskstring& arg) { stringbuf sb; sb << arg; os << sb; return os; };

  struct hexstring {
    W64 value;
    int n;

    hexstring() { }

    hexstring(const W64 value, const int n) {
      this->value = value;
      this->n = n;
    }
  };

  stringbuf& operator <<(stringbuf& os, const hexstring& hs);

  inline ostream& operator <<(ostream& os, const hexstring& arg) { stringbuf sb; sb << arg; os << sb; return os; };

  struct bytestring {
    const byte* bytes;
    int n;
    int splitat;

    bytestring() { }

    bytestring(const byte* bytes, int n, int splitat = 16) {
      this->bytes = bytes;
      this->n = n;
      this->splitat = splitat;
    }
  };

  stringbuf& operator <<(stringbuf& os, const bytestring& bs);

  inline ostream& operator <<(ostream& os, const bytestring& arg) { stringbuf sb; sb << arg; os << sb; return os; };

  struct bytemaskstring {
    const byte* bytes;
    W64 mask;
    int n;
    int splitat;

    bytemaskstring() { }

    bytemaskstring(const byte* bytes, W64 mask, int n, int splitat = 16) {
      (static_cast<void> (((__builtin_expect(!!(n <= 64), 0))) ? 0 : (assert_fail ("n <= 64", "./superstl.h", 390, __PRETTY_FUNCTION__), 0)));
      this->bytes = bytes;
      this->mask = mask;
      this->n = n;
      this->splitat = splitat;
    }
  };

  stringbuf& operator <<(stringbuf& os, const bytemaskstring& bs);

  inline ostream& operator <<(ostream& os, const bytemaskstring& arg) { stringbuf sb; sb << arg; os << sb; return os; };

  struct intstring {
    W64s value;
    int width;

    intstring() { }

    intstring(W64s value, int width) {
      this->value = value;
      this->width = width;
    }
  };

  stringbuf& operator <<(stringbuf& os, const intstring& is);

  inline ostream& operator <<(ostream& os, const intstring& arg) { stringbuf sb; sb << arg; os << sb; return os; };

  struct floatstring {
    double value;
    int width;
    int precision;

    floatstring() { }

    floatstring(double value, int width = 0, int precision = 6) {
      this->value = value;
      this->width = width;
      this->precision = precision;
    }
  };

  stringbuf& operator <<(stringbuf& os, const floatstring& fs);

  inline ostream& operator <<(ostream& os, const floatstring& arg) { stringbuf sb; sb << arg; os << sb; return os; };

  struct padstring {
    const char* value;
    int width;
    char pad;

    padstring() { }

    padstring(const char* value, int width, char pad = ' ') {
      this->value = value;
      this->width = width;
      this->pad = pad;
    }
  };

  stringbuf& operator <<(stringbuf& os, const padstring& s);

  inline ostream& operator <<(ostream& os, const padstring& arg) { stringbuf sb; sb << arg; os << sb; return os; };

  struct percentstring {
    double fraction;
    int width;

    percentstring() { }

    percentstring(W64s value, W64s total, int width = 7) {
      fraction = (total) ? (double(value) / double(total)) : 0;
      this->width = width;
    }
  };

  static inline stringbuf& operator <<(stringbuf& os, const percentstring& ps) {
    double f = ps.fraction * 100.;
    W64s intpart = W64s(f);
    W64s fracpart = clipto(W64s(((f - double(intpart)) * 100) + 0.5), W64s(0), W64s(99));

    stringbuf sbfrac;
    sbfrac << fracpart;

    stringbuf sb;
    sb << intpart, '.', padstring(sbfrac, 2, '0'), '%';

    os << padstring(sb, ps.width);
    return os;
  }

  inline ostream& operator <<(ostream& os, const percentstring& arg) { stringbuf sb; sb << arg; os << sb; return os; };

  struct substring {
    const char* str;
    int length;

    substring() { }

    substring(const char* str, int start, int length) {
      int r = strlen(str);
      this->length = min(length, r - start);
      this->str = str + min(start, r);
    }
  };

  stringbuf& operator <<(stringbuf& os, const substring& s);

  inline ostream& operator <<(ostream& os, const substring& arg) { stringbuf sb; sb << arg; os << sb; return os; };




  int stringsubst(stringbuf& sb, const char* pattern, const char* find, const char* replace);
  int stringsubst(stringbuf& sb, const char* pattern, const char* find[], const char* replace[], int substcount);

  class readline;




  class idstream {
  protected:
    int fd;
    int error;
    int eos;
    int head;
    int tail;
    int bufsize;
    int bufused;
    W32 bufmask;
    W64 offset;
    byte* buf;

    int fillbuf();
    int readbuf(byte* dest, int bytes);
    int unread(int bytes);

    inline int addmod(int a, int b) { return ((a + b) & bufmask); }

    inline void reset() { fd = -1; error = 0; eos = 0; head = 0; tail = 0; buf = __null; bufused = 0; bufsize = 0; bufmask = 0; offset = 0; close_on_destroy = 1; }

  public:
    bool close_on_destroy;

    idstream() { reset(); }

    bool open(const char* filename, int bufsize = 65536);

    bool open(int fd, int bufsize = 65536);

    int setbuf(int bufsize);

    idstream(const char* filename) {
      reset();
      open(filename);
    }

    idstream(int fd) {
      reset();
      open(fd);
    }

    void close();

    ~idstream() {
      if (__builtin_expect(!!(close_on_destroy), 1)) close();
    }

    bool ok() const { return (!error); }
    operator bool() { return ok(); }

    int read(void* data, int count);

    int filehandle() const { return fd; }

    int readline(char* v, int len);
    int readline(stringbuf& sb);

    bool _IO_getc (char& c);

    W64 seek(W64 pos, int whence = 0);
    W64 where() const;
    W64 size() const;

    void* mmap(long long size);
  };

  template <typename T>
  inline idstream& operator >>(idstream& is, T& v) {
    is.read(&v, sizeof(T));
    return is;
  }

  template <typename T>
  inline idstream& operator ,(idstream& is, T& v) {
    return is >> v;
  }

  class istream: public idstream {
  public:
    istream(): idstream() { }
    istream(const char* filename): idstream(filename) { }
    istream(int fd): idstream(fd) { }
  };

  class readline {
  public:
    readline(char* p, size_t l): buf(p), len(l) { }
    char* buf;
    size_t len;
  };



  static inline istream& operator >>(istream& is, const readline& v) {
    is.readline(v.buf, v.len);
    return is;
  }

  static inline istream& operator >>(istream& is, stringbuf& sb) {
    is.readline(sb);
    return is;
  }




  extern istream cin;
  extern ostream cout;
  extern ostream cerr;





  template <typename T, bool> struct ArrayConstructor {
    inline static void init(T* __restrict__ p, size_t length) {
      for (size_t i = 0; i < (length); i++) { new(p + i) T(); }
    }
  };


  template <typename T> struct ArrayConstructor<T, true> {
    inline static void init(T* __restrict__ p, size_t length) { }
  };

  template <typename T, bool> struct ArrayInitializer {
    inline static void init(T* __restrict__ p, size_t length, const T value) {
      for (size_t i = 0; i < (length); i++) { new(p + i) T(value); }
    }
  };


  template <typename T> struct ArrayInitializer<T, true> {
    inline static void init(T* __restrict__ p, size_t length, const T value) {
      for (size_t i = 0; i < (length); i++) { p[i] = value; }
    }
  };

  template <typename T>
  static inline T* renew(T* p, size_t oldcount, size_t newcount) {
    if (__builtin_expect(!!(newcount <= oldcount), 0)) return p;
    T* pp = (T*)malloc(sizeof(T) * newcount);
    if (__builtin_expect(!!(!p), 0)) (static_cast<void> (((__builtin_expect(!!(oldcount == 0), 0))) ? 0 : (assert_fail ("oldcount == 0", "./superstl.h", 654, __PRETTY_FUNCTION__), 0)));

    if (__builtin_expect(!!(p), 1)) {
      arraycopy(pp, p, oldcount);
      free(p);
    }

    ArrayConstructor<T, (isprimitive_t<T>::primitive) | (ispointer_t<T>::pointer)>::init(pp + oldcount, newcount - oldcount);

    return pp;
  }

  template <class T>
  struct range {
    T lo, hi;
    range() { }
    range(T v) { this->lo = v; this->hi = v; }
    range(T lo, T hi) { this->lo = lo; this->hi = hi; }
    range<T>& operator ()(T lo, T hi) { this->lo = lo; this->hi = hi; return *this; }
    range<T>& operator ()(T v) { this->lo = v; this->hi = v; return *this; }
    bool contains(T p) const { return ((p >= lo) && (p <= hi)); }
    T size() const { return abs(hi - lo); }
    bool operator &(T p) const { return contains(p); }
    bool operator ~() const { return size(); }
    ostream& print(ostream& os) const {
      return os << '[', lo, ' ', hi, ']';
    }
  };

  template <typename T>
  static inline ostream& operator <<(ostream& os, const range<T>& r) {
    return r.print(os);
  }




  template <typename T, int size>
  struct array {
  public:
    array() { }
    static const int length = size;

    T data[size];
    const T& operator [](int i) const {



      return data[i];
    }

    T& operator [](int i) {



      return data[i];
    }

    void clear() {
      for (size_t i = 0; i < (size); i++) data[i] = T();
    }

    void fill(const T& v) {
      for (size_t i = 0; i < (size); i++) data[i] = v;
    }
  };

  template <typename T, int size>
  struct stack {
  public:
    T data[size];
    int count;
    static const int length = size;

    void reset() { count = 0; }

    stack() { reset(); }

    const T& operator [](int i) const {
      return data[i];
    }

    T& operator [](int i) {
      return data[i];
    }

    T& push() {
      if (__builtin_expect(!!(count >= size), 0)) abort();
      T& v = data[count++];
      return v;
    }

    T& push(const T& v) {
      T& r = push();
      r = v;
      return r;
    }

    T& pop() {
      if (__builtin_expect(!!(!count), 0)) abort();
      T& v = data[--count];
      return v;
    }

    bool empty() const { return (count == 0); }
    bool full() const { return (count == size); }

    stack<T, size>& operator =(const stack<T, size>& stack) {
      count = stack.count;
      for (size_t i = 0; i < (count); i++) data[i] = stack.data[i];
      return *this;
    }

    ostream& print(ostream& os) const {
      for (size_t i = 0; i < (count); i++) { os << ((i) ? " " : ""), data[i]; }
      return os;
    }
  };

  template <typename T, int size>
  static inline ostream& operator <<(ostream& os, const stack<T, size>& st) {
    return st.print(os);
  }

  template <typename T, int size>
  static inline ostream& operator <<(ostream& os, const array<T, size>& v) {
    os << "Array of ", size, " elements:", endl;
    for (int i = 0; i < size; i++) {
      os << "  [", i, "]: ", v[i], endl;
    }
    return os;
  }




  template <class T>
  class dynarray {
  protected:
  public:
    T* data;
    size_t length;
    size_t reserved;
    size_t granularity;

  public:
    inline T& operator [](int i) { return data[i]; }
    inline T operator [](int i) const { return data[i]; }

    operator T*() const { return data; }


    dynarray() {
      length = reserved = 0;
      granularity = 16;
      data = __null;
    }

    dynarray(int initcap, int g = 16) {
      length = 0;
      reserved = 0;
      granularity = g;
      data = __null;
      reserve(initcap);
    }

    ~dynarray() {
      if (!((isprimitive_t<T>::primitive) | (ispointer_t<T>::pointer))) {
        for (size_t i = 0; i < (reserved); i++) data[i].~T();
      }

      free(data);
      data = __null;
      length = 0;
      reserved = 0;
    }

    inline int capacity() const { return reserved; }
    inline bool empty() const { return (length == 0); }
    inline void clear() { resize(0); }
    inline int size() const { return length; }
    inline int count() const { return length; }

    void push(const T& obj) {
      T& pushed = push();
      pushed = obj;
    }

    T& push() {
      reserve(length + 1);
      length++;
      return data[length-1];
    }

    T& pop() {
      length--;
      return data[length];
    }

    void resize(int newsize) {
      if (__builtin_expect(!!(newsize > length), 1)) reserve(newsize);
      length = newsize;
    }

    void resize(int newsize, const T& emptyvalue) {
      int oldlength = length;
      resize(newsize);
      if (__builtin_expect(!!(newsize <= oldlength), 0)) return;
      for (int i = oldlength; i < reserved; i++) { data[i] = emptyvalue; }
    }

    void reserve(int newsize) {
      if (__builtin_expect(!!(newsize <= reserved), 0)) return;
      newsize = (newsize + (granularity-1)) & ~(granularity-1);
      int oldsize = length;
      data = renew(data, length, newsize);
      reserved = newsize;
    }

    void fill(const T value) {
      for (size_t i = 0; i < (length); i++) {
        data[i] = value;
      }
    }


    char* tokenize(char* string, const char* seplist) { abort(); }
  };

  template <class T> static inline const T& operator <<(dynarray<T>& buf, const T& v) { return buf.push(v); }
  template <class T> static inline const T& operator >>(dynarray<T>& buf, T& v) { return (v = buf.pop()); }

  template <>
  char* dynarray<char*>::tokenize(char* string, const char* seplist);

  template <class T>
  static inline ostream& operator <<(ostream& os, const dynarray<T>& v) {
    os << "Array of ", v.size(), " elements (", v.capacity(), " reserved): ", endl;
    for (int i = 0; i < v.size(); i++) {
      os << "  [", i, "]: ", v[i], endl;
    }
    return os;
  }




  struct CRC32 {
    static const W32 crctable[256];
    W32 crc;

    inline W32 update(byte value) {
      crc = crctable[byte(crc ^ value)] ^ (crc >> 8);
      return crc;
    }

    inline W32 update(byte* data, unsigned count) {
      for (size_t i = 0; i < (count); i++) {
        update(data[i]);
      }
      return crc;
    }

    CRC32() {
      reset();
    }

    CRC32(W32 newcrc) {
      reset(newcrc);
    }

    inline void reset(W32 newcrc = 0xffffffff) {
      crc = newcrc;
    }

    operator W32() const {
      return crc;
    }
  };

  template <typename T>
  static inline CRC32& operator <<(CRC32& crc, const T& t) {
    crc.update((byte*)&t, sizeof(T));
    return crc;
  }

  template <class T>
  static inline CRC32& operator ,(CRC32& crc, const T& v) {
    return crc << v;
  }

  struct RandomNumberGenerator {
    W32 s1, s2, s3;

    RandomNumberGenerator(W32 seed = 123) { reseed(seed); }

    void reseed(W32 seed);
    W32 random32();
    W64 random64();
    void fill(void* p, size_t count);
  };







  class selflistlink {
  public:
    selflistlink* next;
    selflistlink* prev;
  public:
    void reset() { next = __null; prev = __null; }
    selflistlink() { reset(); }

    selflistlink* unlink() {
      if (__builtin_expect(!!(prev), 1)) prev->next = next;
      if (__builtin_expect(!!(next), 1)) next->prev = prev;
      prev = __null;
      next = __null;
      return this;
    }

    selflistlink* replacewith(selflistlink* newlink) {
      if (__builtin_expect(!!(prev), 1)) prev->next = newlink;
      if (__builtin_expect(!!(next), 1)) next->prev = newlink;
      newlink->prev = prev;
      newlink->next = next;
      return newlink;
    }

    void addto(selflistlink*& root) {

      this->prev = (selflistlink*)&root;
      this->next = root;
      if (__builtin_expect(!!(root), 1)) root->prev = this;

      root = this;
    }

    bool linked() const {
      return (next || prev);
    }

    bool unlinked() const {
      return !linked();
    }
  };

  static inline ostream& operator <<(ostream& os, const selflistlink& link) {
    return os << "[prev ", link.prev, ", next ", link.next, "]";
  }

  class selfqueuelink {
  public:
    selfqueuelink* next;
    selfqueuelink* prev;
  public:
    void reset() { next = this; prev = this; }
    selfqueuelink() { }

    selfqueuelink& unlink() {

      next->prev = prev;
      prev->next = next;
      prev = this;
      next = this;
      return *this;
    }

    void addhead(selfqueuelink& root) {
      addlink(&root, root.next);
    }

    void addhead(selfqueuelink* root) {
      addhead(*root);
    }

    void addto(selfqueuelink& root) {
      addhead(root);
    }

    void addto(selfqueuelink* root) {
      addto(*root);
    }

    void addtail(selfqueuelink& root) {
      addlink(root.prev, &root);
    }

    void addtail(selfqueuelink* root) {
      addtail(*root);
    }

    selfqueuelink* removehead() {
      if (__builtin_expect(!!(empty()), 0)) return __null;
      selfqueuelink* link = next;
      link->unlink();
      return link;
    }

    selfqueuelink* removetail() {
      if (__builtin_expect(!!(empty()), 0)) return __null;
      selfqueuelink* link = prev;
      link->unlink();
      return link;
    }

    selfqueuelink* head() const {
      return next;
    }

    selfqueuelink* tail() const {
      return prev;
    }

    bool empty() const {
      return (next == this);
    }

    bool unlinked() const {
      return ((!prev && !next) || ((prev == this) && (next == this)));
    }

    bool linked() const {
      return !unlinked();
    }

    operator bool() const { return (!empty()); }

  protected:
    void addlink(selfqueuelink* prev, selfqueuelink* next) {
      next->prev = this;
      this->next = next;
      this->prev = prev;
      prev->next = this;
    }
  };





  template <typename T>
  struct ObjectLinkManager {
    static inline T* objof(selflistlink* link) { return (T*)link; }
    static inline selflistlink* linkof(T* obj) { return (selflistlink*)obj; }
# 1113 "./superstl.h"
  };

  template <class T>
  class queuelink {
  public:
    queuelink<T>* next;
    queuelink<T>* prev;
    T* data;
  public:
    void reset() { next = this; prev = this; data = __null; }
    queuelink() { reset(); }
    queuelink(const T& t) { reset(); data = &t; }
    queuelink(const T* t) { reset(); data = t; }
    queuelink<T>& operator ()(T* t) { reset(); data = t; return *this; }

    T& unlink() {

      next->prev = prev;
      prev->next = next;
      prev = this;
      next = this;
      return *data;
    }

    void add_to_head(queuelink<T>& root) {
      addlink(&root, root.next);
    }

    void addto(queuelink<T>& root) {
      addhead(root);
    }

    void add_to_tail(queuelink<T>& root) {
      addlink(root.prev, &root);
    }

    queuelink<T>* remove_head() {
      queuelink<T>* link = next;
      link->unlink();
      return link;
    }

    queuelink<T>* remove_tail() {
      queuelink<T>* link = prev;
      link->unlink();
      return link;
    }

    queuelink<T>* head() const {
      return next;
    }

    queuelink<T>* tail() const {
      return prev;
    }

    bool empty() const {
      return (next == this);
    }

    bool unlinked() const {
      return ((!prev && !next) || ((prev == this) && (next == this)));
    }

    bool linked() const {
      return !unlinked();
    }

    operator bool() const { return (!empty()); }

    T* operator->() const { return data; }
    operator T*() const { return data; }
    operator T&() const { return *data; }

  protected:
    void addlink(queuelink<T>* prev, queuelink<T>* next) {
      next->prev = this;
      this->next = next;
      this->prev = prev;
      prev->next = this;
    }
  };

  template <typename T, typename LM = superstl::ObjectLinkManager<T> >
  class queue: selflistlink {
  public:
    void reset() { next = this; prev = this; }
    queue() { reset(); }

    void add_to_head(selflistlink* link) { addlink(this, link, next); }
    void add_to_head(T& obj) { add_to_head(LM::linkof(&obj)); }
    void add_to_head(T* obj) { add_to_head(LM::linkof(obj)); }

    void add_to_tail(selflistlink* link) { addlink(prev, link, this); }
    void add_to_tail(T& obj) { add_to_tail(LM::linkof(&obj)); }
    void add_to_tail(T* obj) { add_to_tail(LM::linkof(obj)); }

    T* remove_head() {
      if (__builtin_expect(!!(empty()), 0)) return __null;
      selflistlink* link = next;
      link->unlink();
      return LM::objof(link);
    }

    T* remove_tail() {
      if (__builtin_expect(!!(empty()), 0)) return __null;
      selflistlink* link = prev;
      link->unlink();
      return LM::objof(link);
    }

    void enqueue(T* obj) { add_to_tail(obj); }
    T* dequeue() { return remove_head(); }

    void push(T* obj) { add_to_tail(obj); }
    void pop(T* obj) { remove_tail(); }

    T* head() const {
      return ((__builtin_expect(!!(empty()), 0))) ? __null : next;
    }

    T* tail() const {
      return ((__builtin_expect(!!(empty()), 0))) ? __null : tail;
    }

    bool empty() const { return (next == this); }

    operator bool() const { return (!empty()); }

  protected:
    void addlink(selflistlink* prev, selflistlink* link, selflistlink* next) {
      next->prev = link;
      link->next = next;
      link->prev = prev;
      prev->next = link;
    }
  };

  template <typename T, T nulltag, int N, int Q>
  struct FixedIntegerQueueSet {
    T heads[Q];
    T tails[Q];
    T next[N];

    FixedIntegerQueueSet() { reset(); }

    void reset() {
      for (size_t i = 0; i < (Q); i++) { heads[i] = nulltag; }
      for (size_t i = 0; i < (Q); i++) { tails[i] = nulltag; }
      for (size_t i = 0; i < (N); i++) { next[i] = nulltag; }
    }

    bool isnull(T tag) const {
      return (tag == nulltag);
    }

    void add(int qid, T tag) {
      T& head = heads[qid];
      T& tail = tails[qid];

      (static_cast<void> (((__builtin_expect(!!(isnull(next[tag])), 0))) ? 0 : (assert_fail ("isnull(next[tag])", "./superstl.h", 1273, __PRETTY_FUNCTION__), 0)));
      if (__builtin_expect(!!(!isnull(tail)), 1)) next[tail] = tag;
      tail = tag;
      if (__builtin_expect(!!(isnull(head)), 0)) head = tag;
    }

    void addhead(int qid, T tag) {
      T& head = heads[qid];
      T& tail = tails[qid];

      (static_cast<void> (((__builtin_expect(!!(isnull(next[tag])), 0))) ? 0 : (assert_fail ("isnull(next[tag])", "./superstl.h", 1283, __PRETTY_FUNCTION__), 0)));
      if (__builtin_expect(!!(empty(qid)), 0)) {
        head = tail = tag;
        return;
      }

      next[tag] = head;
      head = tag;
    }

    T dequeue(int qid) {
      T& head = heads[qid];
      T& tail = tails[qid];

      T tag = head;
      if (__builtin_expect(!!(isnull(head)), 0)) return nulltag;
      head = next[tag];
      next[tag] = nulltag;
      if (__builtin_expect(!!(tail == tag), 0)) tail = nulltag;
      return tag;
    }

    void splice_into_head(int destqid, int srcqid) {
      if (__builtin_expect(!!(empty(srcqid)), 0)) return;

      if (__builtin_expect(!!(empty(destqid)), 0)) {
        swap(heads[destqid], heads[srcqid]);
        swap(tails[destqid], tails[srcqid]);
        return;
      }

      T& desthead = heads[destqid];
      T& desttail = tails[destqid];

      T& srchead = heads[srcqid];
      T& srctail = tails[srcqid];

      next[srctail] = desthead;
      desthead = srchead;
      desttail = desttail;
      srchead = nulltag;
      srctail = nulltag;
    }

    void splice_into_tail(int destqid, int srcqid) {
      if (__builtin_expect(!!(empty(srcqid)), 0)) return;

      if (__builtin_expect(!!(empty(destqid)), 0)) {
        swap(heads[destqid], heads[srcqid]);
        swap(tails[destqid], tails[srcqid]);
        return;
      }

      T& desthead = heads[destqid];
      T& desttail = tails[destqid];

      T& srchead = heads[srcqid];
      T& srctail = tails[srcqid];

      next[desttail] = srchead;
      desthead = desthead;
      desttail = srctail;

      srchead = nulltag;
      srctail = nulltag;
    }

    bool empty(int qid) const {
      return (isnull(heads[qid]));
    }

    ostream& print(ostream& os) const {
      os << "FixedIntegerQueueSet<", sizeof(T), "-byte slots, ", N, " total slots, ", Q, " queues>:", endl;
      for (size_t qid = 0; qid < (Q); qid++) {
        if (__builtin_expect(!!(empty(qid)), 1)) continue;
        os << "  Q", intstring(qid, -3), " [ head t", intstring(heads[qid], -4), " | tail t", intstring(tails[qid], -4), " ] ->";
        T tag = heads[qid];
        while (!isnull(tag)) {
          os << " t", tag;
          tag = next[tag];
        }
        os << endl;
      }
      return os;
    }
  };

  template <typename T, T nulltag, int N, int Q>
  ostream& operator <<(ostream& os, FixedIntegerQueueSet<T, nulltag, N, Q> q) {
    return q.print(os);
  }







  template <typename T, typename P = W32, Waddr base = 0, int granularity = 1>
  struct shortptr {
    P p;

    shortptr() { }

    shortptr(const T& obj) {
      *this = obj;
    }

    shortptr(const T* obj) {
      *this = obj;
    }

    shortptr<T, P, base, granularity>& operator =(const T& obj) {
      p = (P)((((Waddr)&obj) - base) / granularity);
      return *this;
    }

    shortptr<T, P, base, granularity>& operator =(const T* obj) {
      p = (P)((((Waddr)obj) - base) / granularity);
      return *this;
    }

    T* get() const {
      return (T*)((p * granularity) + base);
    }

    T* operator ->() const {
      return get();
    }

    T& operator *() const {
      return *get();
    }

    operator T*() const { return get(); }

    shortptr<T, P, base, granularity>& operator ++() {
      (*this) = (get() + 1);
      return *this;
    }

    shortptr<T, P, base, granularity>& operator --() {
      (*this) = (get() - 1);
      return *this;
    }
  };

  template <typename T, typename P, Waddr base, int granularity>
  static inline stringbuf& operator <<(stringbuf& os, const shortptr<T, P, base, granularity>& sp) {
    return os << (T*)sp;
  }


  template <typename T>
  struct indexrefnull {
    W16s index;

    indexrefnull() { }

    indexrefnull<T>& operator =(const T& obj) {
      index = (&obj) ? obj.index() : -1;
      return *this;
    }

    indexrefnull<T>& operator =(const T* obj) {
      index = (obj) ? obj->index() : -1;
      return *this;
    }

    indexrefnull<T>& operator =(int i) {
      index = i;
      return *this;
    }

    T* operator ->() const {
      return (index >= 0) ? &(get(index)) : __null;
    }

    T& operator *() const {
      return (index >= 0) ? get(index) : *(T*)__null;
    }

    operator T*() const { return &(get(index)); }

    T& get(int index) const;
  };

  template <typename T>
  struct indexref {
    W16s index;

    indexref() { }

    indexref<T>& operator =(const T& obj) {
      index = obj.index();
      return *this;
    }

    indexref<T>& operator =(const T* obj) {
      index = obj->index();
      return *this;
    }

    indexref<T>& operator =(int i) {
      index = i;
      return *this;
    }

    T* operator ->() const {
      return &(get(index));
    }

    T& operator *() const {
      return get(index);
    }

    operator T*() const { return &(get(index)); }

    T& get(int index) const;
  };
# 1515 "./superstl.h"
  template<size_t N>
  struct bitvecbase {
    typedef unsigned long T;

    T w[N];

    bitvecbase() { resetop(); }

    bitvecbase(const bitvecbase<N>& vec) { for (size_t i = 0; i < (N); i++) w[i] = vec.w[i]; }

    bitvecbase(unsigned long long val) {
      resetop();
      w[0] = val;
    }

    static size_t wordof(size_t index) { return index / ((sizeof(unsigned long) == 8) ? 64 : 32); }
    static size_t byteof(size_t index) { return (index % ((sizeof(unsigned long) == 8) ? 64 : 32)) / 8; }
    static size_t bitof(size_t index) { return index % ((sizeof(unsigned long) == 8) ? 64 : 32); }
    static T maskof(size_t index) { return (static_cast<T>(1)) << bitof(index); }

    T& getword(size_t index) { return w[wordof(index)]; }
    T getword(size_t index) const { return w[wordof(index)]; }
    T& hiword() { return w[N - 1]; }
    T hiword() const { return w[N - 1]; }

    void andop(const bitvecbase<N>& x) {
      for (size_t i = 0; i < N; i++) w[i] &= x.w[i];
    }

    void orop(const bitvecbase<N>& x) {
      for (size_t i = 0; i < (N); i++) w[i] |= x.w[i];
    }

    void xorop(const bitvecbase<N>& x) {
      for (size_t i = 0; i < (N); i++) w[i] ^= x.w[i];
    }

    void shiftleftop(size_t shift) {
      if (__builtin_expect(!!(shift), 1)) {
        const size_t wshift = shift / ((sizeof(unsigned long) == 8) ? 64 : 32);
        const size_t offset = shift % ((sizeof(unsigned long) == 8) ? 64 : 32);

        if (__builtin_expect(!!(offset == 0), 0)) {
          for (size_t i = N - 1; i >= wshift; --i) { w[i] = w[i - wshift]; }
        } else {
          const size_t suboffset = ((sizeof(unsigned long) == 8) ? 64 : 32) - offset;
          for (size_t i = N - 1; i > wshift; --i) { w[i] = (w[i - wshift] << offset) | (w[i - wshift - 1] >> suboffset); }
          w[wshift] = w[0] << offset;
        }


        for (size_t i = 0; i < (wshift); i++) { w[i] = 0; }
      }
    }

    void shiftrightop(size_t shift) {
      if (__builtin_expect(!!(shift), 1)) {
        const size_t wshift = shift / ((sizeof(unsigned long) == 8) ? 64 : 32);
        const size_t offset = shift % ((sizeof(unsigned long) == 8) ? 64 : 32);
        const size_t limit = N - wshift - 1;

        if (__builtin_expect(!!(offset == 0), 0)) {
          for (size_t i = 0; i <= limit; ++i) { w[i] = w[i + wshift]; }
        } else {
          const size_t suboffset = ((sizeof(unsigned long) == 8) ? 64 : 32) - offset;
          for (size_t i = 0; i < limit; ++i) { w[i] = (w[i + wshift] >> offset) | (w[i + wshift + 1] << suboffset); }
          w[limit] = w[N-1] >> offset;
        }


        for (size_t i = 0; i < (N - (limit + 1)); i++) { w[limit + 1 + i] = 0; }
      }
    }

    void maskop(size_t count) {
      T m =
        (!count) ? 0 :
        (count % ((sizeof(unsigned long) == 8) ? 64 : 32)) ? ((T(1) << bitof(count)) - T(1)) :
        T(-1);

      w[wordof(count)] &= m;

      for (size_t i = wordof(count)+1; i < N; i++) {
        w[i] = 0;
      }
    }

    void invertop() {
      for (size_t i = 0; i < (N); i++) w[i] = ~w[i];
    }

    void setallop() {
      for (size_t i = 0; i < (N); i++) w[i] = ~static_cast<T>(0);
    }

    void resetop() { memset(w, 0, N * sizeof(T)); }

    bool equalop(const bitvecbase<N>& x) const {
      T t = 0;
      for (size_t i = 0; i < (N); i++) { t |= (w[i] ^ x.w[i]); }
      return (t == 0);
    }

    bool nonzeroop() const {
      T t = 0;
      for (size_t i = 0; i < (N); i++) { t |= w[i]; }
      return (t != 0);
    }

    size_t popcountop() const {
      size_t result = 0;

      for (size_t i = 0; i < (N); i++)
        result += popcount64(w[i]);

      return result;
    }

    unsigned long integerop() const { return w[0]; }

    void insertop(size_t i, size_t n, T v) {
      T& lw = w[wordof(i)];
      T lm = ((((n) == 64) ? (W64)(-1LL) : ((1LL << (n))-1LL)) << bitof(i));
      lw = (lw & ~lm) | ((v << i) & lm);

      if (__builtin_expect(!!((bitof(i) + n) > ((sizeof(unsigned long) == 8) ? 64 : 32)), 0)) {
        T& hw = w[wordof(i+1)];
        T hm = ((((n) == 64) ? (W64)(-1LL) : ((1LL << (n))-1LL)) >> (((sizeof(unsigned long) == 8) ? 64 : 32) - bitof(i)));
        hw = (hw & ~hm) | ((v >> (((sizeof(unsigned long) == 8) ? 64 : 32) - bitof(i))) & hm);
      }
    }

    void accumop(size_t i, size_t n, T v) {
      w[wordof(i)] |= (v << i);

      if (__builtin_expect(!!((bitof(i) + n) > ((sizeof(unsigned long) == 8) ? 64 : 32)), 0))
        w[wordof(i+1)] |= (v >> (((sizeof(unsigned long) == 8) ? 64 : 32) - bitof(i)));
    }


    size_t lsbop(size_t notfound) const {
      for (size_t i = 0; i < (N); i++) {
        T t = w[i];
        if (__builtin_expect(!!(t), 1)) return (i * ((sizeof(unsigned long) == 8) ? 64 : 32)) + lsbindex64(t);
      }
      return notfound;
    }


    size_t msbop(size_t notfound) const {
      for (int i = N-1; i >= 0; i--) {
        T t = w[i];
        if (__builtin_expect(!!(t), 1)) return (i * ((sizeof(unsigned long) == 8) ? 64 : 32)) + msbindex64(t);
      }
      return notfound;
    }


    size_t lsbop() const {
      return lsbop(0);
    }


    size_t msbop() const {
      return msbop(0);
    }



    size_t nextlsbop(size_t prev, size_t notfound) const {

      ++prev;


      if (__builtin_expect(!!(prev >= N * ((sizeof(unsigned long) == 8) ? 64 : 32)), 0))
        return notfound;


      size_t i = wordof(prev);
      T t = w[i];


      t &= (~static_cast<T>(0)) << bitof(prev);

      if (__builtin_expect(!!(t != static_cast<T>(0)), 1))
        return (i * ((sizeof(unsigned long) == 8) ? 64 : 32)) + lsbindex64(t);


      i++;
      for ( ; i < N; i++ ) {
        t = w[i];
        if (__builtin_expect(!!(t != static_cast<T>(0)), 1))
          return (i * ((sizeof(unsigned long) == 8) ? 64 : 32)) + lsbindex64(t);
      }

      return notfound;
    }
  };

  template <>
  struct bitvecbase<1> {
    typedef unsigned long T;
    T w;

    bitvecbase(void): w(0) {}
    bitvecbase(unsigned long long val): w(val) {}

    static size_t wordof(size_t index) { return index / ((sizeof(unsigned long) == 8) ? 64 : 32); }
    static size_t byteof(size_t index) { return (index % ((sizeof(unsigned long) == 8) ? 64 : 32)) / 8; }
    static size_t bitof(size_t index) { return index % ((sizeof(unsigned long) == 8) ? 64 : 32); }
    static T maskof(size_t index) { return (static_cast<T>(1)) << bitof(index); }

    T& getword(size_t) { return w; }
    T getword(size_t) const { return w; }
    T& hiword() { return w; }
    T hiword() const { return w; }
    void andop(const bitvecbase<1>& x) { w &= x.w; }
    void orop(const bitvecbase<1>& x) { w |= x.w; }
    void xorop(const bitvecbase<1>& x) { w ^= x.w; }
    void shiftleftop(size_t __shift) { w <<= __shift; }
    void shiftrightop(size_t __shift) { w >>= __shift; }
    void invertop() { w = ~w; }
    void setallop() { w = ~static_cast<T>(0); }
    void resetop() { w = 0; }
    bool equalop(const bitvecbase<1>& x) const { return w == x.w; }
    bool nonzeroop() const { return (!!w); }
    size_t popcountop() const { return popcount64(w); }
    unsigned long integerop() const { return w; }
    size_t lsbop() const { return lsbindex64(w); }
    size_t msbop() const { return msbindex64(w); }
    size_t lsbop(size_t notfound) const { return (w) ? lsbindex64(w) : notfound; }
    size_t msbop(size_t notfound) const { return (w) ? msbindex64(w) : notfound; }
    void maskop(size_t count) {
      T m =
        (!count) ? 0 :
        (count < ((sizeof(unsigned long) == 8) ? 64 : 32)) ? ((T(1) << bitof(count)) - T(1)) :
        T(-1);

      w &= m;
    }

    void insertop(size_t i, size_t n, T v) {
      T m = ((((n) == 64) ? (W64)(-1LL) : ((1LL << (n))-1LL)) << bitof(i));
      w = (w & ~m) | ((v << i) & m);
    }

    void accumop(size_t i, size_t n, T v) {
      w |= (v << i);
    }


    size_t nextlsbop(size_t __prev, size_t notfound) const {
      ++__prev;
      if (__builtin_expect(!!(__prev >= ((size_t) ((sizeof(unsigned long) == 8) ? 64 : 32))), 0))
        return notfound;

      T x = w >> __prev;
      if (__builtin_expect(!!(x != 0), 1))
        return lsbindex64(x) + __prev;
      else
        return notfound;
    }
  };

  template <>
  struct bitvecbase<0> {
    typedef unsigned long T;

    bitvecbase() { }
    bitvecbase(unsigned long long) { }

    static size_t wordof(size_t index) { return index / ((sizeof(unsigned long) == 8) ? 64 : 32); }
    static size_t byteof(size_t index) { return (index % ((sizeof(unsigned long) == 8) ? 64 : 32)) / 8; }
    static size_t bitof(size_t index) { return index % ((sizeof(unsigned long) == 8) ? 64 : 32); }
    static T maskof(size_t index) { return (static_cast<T>(1)) << bitof(index); }

    T& getword(size_t) const { return *new T; }
    T hiword() const { return 0; }
    void andop(const bitvecbase<0>&) { }
    void orop(const bitvecbase<0>&) { }
    void xorop(const bitvecbase<0>&) { }
    void shiftleftop(size_t) { }
    void shiftrightop(size_t) { }
    void invertop() { }
    void setallop() { }
    void resetop() { }
    bool equalop(const bitvecbase<0>&) const { return true; }
    bool nonzeroop() const { return false; }
    size_t popcountop() const { return 0; }
    void maskop(size_t count) { }
    void accumop(int i, int n, T v) { }
    void insertop(int i, int n, T v) { }
    unsigned long integerop() const { return 0; }
    size_t lsbop() const { return 0; }
    size_t msbop() const { return 0; }
    size_t lsbop(size_t notfound) const { return notfound; }
    size_t msbop(size_t notfound) const { return notfound; }
    size_t nextlsbop(size_t, size_t) const { return 0; }
  };


  template <size_t extrabits>
  struct bitvec_sanitizer {
    static void sanitize(unsigned long& val) {
      val &= ~((~static_cast<unsigned long>(0)) << extrabits);
    }
  };

  template <>
  struct bitvec_sanitizer<0> {
    static void sanitize(unsigned long) { }
  };

  template<size_t N>
  class bitvec: private bitvecbase<((N) < 1 ? 0 : ((N) + ((sizeof(unsigned long) == 8) ? 64 : 32) - 1)/((sizeof(unsigned long) == 8) ? 64 : 32))> {
  private:
    typedef bitvecbase<((N) < 1 ? 0 : ((N) + ((sizeof(unsigned long) == 8) ? 64 : 32) - 1)/((sizeof(unsigned long) == 8) ? 64 : 32))> base_t;
    typedef unsigned long T;

    bitvec<N>& sanitize() {
      bitvec_sanitizer<N % ((sizeof(unsigned long) == 8) ? 64 : 32)>::sanitize(this->hiword());
      return *this;
    }

  public:
    class reference {
      friend class bitvec;

      T *wp;
      T bpos;


      reference();

    public:
      inline reference(bitvec& __b, size_t index) {
        wp = &__b.getword(index);
        bpos = base_t::bitof(index);
      }

      ~reference() { }


      inline reference& operator =(bool x) {

        if ((__builtin_constant_p(x)) & (__builtin_constant_p(bpos))) {

          *wp = ((x) ? (*wp | base_t::maskof(bpos)) : (*wp & (~base_t::maskof(bpos))));
        } else {

          T b1 = x86_bts(*wp, bpos);
          T b0 = x86_btr(*wp, bpos);
          *wp = (x) ? b1 : b0;
        }






        return *this;
      }


      inline reference& operator =(const reference& j) {


        T b1 = x86_bts(*wp, bpos);
        T b0 = x86_btr(*wp, bpos);
        *wp = (x86_bt(*j.wp, j.bpos)) ? b1 : b0;






        return *this;
      }


      inline reference& operator++(int postfixdummy) {
        if ((__builtin_constant_p(bpos)))
          *wp |= base_t::maskof(bpos);
        else *wp = x86_bts(*wp, bpos);
        return *this;
      }


      inline reference& operator--(int postfixdummy) {
        if ((__builtin_constant_p(bpos)))
          *wp &= ~base_t::maskof(bpos);
        else *wp = x86_btr(*wp, bpos);
        return *this;
      }


      bool operator~() const {

        return x86_btn(*wp, bpos);
      }


      inline operator bool() const {
        return x86_bt(*wp, bpos);
      }


      inline reference& invert() {
        *wp = x86_btc(*wp, bpos);
        return *this;
      }

      bool testset() { return x86_test_bts(*wp, bpos); }
      bool testclear() { return x86_test_btr(*wp, bpos); }
      bool testinv() { return x86_test_btc(*wp, bpos); }

      bool atomicset() { return x86_locked_bts(*wp, bpos); }
      bool atomicclear() { return x86_locked_btr(*wp, bpos); }
      bool atomicinv() { return x86_locked_btc(*wp, bpos); }
    };

    friend class reference;

    bitvec() { }

    bitvec(const bitvec<N>& vec): base_t(vec) { }

    bitvec(unsigned long long val): base_t(val) { sanitize(); }

    bitvec<N>& operator&=(const bitvec<N>& rhs) {
      this->andop(rhs);
      return *this;
    }

    bitvec<N>& operator|=(const bitvec<N>& rhs) {
      this->orop(rhs);
      return *this;
    }

    bitvec<N>& operator^=(const bitvec<N>& rhs) {
      this->xorop(rhs);
      return *this;
    }

    bitvec<N>& operator <<=(int index) {
      if (__builtin_expect(!!(index < N), 1)) {
        this->shiftleftop(index);
        this->sanitize();
      } else this->resetop();
      return *this;
    }

    bitvec<N>& operator>>=(int index) {
      if (__builtin_expect(!!(index < N), 1)) {
        this->shiftrightop(index);
        this->sanitize();
      } else this->resetop();
      return *this;
    }

    bitvec<N> rotright(int index) const {
      return ((*this) >> index) | ((*this) << (N - index));
    }

    bitvec<N> rotleft(int index) const {
      return ((*this) << index) | ((*this) >> (N - index));
    }

    bitvec<N>& set(size_t index) {
      this->getword(index) |= base_t::maskof(index);
      return *this;
    }

    bitvec<N>& reset(size_t index) {
      this->getword(index) &= ~base_t::maskof(index);
      return *this;
    }

    bitvec<N>& assign(size_t index, int val) {
      if (val)
        this->getword(index) |= base_t::maskof(index);
      else
        this->getword(index) &= ~base_t::maskof(index);
      return *this;
    }

    bitvec<N>& invert(size_t index) {
      this->getword(index) ^= base_t::maskof(index);
      return *this;
    }

    bool test(size_t index) const {
      return (this->getword(index) & base_t::maskof(index)) != static_cast<T>(0);
    }

    bitvec<N>& setall() {
      this->setallop();
      this->sanitize();
      return *this;
    }

    bitvec<N>& reset() {
      this->resetop();
      return *this;
    }

    bitvec<N>& operator++(int postfixdummy) { return setall(); }
    bitvec<N>& operator--(int postfixdummy) { return reset(); }

    bitvec<N>& invert() {
      this->invertop();
      this->sanitize();
      return *this;
    }

    bitvec<N> operator ~() const { return bitvec<N>(*this).invert(); }

    reference operator [](size_t index) { return reference(*this, index); }

    bool operator [](size_t index) const { return test(index); }

    bool operator *() const { return nonzero(); }
    bool operator !() const { return iszero(); }

    unsigned long integer() const { return this->integerop(); }


    size_t popcount() const { return this->popcountop(); }


    size_t size() const { return N; }

    bool operator ==(const bitvec<N>& rhs) const { return this->equalop(rhs); }
    bool operator !=(const bitvec<N>& rhs) const { return !this->equalop(rhs); }
    bool nonzero() const { return this->nonzeroop(); }
    bool iszero() const { return !this->nonzeroop(); }
    bool allset() const { return (~(*this)).iszero(); }
    bool all() const { return allset(N); }

    bitvec<N> operator <<(size_t shift) const { return bitvec<N>(*this) <<= shift; }

    bitvec<N> operator >>(size_t shift) const { return bitvec<N>(*this) >>= shift; }

    size_t lsb() const { return this->lsbop(); }
    size_t msb() const { return this->msbop(); }
    size_t lsb(int notfound) const { return this->lsbop(notfound); }
    size_t msb(int notfound) const { return this->msbop(notfound); }
    size_t nextlsb(size_t prev, int notfound = -1) const { return this->nextlsbop(prev, notfound); }

    bitvec<N> insert(int i, int n, T v) const {
      bitvec<N> b(*this);
      b.insertop(i, n, v);
      b.sanitize();
      return b;
    }

    bitvec<N> accum(size_t i, size_t n, T v) const {
      bitvec<N> b(*this);
      b.accumop(i, n, v);
      return b;
    }

    bitvec<N> mask(size_t count) const {
      bitvec<N> b(*this);
      b.maskop(count);
      return b;
    }

    bitvec<N> operator %(size_t b) const {
      return mask(b);
    }

    bitvec<N> extract(size_t index, size_t count) const {
      return (bitvec<N>(*this) >> index) % count;
    }

    bitvec<N> operator ()(size_t index, size_t count) const {
      return extract(index, count);
    }

    bitvec<N> operator &(const bitvec<N>& y) const {
      return bitvec<N>(*this) &= y;
    }

    bitvec<N> operator |(const bitvec<N>& y) const {
      return bitvec<N>(*this) |= y;
    }

    bitvec<N> operator ^(const bitvec<N>& y) const {
      return bitvec<N>(*this) ^= y;
    }

    bitvec<N> remove(size_t index, size_t count = 1) {
      return (((*this) >> (index + count)) << index) | ((*this) % index);
    }

    template <int S> bitvec<S> subset(int i) const {
      return bitvec<S>((*this) >> i);
    }

    bitvec<N> swap(size_t i0, size_t i1) {
      bitvec<N>& v = *this;
      bool t = v[i0];
      v[i0] = v[i1];
      v[i1] = t;
      return v;
    }




    ostream& print(ostream& os) const {
      for (size_t i = 0; i < (N); i++) {
        os << (((*this)[i]) ? '1' : '0');
      }
      return os;
    }

    stringbuf& print(stringbuf& sb) const {
      for (size_t i = 0; i < (N); i++) {
        sb << (((*this)[i]) ? '1' : '0');
      }
      return sb;
    }

    ostream& printhl(ostream& os) const {
      for (int i = N-1; i >= 0; i--) {
        os << (((*this)[i]) ? '1' : '0');
      }
      return os;
    }

    stringbuf& printhl(stringbuf& sb) const {
      for (int i = N-1; i >= 0; i--) {
        sb << (((*this)[i]) ? '1' : '0');
      }
      return sb;
    }
  };




  template <int N>
  struct hilo {
    const bitvec<N>& b;
    int bitcount;

    hilo() { }

    hilo(const bitvec<N>& b_, int bitcount_ = N): b(b_), bitcount(bitcount_) { }
  };

  template <int N>
  static inline stringbuf& operator <<(stringbuf& os, const hilo<N>& hl) {
    return hl.b.printhl(os);
  }

  template <int N>
  inline ostream& operator <<(ostream& os, const hilo<N>& arg) { stringbuf sb; sb << arg; os << sb; return os; };

  template <size_t N>
  static inline ostream& operator <<(ostream& os, const bitvec<N>& v) {
    return v.print(os);
  }

  template <size_t N>
  static inline stringbuf& operator <<(stringbuf& sb, const bitvec<N>& v) {
    return v.print(sb);
  }

  template <int size, typename T>
  static inline T vec_min_index(T* list, const bitvec<size>& include) {
    int minv = limits<T>::max;
    int mini = 0;
    for (size_t i = 0; i < (size); i++) {
      T v = list[i];
      bool ok = (v < minv) & include[i];
      minv = (ok) ? v : minv;
      mini = (ok) ? i : mini;
    }
    return mini;
  }

  template <int size, typename T, typename I>
  static inline void vec_make_sorting_permute_map(I* permute, T* list) {
    bitvec<size> include;
    include++;

    int n = 0;
    while (*include) {
      int mini = vec_min_index<size>(list, include);
      include[mini] = 0;
      (static_cast<void> (((__builtin_expect(!!(n < size), 0))) ? 0 : (assert_fail ("n < size", "./superstl.h", 2208, __PRETTY_FUNCTION__), 0)));
      permute[n++] = mini;
    }
  }







  template <int N = 262144>
  struct BitmapAllocator3Level {
    typedef bitvec<64> bitmap_t;

    bitmap_t level3[1];
    bitmap_t level2[N / 4096];
    bitmap_t level1[N / 64];
    int highest_count;

    void reset(size_t sizelimit = N) {
      (static_cast<void> (((__builtin_expect(!!(sizelimit >= 4096), 0))) ? 0 : (assert_fail ("sizelimit >= 4096", "./superstl.h", 2229, __PRETTY_FUNCTION__), 0)));
      (static_cast<void> (((__builtin_expect(!!(sizelimit <= 262144), 0))) ? 0 : (assert_fail ("sizelimit <= 262144", "./superstl.h", 2230, __PRETTY_FUNCTION__), 0)));

      (static_cast<void> (((__builtin_expect(!!((((sizelimit) >> (0)) & (((12) == 64) ? (W64)(-1LL) : ((1LL << (12))-1LL))) == 0), 0))) ? 0 : (assert_fail ("(((sizelimit) >> (0)) & (((12) == 64) ? (W64)(-1LL) : ((1LL << (12))-1LL))) == 0", "./superstl.h", 2232, __PRETTY_FUNCTION__), 0)));
      size_t highbits = sizelimit >> 12;
      level3[0] = (bitmap_t()++) % highbits;
      for (size_t i = 0; i < (lengthof(level2)); i++) { level2[i]++; }
      for (size_t i = 0; i < (lengthof(level1)); i++) { level1[i]++; }
      highest_count = 0;
    }

    int update_highest_count() {
      highest_count = 0;

      for (int i = lengthof(level1)-1; i >= 0; i--) {
        bitmap_t v = ~level1[i];
        if (__builtin_expect(!!(v), 0)) {
          highest_count = (i * 64) + v.msb() + 1;
          break;
        }
      }
      return highest_count;
    }





    W64s alloc(W64 index) {







      W64 slot1 = (((index) >> (6)) & (((12) == 64) ? (W64)(-1LL) : ((1LL << (12))-1LL)));
      W64 offset1 = (((index) >> (0)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));

      level1[slot1][offset1] = 0;

      W64 slot2 = (((index) >> (12)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));
      W64 offset2 = (((index) >> (6)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));
      if (__builtin_expect(!!(!level1[slot1]), 0)) level2[slot2][offset2] = 0;

      W64 slot3 = 0;
      W64 offset3 = (((index) >> (12)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));
      if (__builtin_expect(!!(!level2[slot2]), 0)) level3[slot3][offset3] = 0;

      highest_count = max(highest_count, int(index+1));

      return index;
    }

    W64s alloc() {
      bitmap_t map;

      map = level3[0];
      if (__builtin_expect(!!(!map), 0)) return -1;
      W64 offset3 = map.lsb();

      map = level2[offset3];
      if (__builtin_expect(!!(!map), 0)) return -1;
      W64 offset2 = map.lsb();

      map = level1[(offset3 << 6) + offset2];
      if (__builtin_expect(!!(!map), 0)) return -1;
      W64 offset1 = map.lsb();

      W64 index = (offset3 << 12) + (offset2 << 6) + offset1;

      return alloc(index);
    }

    void free(W64 index) {
      W64 slot1 = (((index) >> (6)) & (((12) == 64) ? (W64)(-1LL) : ((1LL << (12))-1LL)));
      W64 offset1 = (((index) >> (0)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));
      level1[slot1][offset1] = 1;

      W64 slot2 = (((index) >> (12)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));
      W64 offset2 = (((index) >> (6)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));
      if (__builtin_expect(!!(*level1[slot1]), 0)) level2[slot2][offset2] = 1;

      W64 slot3 = 0;
      W64 offset3 = (((index) >> (12)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));
      if (__builtin_expect(!!(*level2[slot2]), 0)) level3[slot3][offset3] = 1;
    }

    bool isfree(W64 index) const {
      bool freebit = level1[index >> 6][index & 0x3f];
      return freebit;
    }

    bool isused(W64 index) const {
      return (!isfree(index));
    }

    ostream& print(ostream& os) const {
      os << "FreeBitmap3Level:", endl;
      os << "  L3:"; for (size_t i = 0; i < (lengthof(level3)); i++) os << ' ', level3[i], ((i % 4 == 3) ? '\n' : ' '); os << endl;
      os << "  L2:"; for (size_t i = 0; i < (lengthof(level2)); i++) os << ' ', level2[i], ((i % 4 == 3) ? '\n' : ' '); os << endl;
      os << "  L1:"; for (size_t i = 0; i < (lengthof(level1)); i++) os << ' ', level1[i], ((i % 4 == 3) ? '\n' : ' '); os << endl;
      return os;
    }
  };







  template <typename K, typename T>
  struct KeyValuePair {
    T value;
    K key;
  };

  template <typename K, int setcount>
  struct HashtableKeyManager {
    static inline int hash(const K& key);
    static inline bool equal(const K& a, const K& b);
    static inline K dup(const K& key);
    static inline void free(K& key);
  };

  template <int setcount>
  struct HashtableKeyManager<W64, setcount> {
    static inline int hash(W64 key) {
      return foldbits<(lg<(setcount)>::value)>(key);
    }

    static inline bool equal(W64 a, W64 b) { return (a == b); }
    static inline W64 dup(W64 key) { return key; }
    static inline void free(W64 key) { }
  };

  template <int setcount>
  struct HashtableKeyManager<const char*, setcount> {
    static inline int hash(const char* key) {
      int len = strlen(key);
      CRC32 h;
      for (size_t i = 0; i < (len); i++) { h << key[i]; }
      return h;
    }

    static inline bool equal(const char* a, const char* b) {
      return (strcmp(a, b) == 0);
    }

    static inline const char* dup(const char* key) {
      return strdup(key);
    }

    static inline void free(const char* key) {
      ::free((void*)key);
    }
  };

  template <typename T, typename K>
  struct HashtableLinkManager {
    static inline T* objof(selflistlink* link);
    static inline K& keyof(T* obj);
    static inline selflistlink* linkof(T* obj);







  };

  template <typename K, typename T, int setcount = 64, typename LM = ObjectLinkManager<T>, typename KM = HashtableKeyManager<K, setcount> >
  struct SelfHashtable {
  protected:
    selflistlink* sets[setcount];
  public:
    int count;

    T* get(const K& key) {
      selflistlink* tlink = sets[(((KM::hash(key)) >> (0)) & ((((lg<(setcount)>::value)) == 64) ? (W64)(-1LL) : ((1LL << ((lg<(setcount)>::value)))-1LL)))];
      while (tlink) {
        T* obj = LM::objof(tlink);
        if (__builtin_expect(!!(KM::equal(LM::keyof(obj), key)), 1)) return obj;
        tlink = tlink->next;
      }

      return __null;
    }

    struct Iterator {
      SelfHashtable<K, T, setcount, LM, KM>* ht;
      selflistlink* link;
      int slot;

      Iterator() { }

      Iterator(SelfHashtable<K, T, setcount, LM, KM>* ht) {
        reset(ht);
      }

      Iterator(SelfHashtable<K, T, setcount, LM, KM>& ht) {
        reset(ht);
      }

      void reset(SelfHashtable<K, T, setcount, LM, KM>* ht) {
        this->ht = ht;
        slot = 0;
        link = ht->sets[slot];
      }

      void reset(SelfHashtable<K, T, setcount, LM, KM>& ht) {
        reset(&ht);
      }

      T* next() {
        for (;;) {
          if (__builtin_expect(!!(slot >= setcount), 0)) return __null;

          if (__builtin_expect(!!(!link), 0)) {

            slot++;
            if (__builtin_expect(!!(slot >= setcount), 0)) return __null;
            link = ht->sets[slot];
            continue;
          }

          T* obj = LM::objof(link);
          link = link->next;
          prefetch(link);
          return obj;
        }
      }
    };

    dynarray<T*>& getentries(dynarray<T*>& a) {
      a.resize(count);
      int n = 0;
      Iterator iter(this);
      T* t;
      while (t = iter.next()) {
        (static_cast<void> (((__builtin_expect(!!(n < count), 0))) ? 0 : (assert_fail ("n < count", "./superstl.h", 2471, __PRETTY_FUNCTION__), 0)));
        a[n++] = t;
      }
      return a;
    }

    SelfHashtable() {
      reset();
    }

    void reset() {
      count = 0;
      for (size_t i = 0; i < (setcount); i++) { sets[i] = __null; }
    }

    void clear(bool free_after_remove = false) {
      for (size_t i = 0; i < (setcount); i++) {
        selflistlink* tlink = sets[i];
        while (tlink) {
          selflistlink* tnext = tlink->next;
          tlink->unlink();
          if (__builtin_expect(!!(free_after_remove), 0)) {
            T* obj = LM::objof(tlink);
            delete obj;
          }
          tlink = tnext;
        }
        sets[i] = __null;
      }
      count = 0;
    }

    void clear_and_free() {
      clear(true);
    }

    T* operator ()(const K& key) {
      return get(key);
    }

    T* add(T* obj) {
      T* oldobj = get(LM::keyof(obj));
      if (__builtin_expect(!!(oldobj), 0)) {
        remove(oldobj);
      }

      if (LM::linkof(obj)->linked()) return obj;

      LM::linkof(obj)->addto(sets[(((KM::hash(LM::keyof(obj))) >> (0)) & ((((lg<(setcount)>::value)) == 64) ? (W64)(-1LL) : ((1LL << ((lg<(setcount)>::value)))-1LL)))]);
      count++;
      return obj;
    }

    T& add(T& obj) {
      return *add(&obj);
    }

    T* remove(T* obj) {
      selflistlink* link = LM::linkof(obj);
      if (!link->linked()) return obj;
      link->unlink();
      count--;
      return obj;
    }

    T& remove(T& obj) {
      return *remove(&obj);
    }

    ostream& print(ostream& os) const {
      os << "Hashtable of ", setcount, " sets containing ", count, " entries:", endl;
      for (size_t i = 0; i < (setcount); i++) {
        selflistlink* tlink = sets[i];
        if (!tlink)
          continue;
        os << "  Set ", i, ":", endl;
        int n = 0;
        while (__builtin_expect(!!(tlink), 1)) {
          T* obj = LM::objof(tlink);
          os << "    ", LM::keyof(obj), " -> ", *obj, endl;
          tlink = tlink->next;
          n++;
        }
      }
      return os;
    }
  };

  template <typename K, typename T, typename LM, int setcount, typename KM>
  static inline ostream& operator <<(ostream& os, const SelfHashtable<K, T, setcount, LM, KM>& ht) {
    return ht.print(os);
  }

  template <typename K, typename T, typename KM>
  struct ObjectHashtableEntry: public KeyValuePair<K, T> {
    typedef KeyValuePair<K, T> base_t;
    selflistlink hashlink;

    ObjectHashtableEntry() { }

    ObjectHashtableEntry(const K& key, const T& value) {
      this->value = value;
      this->key = KM::dup(key);
    }

    ~ObjectHashtableEntry() {
      hashlink.unlink();
      KM::free(this->key);
    }
  };

  template <typename K, typename T, typename KM>
  struct ObjectHashtableLinkManager {
    typedef ObjectHashtableEntry<K, T, KM> entry_t;

    static inline entry_t* objof(selflistlink* link) {
      return ((entry_t*)(((byte*)(link)) - ((Waddr)(&(nullptr<entry_t>()->hashlink)) - ((Waddr)nullptr<entry_t>()))));
    }

    static inline K& keyof(entry_t* obj) {
      return obj->key;
    }

    static inline selflistlink* linkof(entry_t* obj) {
      return &obj->hashlink;
    }
  };

  template <typename K, typename T, int setcount = 64, typename KM = HashtableKeyManager<K, setcount> >
  struct Hashtable: public SelfHashtable<K, ObjectHashtableEntry<K, T, KM>, setcount, ObjectHashtableLinkManager<K, T, KM> > {
    typedef ObjectHashtableEntry<K, T, KM> entry_t;
    typedef SelfHashtable<K, entry_t, setcount, ObjectHashtableLinkManager<K, T, KM> > base_t;

    struct Iterator: public base_t::Iterator {
      Iterator() { }

      Iterator(Hashtable<K, T, setcount, KM>* ht) {
        reset(ht);
      }

      Iterator(Hashtable<K, T, setcount, KM>& ht) {
        reset(ht);
      }

      void reset(Hashtable<K, T, setcount, KM>* ht) {
        base_t::Iterator::reset(ht);
      }

      void reset(Hashtable<K, T, setcount, KM>& ht) {
        base_t::Iterator::reset(&ht);
      }

      KeyValuePair<K, T>* next() {
        return base_t::Iterator::next();
      }
    };

    dynarray< KeyValuePair<K, T> >& getentries(dynarray< KeyValuePair<K, T> >& a) {
      a.resize(base_t::count);
      int n = 0;
      Iterator iter(this);
      KeyValuePair<K, T>* kvp;
      while (kvp = iter.next()) {
        (static_cast<void> (((__builtin_expect(!!(n < base_t::count), 0))) ? 0 : (assert_fail ("n < base_t::count", "./superstl.h", 2634, __PRETTY_FUNCTION__), 0)));
        a[n++] = *kvp;
      }
      return a;
    }

    T* get(const K& key) {
      entry_t* entry = base_t::get(key);
      if(entry != __null) {
      return &entry->value;
      }
      return __null;
    }

    T* operator ()(const K key) {
      return get(key);
    }

    T* add(const K& key, const T& value) {
      entry_t* entry = base_t::get(key);
      if (__builtin_expect(!!(entry), 0)) {
        entry->value = value;
        return &entry->value;
      }

      entry = new entry_t(key, value);
      base_t::add(entry);
      return &entry->value;
    }

    bool remove(const K& key, T& value) {
      entry_t* entry = base_t::get(key);
      if (__builtin_expect(!!(!entry), 0)) return false;

      value = entry->value;
      base_t::remove(entry);
      delete entry;
      return true;
    }

    bool remove(const K key) {
      T dummy;
      return remove(key, dummy);
    }

    ostream& print(ostream& os) {
      os << "Hashtable of ", setcount, " sets containing ", base_t::count, " entries:", endl;
      Iterator iter;
      iter.reset(this);
      KeyValuePair<K, T>* kvp;
      while (kvp = iter.next()) {
        os << "  ", kvp->key, " -> ", kvp->value, endl;
      }
      return os;
    }
  };

  template <typename K, typename T, int setcount, typename KM>
  static inline ostream& operator <<(ostream& os, const Hashtable<K, T, setcount, KM>& ht) {
    return ((Hashtable<K, T, setcount, KM>&)ht).print(os);
  }

  template <typename T, int N, int setcount>
  struct FixedValueHashtable {
    typedef int ptr_t;

    T data[N];
    ptr_t next[N];

    ptr_t sets[setcount];
    int count;

    FixedValueHashtable() {
      reset();
    }

    void reset() {
      count = 0;
      memset(sets, 0xff, sizeof(sets));
    }

    static int setof(T value) {
      return foldbits<(lg<(setcount)>::value)>(value);
    }

    int lookup(T value) const {
      int set = setof(value);
      ptr_t slot = sets[set];
      while (slot >= 0) {
        if (__builtin_expect(!!(data[slot] == value), 0)) return slot;
        slot = next[slot];
      }
      return -1;
    }

    bool remaining() const { return (N - count); }
    bool full() const { return (!remaining()); }
    bool empty() const { return (!count); }

    ptr_t add(T value) {
      int set = setof(value);
      ptr_t slot = lookup(value);
      if (__builtin_expect(!!(slot >= 0), 1)) return slot;

      if (__builtin_expect(!!(slot >= N), 0)) return -1;
      slot = count++;
      data[slot] = value;
      next[slot] = sets[set];
      sets[set] = slot;
      return slot;
    }

    bool contains(T value) const {
      return (lookup(value) >= 0);
    }

    inline T& operator [](int i) { return data[i]; }
    inline T operator [](int i) const { return data[i]; }
    operator T*() const { return data; }
    operator const T*() const { return data; }

    ostream& print(ostream& os) const {
      os << "FixedValueHashtable<", sizeof(T), "-byte data, ", N, " slots, ", setcount, " sets> containing ", count, " entries:", endl;
      for (size_t i = 0; i < (count); i++) {
        T v = data[i];
        os << "  ", intstring(i, 4), ": ", v, endl;
      }
      return os;
    }
  };

  template <typename T, int N, int setcount>
  ostream& operator <<(ostream& os, const FixedValueHashtable<T, N, setcount>& ht) {
    return ht.print(os);
  }

  template <typename Tkey, typename Tdata, int N, int setcount>
  struct FixedKeyValueHashtable {
    typedef int ptr_t;

    Tkey keys[N];
    Tdata data[N];
    ptr_t next[N];

    ptr_t sets[setcount];
    int count;

    FixedKeyValueHashtable() {
      reset();
    }

    void reset() {
      count = 0;
      memset(sets, 0xff, sizeof(sets));
    }

    static int setof(Tkey key) {
      return foldbits<(lg<(setcount)>::value)>(key);
    }

    int lookup(Tkey key) const {
      int set = setof(key);
      ptr_t slot = sets[set];
      while (slot >= 0) {
        if (__builtin_expect(!!(keys[slot] == key), 0)) return slot;
        slot = next[slot];
      }
      return -1;
    }

    bool remaining() const { return (N - count); }
    bool full() const { return (!remaining()); }
    bool empty() const { return (!count); }

    ptr_t add(Tkey key, Tdata value) {
      int set = setof(key);
      ptr_t slot = lookup(key);
      if (__builtin_expect(!!(slot >= 0), 1)) return slot;

      if (__builtin_expect(!!(slot >= N), 0)) return -1;
      slot = count++;
      keys[slot] = key;
      data[slot] = value;
      next[slot] = sets[set];
      sets[set] = slot;
      return slot;
    }

    Tdata get(Tkey key) const {
      int slot = lookup(key);
      if (__builtin_expect(!!(slot < 0), 0)) return Tdata(0);
      return data[slot];
    }

    inline Tdata operator ()(Tkey key) { return get(key); }

    inline Tdata& operator [](int i) { return data[i]; }
    inline Tdata operator [](int i) const { return data[i]; }
    operator Tdata*() const { return data; }
    operator const Tdata*() const { return data; }

    ostream& print(ostream& os) const {
      os << "FixedKeyValueHashtable<", sizeof(Tkey), "-byte key, ", sizeof(Tdata), "-byte data, ", N, " slots, ", setcount, " sets> containing ", count, " entries:", endl;
      for (size_t i = 0; i < (count); i++) {
        Tkey k = keys[i];
        Tdata v = data[i];
        os << "  ", intstring(i, 4), ": ", k, " => ", v, endl;
      }
      return os;
    }
  };

  template <typename Tkey, typename Tdata, int N, int setcount>
  ostream& operator <<(ostream& os, const FixedKeyValueHashtable<Tkey, Tdata, N, setcount>& ht) {
    return ht.print(os);
  }

  template <typename T, int N>
  struct ChunkList {
    struct Chunk;

    struct Chunk {
      selflistlink link;
      bitvec<N> freemap;


      T data[N];

      Chunk() { link.reset(); freemap++; }

      bool full() const { return (!freemap); }
      bool empty() const { return freemap.allset(); }

      int add(const T& entry) {
        if (__builtin_expect(!!(full()), 0)) return -1;
        int idx = freemap.lsb();
        freemap[idx] = 0;
        data[idx] = entry;
        return idx;
      }

      bool contains(T* entry) const {
        int idx = entry - data;
        return ((idx >= 0) & (idx < lengthof(data)));
      }

      bool remove(int idx) {
        data[idx] = 0;
        freemap[idx] = 1;

        return empty();
      }

      struct Iterator {
        Chunk* chunk;
        size_t i;

        Iterator() { }

        Iterator(Chunk* chunk_) {
          reset(chunk_);
        }

        void reset(Chunk* chunk_) {
          this->chunk = chunk_;
          i = 0;
        }

        T* next() {
          for (;;) {
            if (__builtin_expect(!!(i >= lengthof(chunk.data)), 0)) return __null;
            if (__builtin_expect(!!(chunk->freemap[i]), 0)) { i++; continue; }
            return &chunk->data[i++];
          }
        }
      };

      int getentries(T* a, int limit) {
        Iterator iter(this);
        T* entry;
        int n = 0;
        while (entry = iter.next()) {
          if (__builtin_expect(!!(n >= limit), 0)) return n;
          a[n++] = *entry;
        }

        return n;
      }
    };

    struct Locator {
      Chunk* chunk;
      int index;

      void reset() { chunk = __null; index = 0; }
    };

    selflistlink* head;
    int elemcount;

    ChunkList() { head = __null; elemcount = 0; }

    bool add(const T& entry, Locator& hint) {
      Chunk* chunk = (Chunk*)head;

      while (chunk) {
        prefetch(chunk->link.next);
        int index = chunk->add(entry);
        if (__builtin_expect(!!(index >= 0), 1)) {
          hint.chunk = chunk;
          hint.index = index;
          elemcount++;
          return true;
        }
        chunk = (Chunk*)chunk->link.next;
      }

      Chunk* newchunk = new Chunk();
      newchunk->link.addto(head);

      int index = newchunk->add(entry);
      (static_cast<void> (((__builtin_expect(!!(index >= 0), 0))) ? 0 : (assert_fail ("index >= 0", "./superstl.h", 2955, __PRETTY_FUNCTION__), 0)));

      hint.chunk = newchunk;
      hint.index = index;
      elemcount++;

      return true;
    }

    bool remove(const Locator& locator) {
      locator.chunk->remove(locator.index);
      elemcount--;

      if (locator.chunk->empty()) {
        locator.chunk->link.unlink();
        delete locator.chunk;
      }

      return empty();
    }

    void clear() {
      Chunk* chunk = (Chunk*)head;

      while (chunk) {
        Chunk* next = (Chunk*)chunk->link.next;
        prefetch(next);
        delete chunk;
        chunk = next;
      }

      elemcount = 0;
      head = __null;
    }

    int count() { return elemcount; }

    bool empty() { return (elemcount == 0); }

    ~ChunkList() {
      clear();
    }

    struct Iterator {
      Chunk* chunk;
      Chunk* nextchunk;
      int i;

      Iterator() { }

      Iterator(ChunkList<T, N>* chunklist) {
        reset(chunklist);
      }

      void reset(ChunkList<T, N>* chunklist) {
        chunk = (Chunk*)chunklist->head;
        nextchunk = (chunk) ? (Chunk*)chunk->link.next : __null;
        i = 0;
      }

      T* next() {
        for (;;) {
          if (__builtin_expect(!!(!chunk), 0)) return __null;

          if (__builtin_expect(!!(i >= lengthof(chunk->data)), 0)) {
            chunk = nextchunk;
            if (__builtin_expect(!!(!chunk), 0)) return __null;
            nextchunk = (Chunk*)chunk->link.next;
            prefetch(nextchunk);
            i = 0;
          }

          if (__builtin_expect(!!(chunk->freemap[i]), 0)) { i++; continue; }

          return &chunk->data[i++];
        }
      }
    };

    int getentries(T* a, int limit) {
      Iterator iter(this);
      T* entry;
      int n;
      while (entry = iter.next()) {
        if (__builtin_expect(!!(n >= limit), 0)) return n;
        a[n++] = *entry;
      }

      return n;
    }
  };


  static inline bool bytes_are_all_zero(const void* ptr, size_t bytes) {

    const W64* p = (const W64*)ptr;
    W64 v = 0;
    for (size_t i = 0; i < ((bytes/8)); i++) v |= p[i];
    if (__builtin_expect(!!(v % 8), 0)) {
      v |= (p[(bytes/8)] & ((((bytes % 8)*8) == 64) ? (W64)(-1LL) : ((1LL << ((bytes % 8)*8))-1LL)));
    }
    return (v == 0);
  }
# 3073 "./superstl.h"
  template <typename T, int N = 15>
  struct GenericChunkList {
    T list[N];
    shortptr< GenericChunkList<T, N> > next;

    GenericChunkList() {
      setzero(*this);
    }


    T* get(T obj) const {
      for (size_t i = 0; i < (lengthof(list)); i++) {
        T& p = list[i];
        if (__builtin_expect(!!(p == obj), 0)) return &p;
      }

      return __null;
    }

    T* add(T obj) {
      for (size_t i = 0; i < (lengthof(list)); i++) {
        T& p = list[i];
        if (__builtin_expect(!!(!p), 0)) {

          T oldp = xchg(p, obj);
          if (oldp) continue;
          return &p;
        }
      }
      return __null;
    }


    T* addunique(T obj) {
      T* np = __null;
      for (int i = lengthof(list)-1; i >= 0; i--) {
        T& p = list[i];
        if (__builtin_expect(!!(p == obj), 0)) return &p;
        if (__builtin_expect(!!(!p), 0)) np = &p;
      }
      if (__builtin_expect(!!(!np), 0)) return __null;
      *np = obj;
      return np;
    }


    T* remove(T obj) {
      for (size_t i = 0; i < (lengthof(list)); i++) {
        T& p = list[i];
        if (__builtin_expect(!!(p != obj), 1)) continue;
        T old = cmpxchg(p, T(0), obj);
        if (old == obj) return &p;
      }

      return __null;
    }


    bool empty() const {
      return bytes_are_all_zero(&list, sizeof(list));
    }

    ostream& print(ostream& os) const {
      os << "  Chunk ", this, ":", endl;
      for (size_t i = 0; i < (lengthof(list)); i++) {
        const T& entry = list[i];
        if (__builtin_expect(!!(!entry), 0)) continue;
        os << "    slot ", intstring(i, 2), ": ", entry, endl;
      }

      return os;
    }

    struct Iterator {
      GenericChunkList<T>* chunk;
      int slot;

      Iterator() { }

      Iterator(GenericChunkList<T>* chunk) { reset(chunk); }
      Iterator(GenericChunkList<T>& chunk) { reset(chunk); }

      void reset(GenericChunkList<T>* chunk) {
        if (__builtin_expect(!!(chunk), 1)) prefetch(chunk->next);
        this->chunk = chunk;
        slot = 0;
      }

      void reset(GenericChunkList<T>& chunk) { reset(&chunk); }

      T* next() {
        for (;;) {
          if (__builtin_expect(!!(!chunk), 0)) return __null;

          if (__builtin_expect(!!(slot >= lengthof(chunk->list)), 0)) {
            reset(chunk->next);
            continue;
          }

          T& obj = chunk->list[slot++];
          if (__builtin_expect(!!(!obj), 0)) continue;
          return &obj;
        }
      }
    };
  };

  template <typename T>
  ostream& operator <<(ostream& os, const GenericChunkList<T>& cl) {
    return cl.print(os);
  }
# 3196 "./superstl.h"
  template <typename T, int bytes = 128>
  struct SearchableChunkList16Entry {
    static const int N = (bytes - (16+4+2+2)) / sizeof(T);
    vec16b tags;
    shortptr<SearchableChunkList16Entry<T>, W32, 0> next;
    W16 valid;
    W16 pad;
    T list[N];

    void reset() {
      valid = 0;
      next = __null;
    }

    SearchableChunkList16Entry() {
      reset();
    }


    byte tagof(const T& target) const;


    bool equal(const T& target, const T& e) const;

    T* get(const T& target) {
      W32 matches = x86_sse_maskeqb(tags, tagof(target)) & valid;
      if (__builtin_expect(!!(!matches), 1)) return __null;
      while (__builtin_expect(!!(matches), 1)) {
        int index = lsbindex32(matches);
        matches = x86_btr(matches, W32(index));
        T* p = &list[index];
        if (__builtin_expect(!!(equal(target, *p)), 1)) return p;
      }
      return __null;
    }

    T* add(const T& e) {
      T* p = get(e);
      if (__builtin_expect(!!(p), 0)) return p;
      if (__builtin_expect(!!(full()), 0)) return __null;

      int index = lsbindex32(~valid);
      (static_cast<void> (((__builtin_expect(!!(index < lengthof(list)), 0))) ? 0 : (assert_fail ("index < lengthof(list)", "./superstl.h", 3238, __PRETTY_FUNCTION__), 0)));
      valid = x86_bts(W32(valid), W32(index));
      p = &list[index];
      *p = e;

      ((byte*)&tags)[index] = tagof(e);

      return p;
    }

    T* remove(const T& e) {
      T* p = get(e);
      if (__builtin_expect(!!(!p), 0)) return __null;

      int index = p - list;
      valid = x86_btr(W32(valid), W32(index));

      return p;
    }

    bool full() const { return (valid == (((lengthof(list)) == 64) ? (W64)(-1LL) : ((1LL << (lengthof(list)))-1LL))); }
    bool empty() const { return (valid == 0); }

    ostream& print(ostream& os) const {
      os << "SearchableChunkList16Entry<", N, " total ", sizeof(T), "-byte entries, ", bytes, "-byte chunk:", endl;
      os << "  Tags: ", bytemaskstring((byte*)&tags, valid, N), endl;
      for (size_t i = 0; i < (N); i++) {
        if (__builtin_expect(!!(!(((valid) >> (i)) & 1)), 1)) continue;
        os << "  slot ", intstring(i, 2), ": ", list[i], endl;
      }
      return os;
    }

    struct Iterator {
      typedef SearchableChunkList16Entry<T, bytes> chunk_t;
      chunk_t* chunk;
      int slot;

      Iterator() { }

      Iterator(chunk_t* chunk) { reset(chunk); }
      Iterator(chunk_t& chunk) { reset(chunk); }

      void reset(chunk_t* chunk) {
        this->chunk = chunk;
        slot = 0;
      }

      void reset(chunk_t& chunk) { reset(&chunk); }

      T* next() {
        for (;;) {
          if (__builtin_expect(!!(slot >= lengthof(chunk->list)), 0)) return __null;
          T* entry = &list[slot++];
          if (__builtin_expect(!!(!(((valid) >> (slot)) & 1)), 0)) continue;
          return entry;
        }
      }
    };
  };

  template <typename T, int bytes>
  ostream& operator <<(ostream& os, const SearchableChunkList16Entry<T, bytes>& chunk) {
    return chunk.print(os);
  }
# 3317 "./superstl.h"
  template <typename T>
  struct DefaultComparator {
    int operator ()(const T& a, const T& b) const {
      int r = (a < b) ? -1 : +1;
      if (a == b) r = 0;
      return r;
    }
  };

  template <typename T, bool backwards = 0>
  struct SortPrecomputedIndexListComparator {
    const T* v;

    SortPrecomputedIndexListComparator(const T* values): v(values) { }

    int operator ()(unsigned long a, unsigned long b) const {




      if (backwards) {
        int r = (v[a] > v[b]) ? -1 : +1;
        if (v[a] == v[b]) r = 0;
        return r;
      } else {
        int r = (v[a] < v[b]) ? -1 : +1;
        if (v[a] == v[b]) r = 0;
        return r;
      }
    }
  };

  template <typename T, bool backwards = 0>
  struct PointerSortComparator {
    PointerSortComparator() { }

    int operator ()(T* a, T* b) const {




      const T& aa = *a;
      const T& bb = *b;
      if (backwards) {
        int r = (aa > bb) ? -1 : +1;
        if (aa == bb) r = 0;
        return r;
      } else {
        int r = (aa < bb) ? -1 : +1;
        if (aa == bb) r = 0;
        return r;
      }
    }
  };

  template <typename T, typename Comparator>
  void sort(T* p, size_t n, const Comparator& compare = DefaultComparator<T>()) {
    int c;


    for (int i = (n/2); i >= 0; i--) {
      for (int r = i; r * 2 < n; r = c) {
        c = r * 2;
        c += ((c < (n - 1)) && (compare(p[c], p[c+1]) < 0));
        if (compare(p[r], p[c]) >= 0) break;
        swap(p[r], p[c]);
      }
    }


    for (int i = n-1; i >= 0; i--) {
      swap(p[0], p[i]);
      for (int r = 0; r * 2 < i; r = c) {
        c = r * 2;
        c += ((c < i-1) && (compare(p[c], p[c+1]) < 0));
        if (compare(p[r], p[c]) >= 0) break;
        swap(p[r], p[c]);
      }
    }
  }

  template <typename T, typename Comparator>
  int search_sorted(const T* p, int n, const T& key, const Comparator& compare = DefaultComparator<T>()) {
    if (__builtin_expect(!!(!n), 0)) return -1;

    int lower = 0;
    int upper = n-1;

    while (lower != upper) {
      int index = (lower + upper) / 2;
      int dir = compare(key, p[index]);





      if (dir > 0) {

        if (__builtin_expect(!!(index < n-1), 1)) lower = index+1;
      } else if (dir < 0) {

        if (__builtin_expect(!!(index > 0), 1)) upper = index-1;
      } else {

        return index;
      }
# 3433 "./superstl.h"
    }

    return (compare(key, p[lower]) == 0) ? lower : -1;
  }

  template <typename T, typename S>
  void subtract_structures(S& d, const S& a, const S& b) {
    const T* ap = (const T*)&a;
    const T* bp = (const T*)&b;
    T* dp = (T*)&d;
    (static_cast<void> (((__builtin_expect(!!((sizeof(S) % sizeof(T)) == 0), 0))) ? 0 : (assert_fail ("(sizeof(S) % sizeof(T)) == 0", "./superstl.h", 3443, __PRETTY_FUNCTION__), 0)));
    int n = sizeof(S) / sizeof(T);
    for (size_t i = 0; i < (n); i++) {
      dp[i] = ap[i] - bp[i];
    }
  }

  template <typename T, typename S>
  T sum_structure_fields(const S& a) {
    (static_cast<void> (((__builtin_expect(!!((sizeof(S) % sizeof(T)) == 0), 0))) ? 0 : (assert_fail ("(sizeof(S) % sizeof(T)) == 0", "./superstl.h", 3452, __PRETTY_FUNCTION__), 0)));
    const T* ap = (const T*)&a;
    int n = sizeof(S) / sizeof(T);
    T s = 0;
    for (size_t i = 0; i < (n); i++) {
      s += ap[i];
    }
    return s;
  }




  template <typename T>
  int cmpeq_arrays(const T* a, const T* b, int n) {
    for (size_t i = 0; i < (n); i++) {
      if (__builtin_expect(!!(a[i] != b[i]), 0)) return i;
    }
    return n;
  }




  template <typename T>
  bool detect_repeated_pattern(const T* list, int n, int& pattern_length, int& repeat_count, int& remaining_count) {
    pattern_length = 1;
    repeat_count = 1;
    remaining_count = 0;

    T first = list[0];
    for (int i = 1; i < n; i++) {
      if (__builtin_expect(!!(list[i] == first), 0)) {
        pattern_length = i;
        break;
      }
    }

    if (__builtin_expect(!!(pattern_length >= n), 1)) return false;

    int start = pattern_length;

    for (;;) {
      if (__builtin_expect(!!((n - start) < pattern_length), 0)) {
        remaining_count = n - start;
        break;
      }

      int matchlen = cmpeq_arrays(list, list + start, pattern_length);
      if (__builtin_expect(!!(matchlen < pattern_length), 0)) {
        remaining_count = n - start;
        break;
      }

      repeat_count++;
      start += pattern_length;
    }


    if (__builtin_expect(!!((repeat_count == 1) && (pattern_length == 1)), 1)) return false;

    return true;
  }

  static inline W64s expandword(const byte*& p, int type) {
    W64s v;

    switch (type) {
    case 0:
      return 0;
    case 1:
      v = *((W8s*)p);
      p += 1;
      return v;
    case 2:
      v = *((W16s*)p);
      p += 2;
      return v;
    case 3:
      v = *((W32s*)p);
      p += 4;
      return v;
    case 4:
      v = *((W64s*)p);
      p += 8;
      return v;
    case 5:
      v = *((byte*)p);
      p += 1;
      return v;
    case 6:
      v = *((W16*)p);
      p += 2;
      return v;
    case 7:
      v = *((W32*)p);
      p += 4;
      return v;
    }

    return v;
  }

  static inline int compressword(byte*& p, W64s v) {
    int f;

    if (__builtin_expect(!!(!v), 1)) {
      f = 0;
    } else if (v >= 0) {
      if (inrange(v, 0LL, 255LL)) {
        *((byte*)p) = (((v) >> (0)) & (((8) == 64) ? (W64)(-1LL) : ((1LL << (8))-1LL)));
        p += 1;
        f = 5;
      } else if (inrange(v, 0LL, 65535LL)) {
        *((W16*)p) = (((v) >> (0)) & (((16) == 64) ? (W64)(-1LL) : ((1LL << (16))-1LL)));
        p += 2;
        f = 6;
      } else if (inrange(v, 0LL, 4294967295LL)) {
        *((W32*)p) = (((v) >> (0)) & (((32) == 64) ? (W64)(-1LL) : ((1LL << (32))-1LL)));
        p += 4;
        f = 7;
      } else {

        *((W64*)p) = v;
        p += 8;
        f = 4;
      }
    } else {
      if (inrange(v, -128LL, 127LL)) {
        *((byte*)p) = (((v) >> (0)) & (((8) == 64) ? (W64)(-1LL) : ((1LL << (8))-1LL)));
        p += 1;
        f = 1;
      } else if (inrange(v, -32768LL, 32767LL)) {
        *((W16*)p) = (((v) >> (0)) & (((16) == 64) ? (W64)(-1LL) : ((1LL << (16))-1LL)));
        p += 2;
        f = 2;
      } else if (inrange(v, -2147483648LL, -2147483647LL)) {
        *((W32*)p) = (((v) >> (0)) & (((32) == 64) ? (W64)(-1LL) : ((1LL << (32))-1LL)));
        p += 4;
        f = 3;
      } else {

        *((W64*)p) = v;
        p += 8;
        f = 4;
      }
    }

    return f;
  }

  class CycleTimer {
  public:
    CycleTimer() { total = 0; tstart = 0; iterations = 0; title = "(generic)"; running = 0; }
    CycleTimer(const char* title) { total = 0; tstart = 0; iterations = 1; this->title = title; running = 0; }

    inline void start() { W64 t = rdtsc(); if (running) return; iterations++; tstart = t; running = 1; }
    inline W64 stop() {
      W64 t = rdtsc() - tstart;

      if (__builtin_expect(!!(!running), 0)) return total;

      tstart = 0;
      total += t;
      running = 0;
      return t;
    }

    inline W64 cycles() const {
      return total;
    }

    inline double seconds() const {
      return (double)total / hz;
    }

    inline void reset() {
      stop();
      tstart = 0;
      total = 0;
    }

  public:
    W64 total;
    W64 tstart;
    int iterations;
    const char* title;
    bool running;

    static double gethz();

  protected:
    static double hz;
  };

  ostream& operator <<(ostream& os, const CycleTimer& ct);





  struct CycleTimerScope {
    CycleTimer& ct;
    CycleTimerScope(CycleTimer& ct_): ct(ct_) { ct.start(); }
    ~CycleTimerScope() { ct.stop(); }
  };
# 3669 "./superstl.h"
  struct Spinlock {
    typedef byte T;
    T lock;

    Spinlock() { reset(); }

    void reset() {
      lock = 0;
    }

    W64 acquire() {




      for (;;) {
        if (__builtin_expect(!!(lock), 0)) {



          cpu_pause();
          asm volatile("": : :"memory");
          continue;
        }

        T old = xchg(lock, T(1));



        if (__builtin_expect(!!(!old), 1)) return 0;

      }
    }

    bool try_acquire() {
      if (__builtin_expect(!!(lock), 0)) return false;
      T old = xchg(lock, T(1));
      return (!old);
    }

    void release() {
      lock = 0;
      asm volatile("": : :"memory");
    }
  };
# 3726 "./superstl.h"
  struct RecursiveMutex {
    W16s locking_vcpuid;
    W16 counter;

    RecursiveMutex() { reset(); }

    void reset() {
      locking_vcpuid = -1;
      counter = 0;
    }

    bool acquire() {
      W16s current = current_vcpuid();
      bool acquired;
      bool recursive;

      for (;;) {
        W16s oldv = cmpxchg(locking_vcpuid, current, W16s(-1));
        asm volatile("": : :"memory");
        acquired = (oldv == -1);
        recursive = (oldv == current);

        if (__builtin_expect(!!(acquired | recursive), 0)) break;

        cpu_pause();
      }

      counter++;

      return (!recursive);
    }

    void release() {
      W16s current = current_vcpuid();
      (static_cast<void> (((__builtin_expect(!!(locking_vcpuid == current), 0))) ? 0 : (assert_fail ("locking_vcpuid == current", "./superstl.h", 3760, __PRETTY_FUNCTION__), 0)));
      (static_cast<void> (((__builtin_expect(!!(counter > 0), 0))) ? 0 : (assert_fail ("counter > 0", "./superstl.h", 3761, __PRETTY_FUNCTION__), 0)));

      counter--;
      if (__builtin_expect(!!(!counter), 1)) {
        locking_vcpuid = -1;
        asm volatile("": : :"memory");
      }
    }
  };




  template <typename T> bool div_rem(T& quotient, T& remainder, T dividend_hi, T dividend_lo, T divisor);
  template <typename T> bool div_rem_s(T& quotient, T& remainder, T dividend_hi, T dividend_lo, T divisor);

  template <typename T>
  struct ScopedLock {
    T& lock;
    ScopedLock(T& lock_): lock(lock_) { lock.acquire(); }
    ~ScopedLock() { lock.release(); }
  };

}
# 838 "./globals.h" 2

using namespace superstl;

ostream& operator <<(ostream& os, const vec16b& v);
ostream& operator ,(ostream& os, const vec16b& v);
ostream& operator <<(ostream& os, const vec8w& v);
ostream& operator ,(ostream& os, const vec8w& v);
# 9 "uopimpl.cpp" 2
# 1 "./ptlsim.h" 1
# 13 "./ptlsim.h"
# 1 "./mm.h" 1
# 14 "./mm.h"
void* ptl_mm_alloc_private_pages(Waddr bytecount, int prot = 0x1|0x2|0x4, Waddr base = 0);
void* ptl_mm_try_alloc_private_pages(Waddr bytecount, int prot = 0x1|0x2|0x4, Waddr base = 0, void* caller = 0);
void* ptl_mm_alloc_private_32bit_pages(Waddr bytecount, int prot = 0x1|0x2|0x4, Waddr base = 0);
void ptl_mm_free_private_pages(void* addr, Waddr bytecount);
void ptl_mm_zero_private_pages(void* base, Waddr bytecount);

void* ptl_mm_alloc_private_page();
void* ptl_mm_try_alloc_private_page();
void* ptl_mm_alloc_private_32bit_page();
void ptl_mm_free_private_page(void* addr);
void ptl_mm_zero_private_page(void* addr);

void* ptl_mm_alloc(size_t bytes);
void* ptl_mm_alloc_aligned(int alignbits);
void* ptl_mm_try_alloc(size_t bytes);
void ptl_mm_free(void* p);

template <typename T>
static inline T* ptl_mm_alloc_private_pages_for_objects(int count) {
  T* p = (T*)ptl_mm_alloc_private_pages(count * sizeof(T));
  return p;
}

template <typename T>
static inline T* ptl_mm_alloc_and_zero_private_pages_for_objects(int count) {
  T* p = ptl_mm_alloc_private_pages_for_objects<T>(count);
  ptl_mm_zero_private_pages(p, count * sizeof(T));
  return p;
}

static const int MAX_URGENCY = 65535;
typedef void (*mm_reclaim_handler_t)(size_t bytes, int urgency);
bool ptl_mm_register_reclaim_handler(mm_reclaim_handler_t handler);
void ptl_mm_reclaim(size_t bytes = 0, int urgency = 0);
void ptl_mm_cleanup();

class DataStoreNode;
DataStoreNode& ptl_mm_capture_stats(DataStoreNode& root);
void ptl_mm_init(byte* heap_start = __null, byte* heap_end = __null);
size_t ptl_mm_getsize(void* p);
void ptl_mm_dump(ostream& os);
void ptl_mm_validate();
void ptl_mm_set_logging(const char* mm_log_filename, int mm_log_buffer_size, bool enable_inline_mm_logging);
void ptl_mm_set_validate(bool enable_mm_validate);
void ptl_mm_flush_logging();
# 14 "./ptlsim.h" 2



# 1 "./kernel.h" 1
# 13 "./kernel.h"
# 1 "./ptlhwdef.h" 1
# 169 "./ptlhwdef.h"
extern W64 sim_cycle;
# 1 "./logic.h" 1
# 14 "./logic.h"
extern ostream logfile;

template <typename T>
struct latch {
  T data;
  T newdata;

  latch() {
    reset();
  }

  void reset(const T& d = T()) {
    data = d;
    newdata = d;
  }

  latch(const T& t) { newdata = t; }

  operator T() const { return data; }

  T& operator =(const T& t) {
    newdata = t; return data;
  }

  void clock(bool clkenable = true) {
    if (clkenable)
      data = newdata;
  }
};

template <typename T, int size>
struct SynchronousRegisterFile {
  SynchronousRegisterFile() {
    reset();
  }

  void reset() {
    for (int i = 0; i < size; i++) {
      data[i].data = 0;
      data[i].newdata = 0;
    }
  }

  latch<T> data[size];

  latch<T>& operator [](int i) {
    return data[i];
  }

  void clock(bool clkenable = true) {
    if (!clkenable)
      return;

    for (int i = 0; i < size; i++) {
      data[i].clock();
    }
  }
};
# 95 "./logic.h"
template <class T, int SIZE>
struct FixedQueue: public array<T, SIZE> {
  int head;
  int tail;
  int count;

  static const int size = SIZE;

  FixedQueue() {
    reset();
  }

  void flush() {
    head = tail = count = 0;
  }

  void reset() {
    head = tail = count = 0;
  }

  int remaining() const {
    return max((SIZE - count) - 1, 0);
  }

  bool empty() const {
    return (!count);
  }

  bool full() const {
    return (!remaining());
  }

  T* alloc() {
    if (!remaining())
      return __null;

    T* entry = &(*this)[tail];

    tail = add_index_modulo(tail, +1, SIZE);
    count++;

    return entry;
  }

  T* push() {
    return alloc();
  }

  T* push(const T& data) {
    T* slot = push();
    if (!slot) return __null;
    *slot = data;
    return slot;
  }

  T* enqueue(const T& data) {
    return push(data);
  }

  void commit(T& entry) {
    (static_cast<void> (((__builtin_expect(!!(entry.index() == head), 0))) ? 0 : (assert_fail ("entry.index() == head", "./logic.h", 155, __PRETTY_FUNCTION__), 0)));
    count--;
    head = add_index_modulo(head, +1, SIZE);
  }

  void annul(T& entry) {

    count--;
    tail = add_index_modulo(tail, -1, SIZE);
  }

  T* pop() {
    if (empty()) return __null;
    tail = add_index_modulo(tail, -1, SIZE);
    count--;
    return &(*this)[tail];
  }

  T* peek() {
    if (empty())
      return __null;
    return &(*this)[head];
  }

  T* dequeue() {
    if (empty())
      return __null;
    count--;
    T* entry = &(*this)[head];
    head = add_index_modulo(head, +1, SIZE);
    return entry;
  }

  void commit(T* entry) { commit(*entry); }
  void annul(T* entry) { annul(*entry); }

  T* pushhead() {
    if (full()) return __null;
    head = add_index_modulo(head, -1, SIZE);
    count++;
    return &(*this)[head];
  }

  T* pophead() {
    if (empty()) return __null;
    T* p = &(*this)[head];
    count--;
    head = add_index_modulo(head, +1, SIZE);
    return p;
  }

  T* peekhead() {
    if (empty()) return __null;
    return &(*this)[head];
  }

  T* peektail() {
    if (empty()) return __null;
    int t = add_index_modulo(tail, -1, SIZE);
    return &(*this)[t];
  }

  T& operator ()(int index) {
    index = add_index_modulo(head, index, SIZE);
    return (*this)[index];
  }

  const T& operator ()(int index) const {
    index = add_index_modulo(head, index, SIZE);
    return (*this)[index];
  }

  ostream& print(ostream& os) const {
    os << "Queue<", SIZE, ">: head ", head, " to tail ", tail, " (", count, " entries):", endl;
    for (int i = ((*this)).head; i != ((*this)).tail; i = add_index_modulo(i, +1, ((*this)).size)) {
      const T& entry = (*this)[i];
      os << "  slot ", intstring(i, 3), ": ", entry, endl;
    }

    return os;
  }
};

template <class T, int SIZE>
ostream& operator <<(ostream& os, FixedQueue<T, SIZE>& queue) {
  return queue.print(os);
}

template <class T, int SIZE>
struct Queue: public FixedQueue<T, SIZE> {
  typedef FixedQueue<T, SIZE> base_t;

  Queue() {
    reset();
  }

  void reset() {
    base_t::reset();
    for (size_t i = 0; i < (SIZE); i++) {
      (*this)[i].init(i);
    }
  }

  T* alloc() {
    T* p = base_t::alloc();
    if (__builtin_expect(!!(p), 1)) p->validate();
    return p;
  }
};

template <class T, int size>
ostream& operator <<(ostream& os, Queue<T, size>& queue) {
  os << "Queue<", size, "]: head ", queue.head, " to tail ", queue.tail, " (", queue.count, " entries):", endl;
  for (int i = (queue).head; i != (queue).tail; i = add_index_modulo(i, +1, (queue).size)) {
    const T& entry = queue[i];
    os << "  ", entry, endl;
  }

  return os;
}

template <typename T, int size>
struct HistoryBuffer: public array<T, size> {
  int current;
  T prevoldest;

  void reset() {
    current = size-1;
    setzero(this->data);
  }

  HistoryBuffer() {
    reset();
  }







  void add(const T& t) {
    current = add_index_modulo(current, +1, size);
    prevoldest = this->data[current];
    this->data[current] = t;
  }




  void undo() {
    this->data[current] = prevoldest;
    current = add_index_modulo(current, -1, size);
  }




  T& operator [](int index) {
    int idx = add_index_modulo(current, -index, size);

    return this->data[idx];
  }

  const T& operator [](int index) const {
    int idx = add_index_modulo(current, -index, size);

    return this->data[idx];
  }
};

template <class T, int size>
ostream& operator <<(ostream& os, HistoryBuffer<T, size>& history) {
  os << "HistoryBuffer[", size, "]: current = ", history.current, ", prevoldest = ", history.prevoldest, endl;
  for (int i = 0; i < size; i++) {
    os << "  ", history[i], endl;
  }
  return os;
}





template <typename T> struct InvalidTag { static const T INVALID; };
template <> struct InvalidTag<W64> { static const W64 INVALID = 0xffffffffffffffffULL; };
template <> struct InvalidTag<W32> { static const W32 INVALID = 0xffffffff; };
template <> struct InvalidTag<W16> { static const W16 INVALID = 0xffff; };
template <> struct InvalidTag<W8> { static const W8 INVALID = 0xff; };
# 357 "./logic.h"
template <typename T, int ways>
struct FullyAssociativeTags {
  bitvec<ways> evictmap;
  T tags[ways];

  static const T INVALID = InvalidTag<T>::INVALID;

  FullyAssociativeTags() {
    reset();
  }

  void reset() {
    evictmap = 0;
    for (size_t i = 0; i < (ways); i++) {
      tags[i] = INVALID;
    }
  }

  void use(int way) {
    evictmap[way] = 1;


  }







  int match(T target) {
    int way = 0;
    for (size_t i = 0; i < (ways); i++) {
      way += (tags[i] == target) ? (i + 1) : 0;
    }

    return way - 1;
  }

  int probe(T target) {
    int way = match(target);
    if (way < 0) return -1;

    use(way);
    return way;
  }

  int lru() const {
    return (evictmap.allset()) ? 0 : (~evictmap).lsb();
  }

  int select(T target, T& oldtag) {
    int way = probe(target);
    if (way < 0) {
      way = lru();
      if (evictmap.allset()) evictmap = 0;
      oldtag = tags[way];
      tags[way] = target;
    }
    use(way);
    return way;
  }

  int select(T target) {
    T dummy;
    return select(target, dummy);
  }

  void invalidate_way(int way) {
    tags[way] = INVALID;
    evictmap[way] = 0;
  }

  int invalidate(T target) {
    int way = probe(target);
    if (way < 0) return -1;
    invalidate_way(way);
    return way;
  }

  const T& operator [](int index) const { return tags[index]; }

  T& operator [](int index) { return tags[index]; }
  int operator ()(T target) { return probe(target); }

  stringbuf& printway(stringbuf& os, int i) const {
    os << "  way ", intstring(i, -2), ": ";
    if (tags[i] != INVALID) {
      os << "tag 0x", hexstring(tags[i], sizeof(T)*8);
      if (evictmap[i]) os << " (MRU)";
    } else {
      os << "<invalid>";
    }
    return os;
  }

  stringbuf& print(stringbuf& os) const {
    for (size_t i = 0; i < (ways); i++) {
      printway(os, i);
      os << endl;
    }
    return os;
  }

  ostream& print(ostream& os) const {
    stringbuf sb;
    print(sb);
    os << sb;
    return os;
  }
};

template <typename T, int ways>
ostream& operator <<(ostream& os, const FullyAssociativeTags<T, ways>& tags) {
  return tags.print(os);
}

template <typename T, int ways>
stringbuf& operator <<(stringbuf& sb, const FullyAssociativeTags<T, ways>& tags) {
  return tags.print(sb);
}
# 506 "./logic.h"
template <int size, int width, int padsize = 0>
struct FullyAssociativeTagsNbitOneHot {
  typedef vec16b vec_t;
  typedef W64 base_t;

  static const int slices = (width + 7) / 8;
  static const int chunkcount = (size+15) / 16;
  static const int padchunkcount = (padsize+15) / 16;

  vec16b tags[slices][chunkcount + padchunkcount] __attribute__ ((aligned (16)));
  base_t tagsmirror[size];
  bitvec<size> valid;
  bitvec<size> evictmap;

  FullyAssociativeTagsNbitOneHot() {
    reset();
  }

  void reset() {
    valid = 0;
    evictmap = 0;
    memset(tags, 0xff, sizeof(tags));
    memset(tagsmirror, 0xff, sizeof(tagsmirror));
  }

  int match(const vec16b* targetslices) const {
    vec16b sum = x86_sse_zerob();

    for (size_t i = 0; i < (chunkcount); i++) {
      vec16b eq = *((vec16b*)&index_bytes_plus1_vec16b[i]);
      for (size_t j = 0; j < (slices); j++) {
        eq = x86_sse_pandb(x86_sse_pcmpeqb(tags[j][i], targetslices[j]), eq);
      }
      sum = x86_sse_psadbw(sum, eq);
    }

    int idx = (x86_sse_pextrw<0>(sum) + x86_sse_pextrw<4>(sum));

    return idx-1;
  }

  static void prep(vec16b* targetslices, base_t tag) {
    for (size_t i = 0; i < (slices); i++) {
      targetslices[i] = x86_sse_dupb((byte)tag);
      tag >>= 8;
    }
  }

  int match(base_t tag) const {
    vec16b targetslices[16];
    prep(targetslices, tag);
    return match(targetslices);
  }

  int search(base_t tag) const {
    return match(tag);
  }

  int operator()(base_t tag) const {
    return search(tag);
  }

  void update(int index, base_t tag) {

    base_t t = tag;
    for (size_t i = 0; i < (slices); i++) {
      *(((byte*)(&tags[i])) + index) = (byte)t;
      t >>= 8;
    }

    tagsmirror[index] = tag;
    valid[index] = 1;
    evictmap[index] = 1;
  }

  class ref {
    friend class FullyAssociativeTagsNbitOneHot;

    FullyAssociativeTagsNbitOneHot<size, width, padsize>& tags;
    int index;

    ref();

  public:
    inline ref(FullyAssociativeTagsNbitOneHot& tags_, int index_): tags(tags_), index(index_) { }

    inline ~ref() { }

    inline ref& operator =(base_t tag) {
      tags.update(index, tag);
      return *this;
    }

    inline ref& operator =(const ref& other) {
      tags.update(index, other.tagsmirror[other.index]);
      return *this;
    }
  };

  friend class ref;

  ref operator [](int index) { return ref(*this, index); }
  base_t operator [](int index) const { return tagsmirror[index]; }

  bool isvalid(int index) {
    return valid[index];
  }

  int insertslot(int idx, base_t tag) {
    valid[idx] = 1;
    (*this)[idx] = tag;
    return idx;
  }

  int insert(base_t tag) {
    if (valid.allset()) return -1;
    int idx = (~valid).lsb();
    return insertslot(idx, tag);
  }

  void invalidateslot(int index) {
    valid[index] = 0;
    (*this)[index] = 0xffffffffffffffffULL;
  }

  void validateslot(int index) {
    valid[index] = 1;
  }

  int invalidate(base_t target) {
    int index = match(target);
    if (index < 0) return 0;
    invalidateslot(index);
    return 1;
  }

  bitvec<size> masked_match(base_t targettag, base_t tagmask) {
    bitvec<size> m;

    for (size_t i = 0; i < (size); i++) {
      base_t tag = tagsmirror[i];
      m[i] = ((tag & tagmask) == targettag);
    }

    return m;
  }

  void masked_invalidate(const bitvec<size>& slotmask) {
    for (size_t i = 0; i < (size); i++) {
      if (__builtin_expect(!!(slotmask[i]), 0)) invalidateslot(i);
    }
  }

  void use(int way) {
    evictmap[way] = 1;

    if (evictmap.allset()) {
      evictmap = 0;
      evictmap[way] = 1;
    }
  }

  int probe(base_t target) {
    int way = match(target);
    if (way < 0) return way;
    use(way);
    return way;
  }

  int lru() const {
    return (evictmap.allset()) ? 0 : (~evictmap).lsb();
  }

  int select(base_t target, base_t& oldtag) {
    int way = probe(target);
    if (way < 0) {
      way = lru();
      if (evictmap.allset()) evictmap = 0;
      oldtag = tagsmirror[way];
      update(way, target);
    }
    use(way);
    return way;
  }

  int select(base_t target) {
    base_t dummy;
    return select(target, dummy);
  }

  ostream& printid(ostream& os, int slot) const {
    base_t tag = (*this)[slot];
    os << intstring(slot, 3), ": ";
    os << hexstring(tag, 64);
    os << " ";
    for (size_t i = 0; i < (slices); i++) {
      const byte b = *(((byte*)(&tags[i])) + slot);
      os << " ", hexstring(b, 8);
    }
    if (!valid[slot]) os << " <invalid>";
    return os;
  }

  ostream& print(ostream& os) const {
    for (size_t i = 0; i < (size); i++) {
      printid(os, i);
      os << endl;
    }
    return os;
  }
};

template <int size, int width, int padsize>
ostream& operator <<(ostream& os, const FullyAssociativeTagsNbitOneHot<size, width, padsize>& tags) {
  return tags.print(os);
}

template <typename T, typename V>
struct NullAssociativeArrayStatisticsCollector {
  static void inserted(V& elem, T newtag, int way) { }
  static void replaced(V& elem, T oldtag, T newtag, int way) { }
  static void probed(V& elem, T tag, int way, bool hit) { }
  static void overflow(T tag) { }
  static void locked(V& slot, T tag, int way) { }
  static void unlocked(V& slot, T tag, int way) { }
  static void invalidated(V& elem, T oldtag, int way) { }
};

template <typename T, typename V, int ways, typename stats = NullAssociativeArrayStatisticsCollector<T, V> >
struct FullyAssociativeArray {
  FullyAssociativeTags<T, ways> tags;
  V data[ways];

  FullyAssociativeArray() {
    reset();
  }

  void reset() {
    tags.reset();
    for (size_t i = 0; i < (ways); i++) { data[i].reset(); }
  }

  V* probe(T tag) {
    int way = tags.probe(tag);
    stats::probed((way < 0) ? data[0] : data[way], tag, way, (way >= 0));
    return (way < 0) ? __null : &data[way];
  }

  V* select(T tag, T& oldtag) {
    int way = tags.select(tag, oldtag);

    V& slot = data[way];

    if ((way >= 0) & (tag == oldtag)) {
      stats::probed(slot, tag, way, 1);
    } else {
      if (oldtag == tags.INVALID)
        stats::inserted(slot, tag, way);
      else stats::replaced(slot, oldtag, tag, way);
    }

    return &slot;
  }

  V* select(T tag) {
    T dummy;
    return select(tag, dummy);
  }

  int wayof(const V* line) const {
    int way = (line - (const V*)&data);



    return way;
  }

  T tagof(V* line) {
    int way = wayof(line);
    return tags.tags[way];
  }

  void invalidate_way(int way) {
    stats::invalidated(data[way], tags[way], way);
    tags.invalidate_way(way);
    data[way].reset();
  }

  void invalidate_line(V* line) {
    invalidate_way(wayof(line));
  }

  int invalidate(T tag) {
    int way = tags.probe(tag);
    if (way < 0) return -1;
    invalidate_way(way);
    return way;
  }

  V& operator [](int way) { return data[way]; }

  V* operator ()(T tag) { return select(tag); }

  ostream& print(ostream& os) const {
    for (size_t i = 0; i < (ways); i++) {
      stringbuf sb;
      tags.printway(sb, i);
      os << padstring(sb, -40), " -> ";
      data[i].print(os, tags.tags[i]);
      os << endl;
    }
    return os;
  }
};

template <typename T, typename V, int ways>
ostream& operator <<(ostream& os, const FullyAssociativeArray<T, V, ways>& assoc) {
  return assoc.print(os);
}

template <typename T, typename V, int setcount, int waycount, int linesize, typename stats = NullAssociativeArrayStatisticsCollector<T, V> >
struct AssociativeArray {
  typedef FullyAssociativeArray<T, V, waycount, stats> Set;
  Set sets[setcount];

  AssociativeArray() {
    reset();
  }

  void reset() {
    for (size_t set = 0; set < (setcount); set++) {
      sets[set].reset();
    }
  }

  static int setof(T addr) {
    return (((addr) >> ((lg<(linesize)>::value))) & ((((lg<(setcount)>::value)) == 64) ? (W64)(-1LL) : ((1LL << ((lg<(setcount)>::value)))-1LL)));
  }

  static T tagof(T addr) {
    return floor(addr, linesize);
  }

  V* probe(T addr) {
    return sets[setof(addr)].probe(tagof(addr));
  }

  V* select(T addr, T& oldaddr) {
    return sets[setof(addr)].select(tagof(addr), oldaddr);
  }

  V* select(T addr) {
    T dummy;
    return sets[setof(addr)].select(tagof(addr), dummy);
  }

  void invalidate(T addr) {
    sets[setof(addr)].invalidate(tagof(addr));
  }

  ostream& print(ostream& os) const {
    os << "AssociativeArray<", setcount, " sets, ", waycount, " ways, ", linesize, "-byte lines>:", endl;
    for (size_t set = 0; set < (setcount); set++) {
      os << "  Set ", set, ":", endl;
      os << sets[set];
    }
    return os;
  }
};

template <typename T, typename V, int size, int ways, int linesize>
ostream& operator <<(ostream& os, const AssociativeArray<T, V, size, ways, linesize>& aa) {
  return aa.print(os);
}





template <typename T, int ways>
struct LockableFullyAssociativeTags {
  bitvec<ways> evictmap;
  bitvec<ways> unlockedmap;
  T tags[ways];

  static const T INVALID = InvalidTag<T>::INVALID;

  LockableFullyAssociativeTags() {
    reset();
  }

  void reset() {
    evictmap = 0;
    unlockedmap.setall();
    for (size_t i = 0; i < (ways); i++) {
      tags[i] = INVALID;
    }
  }

  void use(int way) {
    evictmap[way] = 1;


  }







  int match(T target) {
    int way = 0;
    for (size_t i = 0; i < (ways); i++) {
      way += (tags[i] == target) ? (i + 1) : 0;
    }

    return way - 1;
  }

  int probe(T target) {
    int way = match(target);
    if (way < 0) return -1;

    use(way);
    return way;
  }

  int lru() const {
    if (!unlockedmap) return -1;
    bitvec<ways> w = (~evictmap) & unlockedmap;
    return (*w) ? w.lsb() : 0;
  }

  int select(T target, T& oldtag) {
    int way = probe(target);
    if (way < 0) {
      way = lru();
      if (way < 0) return -1;
      if (evictmap.allset()) evictmap = 0;
      oldtag = tags[way];
      tags[way] = target;
    }
    use(way);
    return way;
  }

  int select(T target) {
    T dummy;
    return select(target, dummy);
  }

  int select_and_lock(T tag, bool& firstlock, T& oldtag) {
    int way = select(tag, oldtag);
    if (way < 0) return way;
    firstlock = unlockedmap[way];
    lock(way);
    return way;
  }

  int select_and_lock(T tag, bool& firstlock) {
    T dummy;
    return select_and_lock(tag, firstlock, dummy);
  }

  int select_and_lock(T target) { bool dummy; return select_and_lock(target, dummy); }

  void invalidate_way(int way) {
    tags[way] = INVALID;
    evictmap[way] = 0;
    unlockedmap[way] = 1;
  }

  int invalidate(T target) {
    int way = probe(target);
    if (way < 0) return -1;
    invalidate_way(way);
  }

  bool islocked(int way) const { return !unlockedmap[way]; }

  void lock(int way) { unlockedmap[way] = 0; }
  void unlock(int way) { unlockedmap[way] = 1; }

  const T& operator [](int index) const { return tags[index]; }

  T& operator [](int index) { return tags[index]; }
  int operator ()(T target) { return probe(target); }

  stringbuf& printway(stringbuf& os, int i) const {
    os << "  way ", intstring(i, -2), ": ";
    if (tags[i] != INVALID) {
      os << "tag 0x", hexstring(tags[i], sizeof(T)*8);
      if (evictmap[i]) os << " (MRU)";
      if (!unlockedmap[i]) os << " (locked)";
    } else {
      os << "<invalid>";
    }
    return os;
  }

  stringbuf& print(stringbuf& os) const {
    for (size_t i = 0; i < (ways); i++) {
      printway(os, i);
      os << endl;
    }
    return os;
  }

  ostream& print(ostream& os) const {
    stringbuf sb;
    print(sb);
    os << sb;
    return os;
  }
};

template <typename T, int ways>
ostream& operator <<(ostream& os, const LockableFullyAssociativeTags<T, ways>& tags) {
  return tags.print(os);
}

template <typename T, int ways>
stringbuf& operator <<(stringbuf& sb, const LockableFullyAssociativeTags<T, ways>& tags) {
  return tags.print(sb);
}

template <typename T, typename V, int ways, typename stats = NullAssociativeArrayStatisticsCollector<T, V> >
struct LockableFullyAssociativeArray {
  LockableFullyAssociativeTags<T, ways> tags;
  V data[ways];

  LockableFullyAssociativeArray() {
    reset();
  }

  void reset() {
    tags.reset();
    for (size_t i = 0; i < (ways); i++) { data[i].reset(); }
  }

  V* probe(T tag) {
    int way = tags.probe(tag);
    stats::probed((way < 0) ? data[0] : data[way], tag, way, (way >= 0));
    return (way < 0) ? __null : &data[way];
  }

  V* select(T tag, T& oldtag) {
    int way = tags.select(tag, oldtag);

    if (way < 0) {
      stats::overflow(tag);
      return __null;
    }

    V& slot = data[way];

    if ((way >= 0) & (tag == oldtag)) {
      stats::probed(slot, tag, way, 1);
    } else {
      if (oldtag == tags.INVALID)
        stats::inserted(slot, tag, way);
      else stats::replaced(slot, oldtag, tag, way);
    }

    return &slot;
  }

  V* select(T tag) {
    T dummy;
    return select(tag, dummy);
  }

  V* select_and_lock(T tag, bool& firstlock, T& oldtag) {
    int way = tags.select_and_lock(tag, firstlock, oldtag);

    if (way < 0) {
      stats::overflow(tag);
      return __null;
    }

    V& slot = data[way];

    if (tag == oldtag) {
      stats::probed(slot, tag, way, 1);
    } else {
      if (oldtag == tags.INVALID)
        stats::inserted(slot, tag, way);
      else stats::replaced(slot, oldtag, tag, way);
      stats::locked(slot, tag, way);
    }

    return &slot;
  }

  V* select_and_lock(T tag, bool& firstlock) {
    T dummy;
    return select_and_lock(tag, firstlock, dummy);
  }

  V* select_and_lock(T tag) { bool dummy; return select_and_lock(tag, dummy); }

  int wayof(const V* line) const {
    int way = (line - (const V*)&data);



    return way;
  }

  T tagof(V* line) {
    int way = wayof(line);
    return tags.tags[way];
  }

  void invalidate_way(int way) {
    unlock_way(way);
    stats::invalidated(data[way], tags[way], way);
    tags.invalidate_way(way);
    data[way].reset();
  }

  void invalidate_line(V* line) {
    invalidate_way(wayof(line));
  }

  int invalidate(T tag) {
    int way = tags.probe(tag);
    if (way < 0) return -1;
    invalidate_way(way);
    return way;
  }

  void unlock_way(int way) {
    stats::unlocked(data[way], tags[way], way);
    tags.unlock(way);
  }

  void unlock_line(V* line) {
    unlock_way(wayof(line));
  }

  int unlock(T tag) {
    int way = tags.probe(tag);
    if (way < 0) return;
    unlock_way(way);
    if (tags.islocked(way)) stats::unlocked(data[way], tags[way], way);
    return way;
  }

  V& operator [](int way) { return data[way]; }

  V* operator ()(T tag) { return select(tag); }

  ostream& print(ostream& os) const {
    for (size_t i = 0; i < (ways); i++) {
      stringbuf sb;
      tags.printway(sb, i);
      os << padstring(sb, -40), " -> ";
      data[i].print(os, tags.tags[i]);
      os << endl;
    }
    return os;
  }
};

template <typename T, typename V, int ways>
ostream& operator <<(ostream& os, const LockableFullyAssociativeArray<T, V, ways>& assoc) {
  return assoc.print(os);
}

template <typename T, typename V, int setcount, int waycount, int linesize, typename stats = NullAssociativeArrayStatisticsCollector<T, V> >
struct LockableAssociativeArray {
  typedef LockableFullyAssociativeArray<T, V, waycount, stats> Set;
  Set sets[setcount];

  LockableAssociativeArray() {
    reset();
  }

  void reset() {
    for (size_t set = 0; set < (setcount); set++) {
      sets[set].reset();
    }
  }

  static int setof(T addr) {
    return (((addr) >> ((lg<(linesize)>::value))) & ((((lg<(setcount)>::value)) == 64) ? (W64)(-1LL) : ((1LL << ((lg<(setcount)>::value)))-1LL)));
  }

  static T tagof(T addr) {
    return floor(addr, linesize);
  }

  V* probe(T addr) {
    return sets[setof(addr)].probe(tagof(addr));
  }

  V* select(T addr, T& oldaddr) {
    return sets[setof(addr)].select(tagof(addr), oldaddr);
  }

  V* select(T addr) {
    T dummy;
    return select(addr, dummy);
  }

  void invalidate(T addr) {
    sets[setof(addr)].invalidate(tagof(addr));
  }

  V* select_and_lock(T addr, bool& firstlock, T& oldtag) {
    V* line = sets[setof(addr)].select_and_lock(tagof(addr), firstlock, oldtag);
    return line;
  }

  V* select_and_lock(T addr, bool& firstlock) {
    W64 dummy;
    return select_and_lock(addr, firstlock, dummy);
  }

  V* select_and_lock(T addr) { bool dummy; return select_and_lock(addr, dummy); }

  ostream& print(ostream& os) const {
    os << "LockableAssociativeArray<", setcount, " sets, ", waycount, " ways, ", linesize, "-byte lines>:", endl;
    for (size_t set = 0; set < (setcount); set++) {
      os << "  Set ", set, ":", endl;
      os << sets[set];
    }
    return os;
  }
};

template <typename T, typename V, int size, int ways, int linesize>
ostream& operator <<(ostream& os, const LockableAssociativeArray<T, V, size, ways, linesize>& aa) {
  return aa.print(os);
}

template <typename T, int setcount, int linesize>
struct DefaultCacheIndexingFunction {
  static inline Waddr setof(T address) { return (((address) >> ((lg<(linesize)>::value))) & ((((lg<(setcount)>::value)) == 64) ? (W64)(-1LL) : ((1LL << ((lg<(setcount)>::value)))-1LL))); }
};

template <typename T, int setcount, int linesize>
struct XORCacheIndexingFunction {
  static inline Waddr setof(T address) {
    address >>= (lg<(linesize)>::value);

    const int tagbits = (sizeof(Waddr) * 8) - (lg<(linesize)>::value);
    address = (((address) >> (0)) & (((tagbits) == 64) ? (W64)(-1LL) : ((1LL << (tagbits))-1LL)));
    return foldbits<(lg<(setcount)>::value)>(address);
  }
};

template <typename T, int setcount, int linesize>
struct CRCCacheIndexingFunction {
  static inline Waddr setof(T address) {
    Waddr slot = 0;
    address >>= (lg<(linesize)>::value);
    CRC32 crc;
    crc << address;
    W32 v = crc;

    return foldbits<(lg<(setcount)>::value)>(v);
  }
};

template <typename T, typename V, int setcount, int waycount, int linesize, typename indexfunc = DefaultCacheIndexingFunction<T, setcount, linesize>, typename stats = NullAssociativeArrayStatisticsCollector<T, V> >
struct LockableCommitRollbackAssociativeArray {
  typedef LockableFullyAssociativeArray<T, V, waycount, stats> Set;
  Set sets[setcount];

  struct ClearList {
    W16 set;
    W16 way;
  };
# 1293 "./logic.h"
  ClearList clearlist[64];
  int cleartail;
  bool clearlist_exceeded;

  LockableCommitRollbackAssociativeArray() {
    reset();
  }

  void reset() {
    for (size_t set = 0; set < (setcount); set++) {
      sets[set].reset();
    }
    cleartail = 0;
    clearlist_exceeded = 0;
  }

  static int setof(T addr) {
    return indexfunc::setof(addr);
  }

  static T tagof(T addr) {
    return floor(addr, linesize);
  }

  V* probe(T addr) {
    return sets[setof(addr)].probe(tagof(addr));
  }

  V* select(T addr, T& oldaddr) {
    return sets[setof(addr)].select(tagof(addr), oldaddr);
  }

  V* select(T addr) {
    T dummy;
    return select(addr, dummy);
  }

  void invalidate(T addr) {
    sets[setof(addr)].invalidate(tagof(addr));
  }

  V* select_and_lock(T addr, bool& firstlock, T& oldtag) {
    V* line = sets[setof(addr)].select_and_lock(tagof(addr), firstlock, oldtag);
    if (__builtin_expect(!!(!line), 0)) return __null;
    if (__builtin_expect(!!(firstlock), 1)) {
      int set = setof(addr);
      int way = sets[set].wayof(line);
      if (__builtin_expect(!!(cleartail >= lengthof(clearlist)), 0)) {
# 1349 "./logic.h"
        clearlist_exceeded = 1;
      } else {
        ClearList& c = clearlist[cleartail++];
        c.set = set;
        c.way = way;
      }
    }
    return line;
  }

  V* select_and_lock(T addr, bool& firstlock) {
    W64 dummy;
    return select_and_lock(addr, firstlock, dummy);
  }

  V* select_and_lock(T addr) { bool dummy; return select_and_lock(addr, dummy); }

  void unlock_all_and_invalidate() {
    if (__builtin_expect(!!(clearlist_exceeded), 0)) {
      for (size_t setid = 0; setid < (setcount); setid++) {
        Set& set = sets[setid];
        for (size_t wayid = 0; wayid < (waycount); wayid++) set.invalidate_way(wayid);
      }
    } else {
      for (size_t i = 0; i < (cleartail); i++) {
        ClearList& c = clearlist[i];




        Set& set = sets[c.set];
        V& line = set[c.way];
        set.invalidate_line(&line);
      }
    }
    cleartail = 0;
    clearlist_exceeded = 0;
# 1398 "./logic.h"
  }

  void unlock_all() {
    if (__builtin_expect(!!(clearlist_exceeded), 0)) {
      for (size_t setid = 0; setid < (setcount); setid++) {
        Set& set = sets[setid];
        for (size_t wayid = 0; wayid < (waycount); wayid++) set.unlock_way(wayid);
      }
    } else {
      for (size_t i = 0; i < (cleartail); i++) {
        ClearList& c = clearlist[i];




        Set& set = sets[c.set];
        V& line = set[c.way];
        set.unlock_line(&line);
      }
    }
    cleartail = 0;
    clearlist_exceeded = 0;
  }

  ostream& print(ostream& os) const {
    os << "LockableAssociativeArray<", setcount, " sets, ", waycount, " ways, ", linesize, "-byte lines>:", endl;
    for (size_t set = 0; set < (setcount); set++) {
      os << "  Set ", set, ":", endl;
      os << sets[set];
    }
    return os;
  }
};

template <typename T, typename V, int size, int ways, int linesize>
ostream& operator <<(ostream& os, const LockableCommitRollbackAssociativeArray<T, V, size, ways, linesize>& aa) {
  return aa.print(os);
}
# 1455 "./logic.h"
template <typename T, typename V, int setcount, int waycount, int linesize, int maxdirty, typename stats = NullAssociativeArrayStatisticsCollector<T, V> >
struct CommitRollbackCache: public LockableCommitRollbackAssociativeArray<T, V, setcount, waycount, linesize, stats> {
  typedef LockableCommitRollbackAssociativeArray<T, V, setcount, waycount, linesize, stats> array_t;

  struct BackupCacheLine {
    W64* addr;
    W64 data[linesize / sizeof(W64)];
  };

  BackupCacheLine stores[maxdirty];
  BackupCacheLine* storetail;

  CommitRollbackCache() {
    reset();
  }

  void reset() {
    array_t::reset();
    storetail = stores;
  }




  void invalidate_upwards(T addr);

  void invalidate(T addr) {
    array_t::invalidate(addr);
    invalidate_upwards(addr);
  }

  V* select_and_lock(T addr, T& oldaddr) {
    addr = floor(addr, linesize);

    bool firstlock;
    V* line = array_t::select_and_lock(addr, firstlock, oldaddr);
    if (!line) return __null;

    if (firstlock) {
      W64* linedata = (W64*)addr;
      storetail->addr = linedata;
      for (size_t i = 0; i < (lengthof(storetail->data)); i++) storetail->data[i] = linedata[i];
      storetail++;
    }

    return line;
  }

  V* select_and_lock(T addr) {
    T dummy;
    return select_and_lock(addr, dummy);
  }

  void commit() {
    array_t::unlock_all();
    storetail = stores;
  }

  void rollback() {
    array_t::unlock_all_and_invalidate();

    BackupCacheLine* cl = stores;
    while (cl < storetail) {
      W64* linedata = cl->addr;
      for (size_t i = 0; i < (lengthof(storetail->data)); i++) linedata[i] = cl->data[i];
      invalidate_upwards((W64)cl->addr);
      cl++;
    }
    storetail = stores;
  }

  void complete() { }
};

template <int size, int padsize = 0>
struct FullyAssociativeTags8bit {
  typedef vec16b vec_t;
  typedef byte base_t;

  static const int chunkcount = (size+15) / 16;
  static const int padchunkcount = (padsize+15) / 16;

  vec_t tags[chunkcount + padchunkcount] __attribute__ ((aligned (16)));
  bitvec<size> valid;

  W64 getvalid() { return valid.integer(); }

  FullyAssociativeTags8bit() {
    reset();
  }

  base_t operator [](int i) const {
    return ((base_t*)&tags)[i];
  }

  base_t& operator [](int i) {
    return ((base_t*)&tags)[i];
  }

  bool isvalid(int index) {
    return valid[index];
  }

  void reset() {
    valid = 0;
    W64* p = (W64*)&tags;
    for (size_t i = 0; i < (((chunkcount + padchunkcount)*16)/8); i++) p[i] = 0xffffffffffffffffLL;
  }

  static const vec_t prep(base_t tag) {
    return x86_sse_dupb(tag);
  }

  int insertslot(int idx, base_t tag) {
    valid[idx] = 1;
    (*this)[idx] = tag;
    return idx;
  }

  int insert(base_t tag) {
    if (valid.allset()) return -1;
    int idx = (~valid).lsb();
    return insertslot(idx, tag);
  }

  bitvec<size> match(const vec_t target) const {
    bitvec<size> m = 0;

    for (size_t i = 0; i < (chunkcount); i++) {
      m = m.accum(i*16, 16, x86_sse_pmovmskb(x86_sse_pcmpeqb(target, tags[i])));
    }

    return m & valid;
  }

  bitvec<size> match(base_t target) const {
    return match(prep(target));
  }

  bitvec<size> matchany(const vec_t target) const {
    bitvec<size> m = 0;

    vec_t zero = prep(0);

    for (size_t i = 0; i < (chunkcount); i++) {
      m = m.accum(i*16, 16, x86_sse_pmovmskb(x86_sse_pcmpeqb(x86_sse_pandb(tags[i], target), zero)));
    }

    return (~m) & valid;
  }

  bitvec<size> matchany(base_t target) const {
    return matchany(prep(target));
  }

  int search(const vec_t target) const {
    bitvec<size> bitmap = match(target);
    int idx = bitmap.lsb();
    if (!bitmap) idx = -1;
    return idx;
  }

  int extract(const vec_t target) {
    int idx = search(target);
    if (idx >= 0) valid[idx] = 0;
    return idx;
  }

  int search(base_t tag) const {
    return search(prep(tag));
  }

  bitvec<size> extract(base_t tag) {
    return extract(prep(tag));
  }

  void invalidateslot(int index) {
    valid[index] = 0;
  }

  const bitvec<size>& invalidatemask(const bitvec<size>& mask) {
    valid &= ~mask;
    return mask;
  }

  bitvec<size> invalidate(const vec_t target) {
    return invalidatemask(match(target));
  }

  bitvec<size> invalidate(base_t target) {
    return invalidate(prep(target));
  }

  void collapse(int index) {
    base_t* tagbase = (base_t*)&tags;
    base_t* base = tagbase + index;
    vec_t* dp = (vec_t*)base;
    vec_t* sp = (vec_t*)(base + sizeof(base_t));

    for (size_t i = 0; i < (chunkcount); i++) {
      x86_sse_stvbu(dp++, x86_sse_ldvbu(sp++));
    }

    valid = valid.remove(index);
  }

  void decrement(base_t amount = 1) {
    for (size_t i = 0; i < (chunkcount); i++) { tags[i] = x86_sse_psubusb(tags[i], prep(amount)); }
  }

  void increment(base_t amount = 1) {
    for (size_t i = 0; i < (chunkcount); i++) { tags[i] = x86_sse_paddusb(tags[i], prep(amount)); }
  }

  ostream& printid(ostream& os, int slot) const {
    int tag = (*this)[slot];
    if (valid[slot])
      os << intstring(tag, 3);
    else os << "???";
    return os;
  }

  ostream& print(ostream& os) const {
    for (size_t i = 0; i < (size); i++) {
      printid(os, i);
      os << " ";
    }
    return os;
  }
};

template <int size, int padsize>
ostream& operator <<(ostream& os, const FullyAssociativeTags8bit<size, padsize>& tags) {
  return tags.print(os);
}

template <int size, int padsize = 0>
struct FullyAssociativeTags16bit {
  typedef vec8w vec_t;
  typedef W16 base_t;

  static const int chunkcount = ((size*2)+15) / 16;
  static const int padchunkcount = ((padsize*2)+15) / 16;

  vec_t tags[chunkcount + padchunkcount] __attribute__ ((aligned (16)));
  bitvec<size> valid;

  W64 getvalid() { return valid.integer(); }

  FullyAssociativeTags16bit() {
    reset();
  }

  base_t operator [](int i) const {
    return ((base_t*)&tags)[i];
  }

  base_t& operator [](int i) {
    return ((base_t*)&tags)[i];
  }

  bool isvalid(int index) {
    return valid[index];
  }

  void reset() {
    valid = 0;
    W64* p = (W64*)&tags;
    for (size_t i = 0; i < (((chunkcount + padchunkcount)*16)/8); i++) p[i] = 0xffffffffffffffffLL;
  }

  static const vec_t prep(base_t tag) {
    return x86_sse_dupw(tag);
  }

  int insertslot(int idx, base_t tag) {
    valid[idx] = 1;
    (*this)[idx] = tag;
    return idx;
  }

  int insert(base_t tag) {
    if (valid.allset()) return -1;
    int idx = (~valid).lsb();
    return insertslot(idx, tag);
  }

  bitvec<size> match(const vec_t target) const {
    bitvec<size> m = 0;

    for (size_t i = 0; i < (chunkcount); i++) {
      m = m.accum(i*8, 8, x86_sse_pmovmskw(x86_sse_pcmpeqw(target, tags[i])));
    }

    return m & valid;
  }

  bitvec<size> match(base_t target) const {
    return match(prep(target));
  }

  bitvec<size> matchany(const vec_t target) const {
    bitvec<size> m = 0;

    vec_t zero = prep(0);

    for (size_t i = 0; i < (chunkcount); i++) {
      m = m.accum(i*8, 8, x86_sse_pmovmskw(x86_sse_pcmpeqw(x86_sse_pandw(tags[i], target), zero)));
    }

    return (~m) & valid;
  }

  bitvec<size> matchany(base_t target) const {
    return matchany(prep(target));
  }

  int search(const vec_t target) const {
    bitvec<size> bitmap = match(target);
    int idx = bitmap.lsb();
    if (!bitmap) idx = -1;
    return idx;
  }

  int extract(const vec_t target) {
    int idx = search(target);
    if (idx >= 0) valid[idx] = 0;
    return idx;
  }

  int search(base_t tag) const {
    return search(prep(tag));
  }

  bitvec<size> extract(base_t tag) {
    return extract(prep(tag));
  }

  void invalidateslot(int index) {
    valid[index] = 0;
  }

  const bitvec<size>& invalidatemask(const bitvec<size>& mask) {
    valid &= ~mask;
    return mask;
  }

  bitvec<size> invalidate(const vec_t target) {
    return invalidatemask(match(target));
  }

  bitvec<size> invalidate(base_t target) {
    return invalidate(prep(target));
  }

  void collapse(int index) {
    base_t* tagbase = (base_t*)&tags;
    base_t* base = tagbase + index;
    vec_t* dp = (vec_t*)base;
    vec_t* sp = (vec_t*)(base + 1);

    for (size_t i = 0; i < (chunkcount); i++) {
      x86_sse_stvwu(dp++, x86_sse_ldvwu(sp++));
    }

    valid = valid.remove(index);
  }

  void decrement(base_t amount = 1) {
    for (size_t i = 0; i < (chunkcount); i++) { tags[i] = x86_sse_psubusw(tags[i], prep(amount)); }
  }

  void increment(base_t amount = 1) {
    for (size_t i = 0; i < (chunkcount); i++) { tags[i] = x86_sse_paddusw(tags[i], prep(amount)); }
  }

  ostream& printid(ostream& os, int slot) const {
    int tag = (*this)[slot];
    if (valid[slot])
      os << intstring(tag, 3);
    else os << "???";
    return os;
  }

  ostream& print(ostream& os) const {
    for (size_t i = 0; i < (size); i++) {
      printid(os, i);
      os << " ";
    }
    return os;
  }
};

template <int size, int padsize>
ostream& operator <<(ostream& os, const FullyAssociativeTags16bit<size, padsize>& tags) {
  return tags.print(os);
}
# 171 "./ptlhwdef.h" 2
# 1 "./config.h" 1
# 15 "./config.h"
static const W64 infinity = limits<W64s>::max;

struct ConfigurationOption {
  const char* name;
  const char* description;
  int type;
  int fieldsize;
  Waddr offset;

  ConfigurationOption* next;

  ConfigurationOption() { }

  ConfigurationOption(const char* name, const char* description, int type, Waddr offset, int fieldsize = 0) {
    this->name = name;
    this->description = description;
    this->type = type;
    this->offset = offset;
    this->fieldsize = fieldsize;
    this->next = __null;
  }
};

enum {
  OPTION_TYPE_NONE = 0,
  OPTION_TYPE_W64 = 1,
  OPTION_TYPE_FLOAT = 2,
  OPTION_TYPE_STRING = 3,
  OPTION_TYPE_TRAILER = 4,
  OPTION_TYPE_BOOL = 5,
  OPTION_TYPE_SECTION = -1
};

struct ConfigurationParserBase {
  ConfigurationOption* options;
  ConfigurationOption* lastoption;

  void addentry(void* baseptr, void* field, int type, const char* name, const char* description) {
    Waddr offset = ((Waddr)field) - ((Waddr)baseptr);
    ConfigurationOption* option = new ConfigurationOption(name, description, type, offset);
    if (lastoption) lastoption->next = option;
    if (!options) options = option;
    lastoption = option;
  }

  ConfigurationParserBase() { options = __null; lastoption = __null; }

  int parse(void* baseptr, int argc, char* argv[]);
  int parse(void* baseptr, char* argstr);
  ostream& printusage(const void* baseptr, ostream& os) const;
  ostream& print(const void* baseptr, ostream& os) const;
};

template <typename T>
struct ConfigurationParser: public T {
  ConfigurationParserBase options;

  ConfigurationParser() { }

  void add(W64& field, const char* name, const char* description) {
    options.addentry(this, &field, OPTION_TYPE_W64, name, description);
  }

  void add(double& field, const char* name, const char* description) {
    options.addentry(this, &field, OPTION_TYPE_FLOAT, name, description);
  }

  void add(bool& field, const char* name, const char* description) {
    options.addentry(this, &field, OPTION_TYPE_BOOL, name, description);
  }

  void add(stringbuf& field, const char* name, const char* description) {
    options.addentry(this, field, OPTION_TYPE_STRING, name, description);
  }

  void section(const char* name) {
    options.addentry(this, __null, OPTION_TYPE_SECTION, name, name);
  }

  int parse(T& config, int argc, char* argv[]) {
    return options.parse(&config, argc, argv);
  }

  int parse(T& config, char* argstr) {
    return options.parse(&config, argstr);
  }

  ostream& print(ostream& os, const T& config) {
    return options.print(&config, os);
  }

  ostream& printusage(ostream& os, const T& config) {
    return options.printusage(&config, os);
  }


  void setup();
};

void expand_command_list(dynarray<char*>& list, int argc, char** argv, int depth = 0);
void expand_command_list(dynarray<char*>& list, char* args, int depth = 0);
void free_command_list(dynarray<char*>& list);
# 172 "./ptlhwdef.h" 2





enum {
  EXCEPTION_NoException = 0,
  EXCEPTION_Propagate,
  EXCEPTION_BranchMispredict,
  EXCEPTION_UnalignedAccess,
  EXCEPTION_PageFaultOnRead,
  EXCEPTION_PageFaultOnWrite,
  EXCEPTION_PageFaultOnExec,
  EXCEPTION_StoreStoreAliasing,
  EXCEPTION_LoadStoreAliasing,
  EXCEPTION_CheckFailed,
  EXCEPTION_SkipBlock,
  EXCEPTION_LFRQFull,
  EXCEPTION_FloatingPoint,
  EXCEPTION_FloatingPointNotAvailable,
  EXCEPTION_DivideOverflow,
  EXCEPTION_COUNT
};

static const int MAX_BB_BYTES = 127;
static const int MAX_BB_X86_INSNS = 60;
static const int MAX_BB_UOPS = 63;
static const int MAX_BB_PER_PAGE = 4096;

static const int MAX_TRANSOPS_PER_USER_INSN = 16;

extern const char* exception_names[EXCEPTION_COUNT];

static inline const char* exception_name(W64 exception) {
  return (exception < EXCEPTION_COUNT) ? exception_names[exception] : "Unknown";
}
# 217 "./ptlhwdef.h"
struct Context;

struct RIPVirtPhysBase {
  W64 rip;
  W64 mfnlo:28, use64:1, kernel:1, padlo:2, mfnhi:28, df:1, padhi:3;


  static const Waddr INVALID = 0xfffffff;

  ostream& print(ostream& os) const;
};

struct RIPVirtPhys: public RIPVirtPhysBase {
  operator W64() const { return rip; }

  RIPVirtPhys() { }
  RIPVirtPhys(W64 rip) { this->rip = rip; }

  RIPVirtPhys(Waddr rip, Waddr mfnlo, Waddr mfnhi, bool use64, bool kernelmode);


  RIPVirtPhys& update(Context& ctx, int bytes = 4096);


  bool operator ==(const RIPVirtPhys& b) const {






    return (rip == b.rip);

  }
};

static inline ostream& operator <<(ostream& os, const RIPVirtPhysBase& rvp) { return rvp.print(os); }
static inline ostream& operator <<(ostream& os, const RIPVirtPhys& rvp) { return rvp.print(os); }
# 265 "./ptlhwdef.h"
struct SFR {
  W64 data;
  W64 addrvalid:1, invalid:1, datavalid:1, physaddr:45, bytemask:8, tag:8;
};

stringbuf& operator <<(stringbuf& sb, const SFR& sfr);

inline ostream& operator <<(ostream& os, const SFR& sfr) {
  stringbuf sb;
  sb << sfr;
  return os << sb;
}

struct IssueState {
  union {
    struct {
      W64 rddata;
      W64 addr:48, rdflags:16;
    } reg;

    struct {
      W64 rddata;
      W64 physaddr:48, flags:8, lfrqslot:8;
    } ldreg;

    struct {
      W64 riptaken;
      W64 ripseq;
    } brreg;

    SFR st;
  };
};

ostream& operator <<(ostream& os, const IssueState& ctx);

struct IssueInput {
  W64 ra;
  W64 rb;
  W64 rc;
  W16 raflags;
  W16 rbflags;
  W16 rcflags;
};

typedef W64 UserContext[64];

ostream& operator <<(ostream& os, const UserContext& ctx);

typedef byte X87Reg[10];

struct X87StatusWord {
  W16 ie:1, de:1, ze:1, oe:1, ue:1, pe:1, sf:1, es:1, c0:1, c1:1, c2:1, tos:3, c3:1, b:1;

  X87StatusWord() { }
  X87StatusWord(const W16& w) { *((W16*)this) = w; }
  operator W16() const { return *((W16*)this); }
};

struct X87ControlWord {
  W16 im:1, dm:1, zm:1, om:1, um:1, pm:1, res1:2, pc:2, rc:2, y:1, res2:3;

  X87ControlWord() { }
  X87ControlWord(const W16& w) { *((W16*)this) = w; }
  operator W16() const { return *((W16*)this); }
};

struct X87State {
  X87ControlWord cw;
  W16 reserved1;
  X87StatusWord sw;
  W16 reserved2;
  W16 tw;
  W16 reserved3;
  W32 eip;
  W16 cs;
  W16 opcode;
  W32 dataoffs;
  W16 ds;
  W16 reserved4;
  X87Reg stack[8];
};

union SSEType {
  double d;
  struct { float lo, hi; } f;
  W64 w64;
  struct { W32 lo, hi; } w32;

  SSEType() { }
  SSEType(W64 w) { w64 = w; }
  operator W64() const { return w64; }
};

struct X87RegPadded {
  X87Reg reg;
  byte pad[6];
} __attribute__ ((packed));

struct XMMReg {
  W64 lo, hi;
};

struct FXSAVEStruct {
  X87ControlWord cw;
  X87StatusWord sw;
  W16 tw;
  W16 fop;
  union {
    struct {
      W32 eip;
      W16 cs;
      W16 reserved1;
      W32 dp;
      W16 ds;
      W16 reserved2;
    } use32;
    struct {
      W64 rip;
      W64 rdp;
    } use64;
  };
  W32 mxcsr;
  W32 mxcsr_mask;
  X87RegPadded fpregs[8];
  XMMReg xmmregs[16];
};

inline W64 x87_fp_80bit_to_64bit(const X87Reg* x87reg) {
  W64 reg64;
  asm("fldt (%[mem80])\n"
      "fstpl %[mem64]\n"
      : : [mem64] "m" (reg64), [mem80] "r" (x87reg));
  return reg64;
}

inline void x87_fp_64bit_to_80bit(X87Reg* x87reg, W64 reg64) {
  asm("fldl %[mem64]\n"
      "fstpt (%[mem80])\n"
      : : [mem80] "r" (*x87reg), [mem64] "m" (reg64) : "memory");
}

inline void cpu_fsave(X87State& state) {
  asm volatile("fsave %[state]" : [state] "=m" (*&state));
}

inline void cpu_frstor(X87State& state) {
  asm volatile("frstor %[state]" : : [state] "m" (*&state));
}

inline W16 cpu_get_fpcw() {
  W16 fpcw;
  asm volatile("fstcw %[fpcw]" : [fpcw] "=m" (fpcw));
  return fpcw;
}

inline void cpu_set_fpcw(W16 fpcw) {
  asm volatile("fldcw %[fpcw]" : : [fpcw] "m" (fpcw));
}

struct SegmentDescriptor {
 W16 limit0;
 W16 base0;
 W16 base1:8, type:4, s:1, dpl:2, p:1;
 W16 limit:4, avl:1, l:1, d:1, g:1, base2:8;

  SegmentDescriptor() { }
  SegmentDescriptor(W64 rawbits) { *((W64*)this) = rawbits; }
  operator W64() const { return *((W64*)this); }

  void setbase(W64 addr) {
    (static_cast<void> (((__builtin_expect(!!((addr >> 32) == 0), 0))) ? 0 : (assert_fail ("(addr >> 32) == 0", "./ptlhwdef.h", 436, __PRETTY_FUNCTION__), 0)));
    base0 = (((addr) >> (0)) & (((16) == 64) ? (W64)(-1LL) : ((1LL << (16))-1LL)));
    base1 = (((addr) >> (16)) & (((8) == 64) ? (W64)(-1LL) : ((1LL << (8))-1LL)));
    base2 = (((addr) >> (24)) & (((8) == 64) ? (W64)(-1LL) : ((1LL << (8))-1LL)));
  }

  W64 getbase() const {
    return base0 + (base1 << 16) + (base2 << 24);
  }

  void setlimit(W64 size) {
    g = (size >= (1 << 20));
    if (__builtin_expect(!!(g), 1)) size = ceil(size, 4096) >> 12;
    limit0 = (((size) >> (0)) & (((16) == 64) ? (W64)(-1LL) : ((1LL << (16))-1LL)));
    limit = (((size) >> (16)) & (((4) == 64) ? (W64)(-1LL) : ((1LL << (4))-1LL)));
  }

  W64 getlimit() const {
    W64 size = limit0 + (limit << 16);
    if (__builtin_expect(!!(g), 1)) size <<= 12;
    return size;
  }
} __attribute__ ((packed));


enum { SEGID_ES = 0, SEGID_CS = 1, SEGID_SS = 2, SEGID_DS = 3, SEGID_FS = 4, SEGID_GS = 5, SEGID_COUNT = 6 };

ostream& operator <<(ostream& os, const SegmentDescriptor& seg);

struct SegmentDescriptorCache {
  W32 selector;
  W32 present:1, use64:1, use32:1, supervisor:1, dpl:2;
  W64 base;
  W64 limit;

  SegmentDescriptorCache() { }


  SegmentDescriptorCache& operator =(const SegmentDescriptor& desc) {
    present = desc.p;
    use64 = desc.l;
    use32 = desc.d;
    supervisor = desc.s;
    dpl = desc.dpl;
    base = desc.getbase();
    limit = desc.getlimit();

    return *this;
  }


  void flatten() {
    present = 1;
    use64 = 1;
    use32 = 0;
    supervisor = 0;
    dpl = 3;
    base = 0;
    limit = 0xffffffffffffffffULL;
  }
};

ostream& operator <<(ostream& os, const SegmentDescriptorCache& seg);




enum {
  EXCEPTION_x86_divide = 0,
  EXCEPTION_x86_debug = 1,
  EXCEPTION_x86_nmi = 2,
  EXCEPTION_x86_breakpoint = 3,
  EXCEPTION_x86_overflow = 4,
  EXCEPTION_x86_bounds = 5,
  EXCEPTION_x86_invalid_opcode = 6,
  EXCEPTION_x86_fpu_not_avail = 7,
  EXCEPTION_x86_double_fault = 8,
  EXCEPTION_x86_coproc_overrun = 9,
  EXCEPTION_x86_invalid_tss = 10,
  EXCEPTION_x86_seg_not_present = 11,
  EXCEPTION_x86_stack_fault = 12,
  EXCEPTION_x86_gp_fault = 13,
  EXCEPTION_x86_page_fault = 14,
  EXCEPTION_x86_spurious_int = 15,
  EXCEPTION_x86_fpu = 16,
  EXCEPTION_x86_unaligned = 17,
  EXCEPTION_x86_machine_check = 18,
  EXCEPTION_x86_sse = 19,
  EXCEPTION_x86_count = 20,
};

extern const char* x86_exception_names[256];

struct PageFaultErrorCode {
  byte p:1, rw:1, us:1, rsv:1, nx:1, pad:3;
  PageFaultErrorCode() { } PageFaultErrorCode(byte rawbits) { *((byte*)this) = rawbits; } operator byte() const { return *((byte*)this); };
};

ostream& operator <<(ostream& os, const PageFaultErrorCode& pfec);
# 547 "./ptlhwdef.h"
struct PTEUpdateBase {
  byte a:1, d:1, ptwrite:1, pad:5;
};

struct PTEUpdate: public PTEUpdateBase {
  PTEUpdate() { } PTEUpdate(byte rawbits) { *((byte*)this) = rawbits; } operator byte() const { return *((byte*)this); };
};
# 746 "./ptlhwdef.h"
typedef W64 Level1PTE;
# 762 "./ptlhwdef.h"
struct ContextBase {
  W64 commitarf[64];
  int vcpuid;
  SegmentDescriptorCache seg[SEGID_COUNT];
  W64 swapgs_base;

  W64 fpstack[8];
  X87ControlWord fpcw;
  MXCSR mxcsr;

  byte use32;
  byte use64;

  Waddr virt_addr_mask;
  W64 exception;
  Waddr error_code;

  W32 internal_eflags;
# 835 "./ptlhwdef.h"
  byte running;


  inline void reset() {
    setzero(commitarf);





    exception = 0;
  }
};


struct Context: public ContextBase {
  byte padding[4096 - sizeof(ContextBase)];

  void propagate_x86_exception(byte exception, W32 errorcode = 0, Waddr virtaddr = 0);

  Waddr check_and_translate(Waddr virtaddr, int sizeshift, bool store, bool internal, int& exception, PageFaultErrorCode& pfec, PTEUpdate& pteupdate, Level1PTE& pteused);

  Waddr check_and_translate(Waddr virtaddr, int sizeshift, bool store, bool internal, int& exception, PageFaultErrorCode& pfec, PTEUpdate& pteupdate) {
    Level1PTE dummy;
    return check_and_translate(virtaddr, sizeshift, store, internal, exception, pfec, pteupdate, dummy);
  }

  int copy_to_user(Waddr target, void* source, int bytes, PageFaultErrorCode& pfec, Waddr& faultaddr);

  int copy_from_user(void* target, Waddr source, int bytes, PageFaultErrorCode& pfec, Waddr& faultaddr, bool forexec, Level1PTE& ptelo, Level1PTE& ptehi);

  int copy_from_user(void* target, Waddr source, int bytes, PageFaultErrorCode& pfec, Waddr& faultaddr, bool forexec = false) {
    Level1PTE ptelo;
    Level1PTE ptehi;
    return copy_from_user(target, source, bytes, pfec, faultaddr, forexec, ptelo, ptehi);
  }

  int copy_from_user(void* target, Waddr source, int bytes) {
    PageFaultErrorCode pfec;
    Waddr faultaddr;
    return copy_from_user(target, source, bytes, pfec, faultaddr, false);
  }

  int copy_to_user(Waddr target, void* source, int bytes) {
    PageFaultErrorCode pfec;
    Waddr faultaddr;
    return copy_to_user(target, source, bytes, pfec, faultaddr);
  }

  int write_segreg(unsigned int segid, W16 selector);
  void reload_segment_descriptor(unsigned int segid, W16 selector);
  void swapgs();
  void init();
  void fxsave(FXSAVEStruct& state);
  void fxrstor(const FXSAVEStruct& state);

  Context() { }
# 928 "./ptlhwdef.h"
  void update_pte_acc_dirty(W64 rawvirt, const PTEUpdate& update) { }
  void update_shadow_segment_descriptors();

};

ostream& operator <<(ostream& os, const Context& ctx);


extern Context ctx;



enum {
  FLAG_TF = (1 << 8),
  FLAG_IF = (1 << 9),
  FLAG_DF = (1 << 10),
  FLAG_IOPL = (1 << 12) | (1 << 13),
  FLAG_NT = (1 << 14),
  FLAG_RF = (1 << 16),
  FLAG_VM = (1 << 17),
  FLAG_AC = (1 << 18),
  FLAG_VIF = (1 << 19),
  FLAG_VIP = (1 << 20),
  FLAG_ID = (1 << 21),
  FLAG_COUNT = 22,
};
# 1009 "./ptlhwdef.h"
extern const char* opclass_names[28];





enum {
  OP_nop,
  OP_mov,

  OP_and,
  OP_andnot,
  OP_xor,
  OP_or,
  OP_nand,
  OP_ornot,
  OP_eqv,
  OP_nor,

  OP_maskb,

  OP_add,
  OP_sub,
  OP_adda,
  OP_suba,
  OP_addm,
  OP_subm,

  OP_andcc,
  OP_orcc,
  OP_xorcc,
  OP_ornotcc,

  OP_movccr,
  OP_movrcc,
  OP_collcc,

  OP_shls,
  OP_shrs,
  OP_bswap,
  OP_sars,

  OP_bt,
  OP_bts,
  OP_btr,
  OP_btc,

  OP_set,
  OP_set_sub,
  OP_set_and,
  OP_sel,
  OP_sel_cmp,

  OP_br,
  OP_br_sub,
  OP_br_and,
  OP_jmp,
  OP_bru,
  OP_jmpp,
  OP_brp,

  OP_chk,
  OP_chk_sub,
  OP_chk_and,

  OP_ld,
  OP_ldx,
  OP_ld_pre,
  OP_st,
  OP_mf,

  OP_shl,
  OP_shr,
  OP_mask,
  OP_sar,
  OP_rotl,
  OP_rotr,
  OP_rotcl,
  OP_rotcr,

  OP_mull,
  OP_mulh,
  OP_mulhu,
  OP_mulhl,

  OP_ctz,
  OP_clz,
  OP_ctpop,
  OP_permb,

  OP_div,
  OP_rem,
  OP_divs,
  OP_rems,

  OP_min,
  OP_max,
  OP_min_s,
  OP_max_s,

  OP_fadd,
  OP_fsub,
  OP_fmul,
  OP_fmadd,
  OP_fmsub,
  OP_fmsubr,
  OP_fdiv,
  OP_fsqrt,
  OP_frcp,
  OP_frsqrt,
  OP_fmin,
  OP_fmax,
  OP_fcmp,
  OP_fcmpcc,
  OP_fcvt_i2s_ins,
  OP_fcvt_i2s_p,
  OP_fcvt_i2d_lo,
  OP_fcvt_i2d_hi,
  OP_fcvt_q2s_ins,
  OP_fcvt_q2d,
  OP_fcvt_s2i,
  OP_fcvt_s2q,
  OP_fcvt_s2i_p,
  OP_fcvt_d2i,
  OP_fcvt_d2q,
  OP_fcvt_d2i_p,
  OP_fcvt_d2s_ins,
  OP_fcvt_d2s_p,
  OP_fcvt_s2d_lo,
  OP_fcvt_s2d_hi,


  OP_vadd,
  OP_vsub,
  OP_vadd_us,
  OP_vsub_us,
  OP_vadd_ss,
  OP_vsub_ss,
  OP_vshl,
  OP_vshr,
  OP_vbt,
  OP_vsar,
  OP_vavg,
  OP_vcmp,
  OP_vmin,
  OP_vmax,
  OP_vmin_s,
  OP_vmax_s,
  OP_vmull,
  OP_vmulh,
  OP_vmulhu,
  OP_vmaddp,
  OP_vsad,
  OP_vpack_us,
  OP_vpack_ss,
  OP_MAX_OPCODE,
};




struct OpcodeInfo {
  const char* name;
  W32 opclass;
  W16 flagops;
};
# 1197 "./ptlhwdef.h"
extern const OpcodeInfo opinfo[OP_MAX_OPCODE];

inline bool isclass(int opcode, W32 opclass) { return ((opinfo[opcode].opclass & opclass) != 0); }
inline int opclassof(int opcode) { return lsbindex(opinfo[opcode].opclass); }

inline bool isload(int opcode) { return isclass(opcode, (1 << 11)); }
inline bool isprefetch(int opcode) { return isclass(opcode, (1 << 13)); }
inline bool isstore(int opcode) { return isclass(opcode, (1 << 12)); }
inline bool iscondbranch(int opcode) { return isclass(opcode, (1 << 6)|(1 << 7)); }
inline bool isbranch(int opcode) { return isclass(opcode, ((1 << 6)|(1 << 7)|(1 << 8)|(1 << 9))); }
inline bool isbarrier(int opcode) { return isclass(opcode, ((1 << 9))); }
inline const char* nameof(int opcode) { return (opcode < OP_MAX_OPCODE) ? opinfo[opcode].name : "INVALID"; }

union MaskControlInfo {
  struct { W32 ms:6, mc:6, ds:6; } info;
  W32 data;

  MaskControlInfo() { }

  MaskControlInfo(W32 data) { this->data = data; }

  MaskControlInfo(int ms, int mc, int ds) {
    this->info.ms = ms;
    this->info.mc = mc;
    this->info.ds = ds;
  }

  operator W32() const { return data; }
};





union PermbControlInfo {
  struct { W32 b0:4, b1:4, b2:4, b3:4, b4:4, b5:4, b6:4, b7:4; } info;
  W32 data;

  PermbControlInfo() { }

  PermbControlInfo(W32 data) { this->data = data; }

  PermbControlInfo(int b7, int b6, int b5, int b4, int b3, int b2, int b1, int b0) {
    info.b0 = b0;
    info.b1 = b1;
    info.b2 = b2;
    info.b3 = b3;
    info.b4 = b4;
    info.b5 = b5;
    info.b6 = b6;
    info.b7 = b7;
  }

  operator W32() const { return data; }
};


static inline W32 make_mask_control_info(int ms, int mc, int ds) {
  return (ms) | (mc << 6) | (ds << 12);
}
# 1266 "./ptlhwdef.h"
inline int invert_cond(int cond) {

  return (cond ^ 1);
}

extern const char* arch_reg_names[(64+16)];

extern const char* cond_code_names[16];






struct CondCodeToFlagRegs {
  byte req2, ra, rb;
};

extern const CondCodeToFlagRegs cond_code_to_flag_regs[16];

enum {
  SETFLAG_ZF = (1 << 0),
  SETFLAG_CF = (1 << 1),
  SETFLAG_OF = (1 << 2),
  SETFLAG_COUNT = 3
};

extern const char* setflag_names[SETFLAG_COUNT];
extern const char* x86_flag_names[32];
extern const W16 setflags_to_x86_flags[1<<3];






enum {
  DATATYPE_INT, DATATYPE_FLOAT, DATATYPE_VEC_FLOAT,
  DATATYPE_DOUBLE, DATATYPE_VEC_DOUBLE,
  DATATYPE_VEC_8BIT, DATATYPE_VEC_16BIT,
  DATATYPE_VEC_32BIT, DATATYPE_VEC_64BIT,
  DATATYPE_VEC_128BIT, DATATYPE_COUNT
};
extern const char* datatype_names[DATATYPE_COUNT];

struct TransOpBase {

  byte opcode;

  byte size:2, extshift:2, unaligned:1;

  byte cond:4, setflags:3, nouserflags:1;

  byte internal:1, locked:1, cachelevel:2, datatype:4;

  byte bytes:4, som:1, eom:1, is_sse:1, is_x87:1;

  byte rd, ra, rb, rc;

  byte bbindex;

  byte final_insn_in_bb:1, final_arch_in_insn:1, final_flags_in_insn:1, any_flags_in_insn:1, pad:3, marked:1;

  W64s rbimm;
  W64s rcimm;
  W64 riptaken;
  W64 ripseq;
};

struct TransOp: public TransOpBase {
  TransOp() { }

  TransOp(int opcode, int rd, int ra, int rb, int rc, int size, W64s rbimm = 0, W64s rcimm = 0, W32 setflags = 0, int memid = 0) {
    init(opcode, rd, ra, rb, rc, size, rbimm, rcimm, setflags, memid);
  }

  void init(int opcode, int rd, int ra, int rb, int rc, int size, W64s rbimm = 0, W64s rcimm = 0, W32 setflags = 0, int memid = 0) {
    setzero(*this);
    this->opcode = opcode;
    this->rd = rd;
    this->ra = ra;
    this->rb = rb;
    this->rc = rc;
    this->size = size;
    this->rbimm = rbimm;
    this->rcimm = rcimm;
    this->setflags = setflags;
  }
};

enum { LDST_ALIGN_NORMAL, LDST_ALIGN_LO, LDST_ALIGN_HI };

ostream& operator <<(ostream& os, const TransOpBase& op);
stringbuf& operator <<(stringbuf& os, const TransOpBase& op);

struct BasicBlock;

typedef void (*uopimpl_func_t)(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags);
# 1385 "./ptlhwdef.h"
typedef shortptr<BasicBlock> BasicBlockPtr;


struct BasicBlockChunkList: public ChunkList<BasicBlockPtr, 60> {
  selflistlink hashlink;
  W64 mfn;
  int refcount;

  BasicBlockChunkList(): ChunkList<BasicBlockPtr, 60>() { refcount = 0; }
  BasicBlockChunkList(W64 mfn): ChunkList<BasicBlockPtr, 60>() { this->mfn = mfn; refcount = 0; }
};

enum { BB_TYPE_COND, BB_TYPE_UNCOND, BB_TYPE_INDIR, BB_TYPE_ASSIST, BB_TYPE_COUNT };
extern const char* bb_type_names[BB_TYPE_COUNT];
# 1439 "./ptlhwdef.h"
enum {
  BRTYPE_BRU_IMM8 = 0,
  BRTYPE_BRU_IMM32 = 1,
  BRTYPE_BR_IMM8 = 2,
  BRTYPE_BR_IMM32 = 3,
  BRTYPE_BARRIER = 4,
  BRTYPE_SPLIT = 5,
  BRTYPE_REP = 6,
  BRTYPE_JMP = 7
};

static const char* branch_type_names[8] = {
  "bru8",
  "bru32",
  "br8",
  "br32",
  "asist",
  "split",
  "rep",
  "jmp"
};


struct BasicBlockBase {
  RIPVirtPhys rip;
  selflistlink hashlink;
  BasicBlockChunkList::Locator mfnlo_loc;
  BasicBlockChunkList::Locator mfnhi_loc;
  W64 rip_taken;
  W64 rip_not_taken;
  W16 count;
  W16 bytes;
  W16 user_insn_count;
  W16 tagcount;
  W16 memcount;
  W16 storecount;
  byte type:4, repblock:1, invalidblock:1, call:1, ret:1;
  byte marked:1, mfence:1, x87:1, sse:1, nondeterministic:1, brtype:3;
  W64 usedregs;
  uopimpl_func_t* synthops;
  int refcount;
  W32 hitcount;
  W32 predcount;
  W32 confidence;
  W64 lastused;
  W64 lasttarget;

  void acquire() {
    refcount++;
  }

  bool release() {
    refcount--;
    (static_cast<void> (((__builtin_expect(!!(refcount >= 0), 0))) ? 0 : (assert_fail ("refcount >= 0", "./ptlhwdef.h", 1492, __PRETTY_FUNCTION__), 0)));
    return (!refcount);
  }
};

struct BasicBlock: public BasicBlockBase {
  TransOp transops[MAX_BB_UOPS*2];

  void reset();
  void reset(const RIPVirtPhys& rip);
  BasicBlock* clone();
  void free();
  void use(W64 counter) { lastused = counter; };
};

ostream& operator <<(ostream& os, const BasicBlock& bb);




stringbuf& nameof(stringbuf& sbname, const TransOpBase& uop);

char* regname(int r);

stringbuf& print_value_and_flags(stringbuf& sb, W64 value, W16 flags);

struct flagstring {
  W64 bits;
  int n;
  bool reverse;

  flagstring() { }

  flagstring(const W64 bits) {
    this->bits = bits;
  }
};

static inline ostream& operator <<(ostream& os, const flagstring& bs) {
  for (int i = 31; i >= 0; i--) {
    if ((((bs.bits) >> (i)) & 1)) os << x86_flag_names[i];
  }

  return os;
}

static inline stringbuf& operator <<(stringbuf& sb, const flagstring& bs) {
  for (int i = 31; i >= 0; i--) {
    if ((((bs.bits) >> (i)) & 1)) sb << x86_flag_names[i];
  }

  return sb;
}

typedef void (*assist_func_t)(Context& ctx);

const char* assist_name(assist_func_t func);
int assist_index(assist_func_t func);
# 14 "./kernel.h" 2
# 1 "/usr/include/elf.h" 1 3 4
# 26 "/usr/include/elf.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stdint.h" 1 3 4


# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 49 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 66 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 91 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 104 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 123 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 4 "/usr/lib/gcc/x86_64-redhat-linux/4.6.3/include/stdint.h" 2 3 4
# 31 "/usr/include/elf.h" 2 3 4


typedef uint16_t Elf32_Half;
typedef uint16_t Elf64_Half;


typedef uint32_t Elf32_Word;
typedef int32_t Elf32_Sword;
typedef uint32_t Elf64_Word;
typedef int32_t Elf64_Sword;


typedef uint64_t Elf32_Xword;
typedef int64_t Elf32_Sxword;
typedef uint64_t Elf64_Xword;
typedef int64_t Elf64_Sxword;


typedef uint32_t Elf32_Addr;
typedef uint64_t Elf64_Addr;


typedef uint32_t Elf32_Off;
typedef uint64_t Elf64_Off;


typedef uint16_t Elf32_Section;
typedef uint16_t Elf64_Section;


typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;






typedef struct
{
  unsigned char e_ident[(16)];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[(16)];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;
# 270 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct
{
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 379 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Section st_shndx;
} Elf32_Sym;

typedef struct
{
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Section st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct
{
  Elf32_Half si_boundto;
  Elf32_Half si_flags;
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto;
  Elf64_Half si_flags;
} Elf64_Syminfo;
# 494 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;






typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;



typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;
# 539 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct
{
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 633 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Sword d_tag;
  union
    {
      Elf32_Word d_val;
      Elf32_Addr d_ptr;
    } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword d_tag;
  union
    {
      Elf64_Xword d_val;
      Elf64_Addr d_ptr;
    } d_un;
} Elf64_Dyn;
# 800 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Half vd_version;
  Elf32_Half vd_flags;
  Elf32_Half vd_ndx;
  Elf32_Half vd_cnt;
  Elf32_Word vd_hash;
  Elf32_Word vd_aux;
  Elf32_Word vd_next;

} Elf32_Verdef;

typedef struct
{
  Elf64_Half vd_version;
  Elf64_Half vd_flags;
  Elf64_Half vd_ndx;
  Elf64_Half vd_cnt;
  Elf64_Word vd_hash;
  Elf64_Word vd_aux;
  Elf64_Word vd_next;

} Elf64_Verdef;
# 842 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word vda_name;
  Elf32_Word vda_next;

} Elf32_Verdaux;

typedef struct
{
  Elf64_Word vda_name;
  Elf64_Word vda_next;

} Elf64_Verdaux;




typedef struct
{
  Elf32_Half vn_version;
  Elf32_Half vn_cnt;
  Elf32_Word vn_file;

  Elf32_Word vn_aux;
  Elf32_Word vn_next;

} Elf32_Verneed;

typedef struct
{
  Elf64_Half vn_version;
  Elf64_Half vn_cnt;
  Elf64_Word vn_file;

  Elf64_Word vn_aux;
  Elf64_Word vn_next;

} Elf64_Verneed;
# 889 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word vna_hash;
  Elf32_Half vna_flags;
  Elf32_Half vna_other;
  Elf32_Word vna_name;
  Elf32_Word vna_next;

} Elf32_Vernaux;

typedef struct
{
  Elf64_Word vna_hash;
  Elf64_Half vna_flags;
  Elf64_Half vna_other;
  Elf64_Word vna_name;
  Elf64_Word vna_next;

} Elf64_Vernaux;
# 923 "/usr/include/elf.h" 3 4
typedef struct
{
  uint32_t a_type;
  union
    {
      uint32_t a_val;



    } a_un;
} Elf32_auxv_t;

typedef struct
{
  uint64_t a_type;
  union
    {
      uint64_t a_val;



    } a_un;
} Elf64_auxv_t;
# 1007 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 1071 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Xword m_value;
  Elf32_Word m_info;
  Elf32_Word m_poffset;
  Elf32_Half m_repeat;
  Elf32_Half m_stride;
} Elf32_Move;

typedef struct
{
  Elf64_Xword m_value;
  Elf64_Xword m_info;
  Elf64_Xword m_poffset;
  Elf64_Half m_repeat;
  Elf64_Half m_stride;
} Elf64_Move;
# 1453 "/usr/include/elf.h" 3 4
typedef union
{
  struct
    {
      Elf32_Word gt_current_g_value;
      Elf32_Word gt_unused;
    } gt_header;
  struct
    {
      Elf32_Word gt_g_value;
      Elf32_Word gt_bytes;
    } gt_entry;
} Elf32_gptab;



typedef struct
{
  Elf32_Word ri_gprmask;
  Elf32_Word ri_cprmask[4];
  Elf32_Sword ri_gp_value;
} Elf32_RegInfo;



typedef struct
{
  unsigned char kind;

  unsigned char size;
  Elf32_Section section;

  Elf32_Word info;
} Elf_Options;
# 1529 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word hwp_flags1;
  Elf32_Word hwp_flags2;
} Elf_Options_Hw;
# 1690 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word l_name;
  Elf32_Word l_time_stamp;
  Elf32_Word l_checksum;
  Elf32_Word l_version;
  Elf32_Word l_flags;
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name;
  Elf64_Word l_time_stamp;
  Elf64_Word l_checksum;
  Elf64_Word l_version;
  Elf64_Word l_flags;
} Elf64_Lib;
# 1721 "/usr/include/elf.h" 3 4
typedef Elf32_Addr Elf32_Conflict;
# 2794 "/usr/include/elf.h" 3 4
}
# 15 "./kernel.h" 2

struct PTLsimConfig;

extern PTLsimConfig config;

extern ConfigurationParser<PTLsimConfig> configparser;




typedef W64 (*simcall_func_t)(W64 arg1, W64 arg2, W64 arg3, W64 arg4, W64 arg5, W64 arg6);

struct ThreadState {
  ThreadState* self;
  void* stack;
  simcall_func_t simcall;
};

extern ThreadState basetls;

static inline ThreadState* getcurrent() {
  return &basetls;
}

void early_printk(const char* text);


void init_kernel();





typedef Elf64_auxv_t native_auxv_t;




const char* get_full_exec_filename();
native_auxv_t* find_auxv_entry(int type);

void switch_stack_and_jump_32_or_64(void* code, void* stack, bool use64);
void switch_to_native_restore_context();
void set_switch_to_sim_breakpoint(void* addr);
void enable_ptlsim_call_gate();
void disable_ptlsim_call_gate();

int ptlsim_inject(int argc, char** argv);




void init_signal_callback();
void remove_signal_callback();

extern bool running_in_sim_mode;
# 96 "./kernel.h"
class AddressSpace {
public:
  AddressSpace();
  ~AddressSpace();
  void reset();
public:

  Waddr imagebase;
  Waddr entrypoint;
  Waddr end_code;

  void* brkbase;
  void* brk;

  Waddr top_of_stack;
  Waddr stack_base;

public:
  Waddr prep(int argc, char** argv, int envc, char** envp);

public:




  typedef byte SPATChunk[((1 << 19) / 8)];
  typedef SPATChunk** spat_t;



  spat_t readmap;
  spat_t writemap;
  spat_t execmap;
  spat_t dtlbmap;
  spat_t itlbmap;
  spat_t transmap;
  spat_t dirtymap;

  spat_t allocmap();
  void freemap(spat_t top);

  byte& pageid_to_map_byte(spat_t top, Waddr pageid);
  void make_accessible(void* address, Waddr size, spat_t top);
  void make_inaccessible(void* address, Waddr size, spat_t top);

  Waddr pageid(void* address) const {

    return ((W64)((((W64)address) >> (0)) & ((((48)) == 64) ? (W64)(-1LL) : ((1LL << ((48)))-1LL)))) >> (lg<(4096)>::value);



  }

  Waddr pageid(Waddr address) const { return pageid((void*)address); }

  void make_page_accessible(void* address, spat_t top) {
    ((pageid_to_map_byte(top, pageid(address))) |= (1LL << ((((pageid(address)) >> (0)) & (((3) == 64) ? (W64)(-1LL) : ((1LL << (3))-1LL))))));
  }

  void make_page_inaccessible(void* address, spat_t top) {
    ((pageid_to_map_byte(top, pageid(address))) &= (W64)(~(1LL << ((((pageid(address)) >> (0)) & (((3) == 64) ? (W64)(-1LL) : ((1LL << (3))-1LL)))))));
  }

  void allow_read(void* address, Waddr size) { make_accessible(address, size, readmap); }
  void disallow_read(void* address, Waddr size) { make_inaccessible(address, size, readmap); }
  void allow_write(void* address, Waddr size) { make_accessible(address, size, writemap); }
  void disallow_write(void* address, Waddr size) { make_inaccessible(address, size, writemap); }
  void allow_exec(void* address, Waddr size) { make_accessible(address, size, execmap); }
  void disallow_exec(void* address, Waddr size) { make_inaccessible(address, size, execmap); }

public:



  long sys_errno;

  void setattr(void* start, Waddr length, int prot);
  int getattr(void* start);
  int mprotect(void* start, Waddr length, int prot);
  int munmap(void* start, Waddr length);
  void* mmap(void* start, Waddr length, int prot, int flags, int fd, W64 offset);
  void* mremap(void* start, Waddr oldsize, Waddr newsize, int flags);
  void* setbrk(void* targetbrk);

  bool fastcheck(Waddr addr, spat_t top) const {





    W64 chunkid = pageid(addr) >> (lg<((1 << 19))>::value);

    if (__builtin_expect(!!(!top[chunkid]), 0))
      return false;

    AddressSpace::SPATChunk& chunk = *top[chunkid];
    Waddr byteid = (((pageid(addr)) >> (3)) & ((((lg<(((1 << 19) / 8))>::value)) == 64) ? (W64)(-1LL) : ((1LL << ((lg<(((1 << 19) / 8))>::value)))-1LL)));
    return (((chunk[byteid]) >> ((((pageid(addr)) >> (0)) & (((3) == 64) ? (W64)(-1LL) : ((1LL << (3))-1LL))))) & 1);



  }

  bool fastcheck(void* addr, spat_t top) const {
    return fastcheck((Waddr)addr, top);
  }

  bool check(void* p, int prot) const {
    if (__builtin_expect(!!((prot & 0x1) && (!fastcheck(p, readmap))), 0))
      return false;

    if (__builtin_expect(!!((prot & 0x2) && (!fastcheck(p, writemap))), 0))
      return false;

    if (__builtin_expect(!!((prot & 0x4) && (!fastcheck(p, execmap))), 0))
      return false;

    return true;
  }

  bool dtlbcheck(void* page) const { return fastcheck(page, dtlbmap); }
  void dtlbset(void* page) { make_page_accessible(page, dtlbmap); }
  void dtlbclear(void* page) { make_page_inaccessible(page, dtlbmap); }

  bool itlbcheck(void* page) const { return fastcheck(page, itlbmap); }
  void itlbset(void* page) { make_page_accessible(page, itlbmap); }
  void itlbclear(void* page) { make_page_inaccessible(page, itlbmap); }

  bool istrans(Waddr mfn) { return fastcheck(mfn << 12, transmap); }
  void settrans(Waddr mfn) { make_page_accessible((void*)(mfn << 12), transmap); }
  void cleartrans(Waddr mfn) { make_page_inaccessible((void*)(mfn << 12), transmap); }

  bool isdirty(Waddr mfn) { return fastcheck(mfn << 12, dirtymap); }
  void setdirty(Waddr mfn) { make_page_accessible((void*)(mfn << 12), dirtymap); }
  void cleardirty(Waddr mfn) { make_page_inaccessible((void*)(mfn << 12), dirtymap); }

  void resync_with_process_maps();
};

extern AddressSpace asp;

static inline bool smc_istrans(Waddr mfn) { return asp.istrans(mfn); }
static inline void smc_settrans(Waddr mfn) { asp.settrans(mfn); }
static inline void smc_cleartrans(Waddr mfn) { asp.cleartrans(mfn); }

static inline bool smc_isdirty(Waddr mfn) { return asp.isdirty(mfn); }
static inline void smc_setdirty(Waddr mfn) { asp.setdirty(mfn); }
static inline void smc_cleardirty(Waddr mfn) { asp.cleardirty(mfn); }


static inline Context& contextof(int vcpu) { return ctx; }






static inline void* phys_to_mapped_virt(Waddr rawphys) {
  return (void*)rawphys;
}

static inline Waddr mapped_virt_to_phys(void* rawvirt) {
  return (Waddr)rawvirt;
}

inline int Context::copy_from_user(void* target, Waddr addr, int bytes, PageFaultErrorCode& pfec, Waddr& faultaddr, bool forexec, Level1PTE& ptelo, Level1PTE& ptehi) {
  bool readable;
  bool executable;

  int n = 0;
  pfec = 0;

  ptelo = 0;
  ptehi = 0;

  readable = asp.fastcheck((byte*)addr, asp.readmap);
  if (__builtin_expect(!!(forexec), 1)) executable = asp.fastcheck((byte*)addr, asp.execmap);
  if (__builtin_expect(!!((!readable) | (forexec & !executable)), 0)) {
    faultaddr = addr;
    pfec.p = !readable;
    pfec.nx = (forexec & (!executable));
    return n;
  }

  n = min((Waddr)(4096 - (((addr) >> (0)) & (((12) == 64) ? (W64)(-1LL) : ((1LL << (12))-1LL)))), (Waddr)bytes);

  memcpy(target, (void*)addr, n);


  if (__builtin_expect(!!(n == bytes), 1)) return n;


  readable = asp.fastcheck((byte*)(addr + n), asp.readmap);
  if (__builtin_expect(!!(forexec), 1)) executable = asp.fastcheck((byte*)(addr + n), asp.execmap);
  if (__builtin_expect(!!((!readable) | (forexec & !executable)), 0)) {
    faultaddr = addr + n;
    pfec.p = !readable;
    pfec.nx = (forexec & (!executable));
    return n;
  }

  memcpy((byte*)target + n, (void*)(addr + n), bytes - n);
  return bytes;
}

inline int Context::copy_to_user(Waddr target, void* source, int bytes, PageFaultErrorCode& pfec, Waddr& faultaddr) {
  pfec = 0;
  bool writable = asp.fastcheck((byte*)target, asp.writemap);
  if (__builtin_expect(!!(!writable), 0)) {
    faultaddr = target;
    pfec.p = asp.fastcheck((byte*)target, asp.readmap);
    pfec.rw = 1;
    return 0;
  }

  byte* targetlo = (byte*)target;
  int nlo = min((Waddr)(4096 - (((target) >> (0)) & (((12) == 64) ? (W64)(-1LL) : ((1LL << (12))-1LL)))), (Waddr)bytes);

  smc_setdirty(target >> 12);


  if (__builtin_expect(!!(nlo == bytes), 1)) {
    memcpy(targetlo, source, nlo);
    return bytes;
  }


  writable = asp.fastcheck((byte*)(target + nlo), asp.writemap);
  if (__builtin_expect(!!(!writable), 0)) {
    faultaddr = target + nlo;
    pfec.p = asp.fastcheck((byte*)(target + nlo), asp.readmap);
    pfec.rw = 1;
    return nlo;
  }

  memcpy((byte*)(target + nlo), (byte*)source + nlo, bytes - nlo);
  memcpy(targetlo, source, nlo);

  smc_setdirty((target + nlo) >> 12);

  return bytes;
}

static const Waddr INVALID_PHYSADDR = 0;

inline Waddr Context::check_and_translate(Waddr virtaddr, int sizeshift, bool store, bool internal, int& exception, PageFaultErrorCode& pfec, PTEUpdate& pteupdate, Level1PTE& pteused) {
  exception = 0;
  pteupdate = 0;
  pteused = 0;
  pfec = 0;

  if (__builtin_expect(!!((((virtaddr) >> (0)) & (((sizeshift) == 64) ? (W64)(-1LL) : ((1LL << (sizeshift))-1LL)))), 0)) {
    exception = EXCEPTION_UnalignedAccess;
    return INVALID_PHYSADDR;
  }

  if (__builtin_expect(!!(internal), 0)) {

    return virtaddr;
  }

  AddressSpace::spat_t top = (store) ? asp.writemap : asp.readmap;

  if (__builtin_expect(!!(!asp.fastcheck(virtaddr, top)), 0)) {
    exception = (store) ? EXCEPTION_PageFaultOnWrite : EXCEPTION_PageFaultOnRead;
    pfec.p = !store;
    pfec.rw = store;
    pfec.us = 0;
    return __null;
  }

  return virtaddr;
}

static inline W64 loadphys(Waddr addr) {
  addr = floor(signext64(addr, 48), 8);
  W64& data = *(W64*)(Waddr)addr;
  return data;
}

static inline W64 storemask(Waddr addr, W64 data, byte bytemask) {
  addr = floor(signext64(addr, 48), 8);
  W64& mem = *(W64*)(Waddr)addr;
  mem = mux64(expand_8bit_to_64bit_lut[bytemask], mem, data);
  return data;
}


inline RIPVirtPhys& RIPVirtPhys::update(Context& ctx, int bytes) {
  use64 = ctx.use64;
  kernel = 0;
  df = ((ctx.internal_eflags & FLAG_DF) != 0);
  padlo = 0;
  padhi = 0;
  mfnlo = rip >> 12;
  mfnhi = (rip + (bytes-1)) >> 12;
  return *this;
}




enum { SYSCALL_SEMANTICS_INT80, SYSCALL_SEMANTICS_SYSCALL, SYSCALL_SEMANTICS_SYSENTER };

void handle_syscall_32bit(int semantics);


void handle_syscall_64bit();





extern W64 ldt_seg_base_cache[8192];







extern bool inside_ptlsim;

extern bool requested_switch_to_native;
# 18 "./ptlsim.h" 2



# 1 "./datastore.h" 1
# 14 "./datastore.h"
struct DataStoreNode;

typedef dynarray< KeyValuePair<const char*, DataStoreNode*> > DataStoreNodeDirectory;

struct DataStoreNode;

struct DataStoreNodePrintSettings {
  int force_sum_of_subtrees_only:1, percent_of_toplevel:1, hide_zero_branches:1, cumulative_histogram:1, show_stars_in_histogram:1;
  int maxdepth;
  int percent_digits;
  float histogram_thresh;

  DataStoreNodePrintSettings() {
    force_sum_of_subtrees_only = 0;
    maxdepth = limits<int>::max;
    percent_digits = 0;
    percent_of_toplevel = 0;
    hide_zero_branches = 0;
    histogram_thresh = 0.0001;
    cumulative_histogram = 0;
    show_stars_in_histogram = 1;
  }
};







struct AddOperator { W64s operator ()(W64s a, W64s b) const { return ((a + b)); } double operator ()(double a, double b) const { return ((a + b)); } };
struct SubtractOperator { W64s operator ()(W64s a, W64s b) const { return ((a - b)); } double operator ()(double a, double b) const { return ((a - b)); } };

struct AddScaleOperator {
  typedef double context_t;
  context_t coeff;
  AddScaleOperator(double coeff_): coeff(coeff_) { };
  W64s operator ()(W64s a, W64s b) const { return (W64s)math::round((double)a + ((double)b * coeff)); }
  double operator ()(double a, double b) const { return a + b*coeff; }
};
# 66 "./datastore.h"
struct IdentityOperator { W64s operator ()(W64s a) const { return ((a)); } double operator ()(double a) const { return ((a)); } };
struct ZeroOperator { W64s operator ()(W64s a) const { return ((0)); } double operator ()(double a) const { return ((0)); } };

struct ScaleOperator {
  double coeff;
  ScaleOperator(double coeff_): coeff(coeff_) { };
  W64s operator ()(W64s a) const { return (W64s)math::round(((double)a) * coeff); }
  double operator ()(double a) const { return a * coeff; }
};



struct DataStoreNodeLinkManager {
  static DataStoreNode* objof(selflistlink* link);
  static char*& keyof(DataStoreNode* obj);
  static selflistlink* linkof(DataStoreNode* obj);
};

struct DataStoreNode {
  typedef Hashtable<const char*, DataStoreNode*, 16> hash_t;
  selflistlink hashlink;
  hash_t* subnodes;
  char* name;
  DataStoreNode* sum_of_subtrees_cache;
  DataStoreNode* average_of_subtrees_cache;
  double total_sum_cache;
  char** labels;

  W16 type;
  W16 summable:1, histogramarray:1, identical_subtrees:1, dynamic:1, labeled_histogram:1;
  W32 count;


  W64 histomin;
  W64 histomax;
  W64 histostride;

  DataStoreNode* parent;

  enum NodeType { DS_NODE_TYPE_NULL, DS_NODE_TYPE_INT, DS_NODE_TYPE_FLOAT, DS_NODE_TYPE_NODE, DS_NODE_TYPE_STRING };

  union DataType {
    W64s w;
    double f;
    const char* s;
    DataStoreNode* n;
  };

  union {
    DataType* values;
    DataType value;
  };

  DataStoreNode();
  DataStoreNode(const char* name);
  DataStoreNode(const char* name, NodeType type, int count = 0);

  void init(const char* name, int type, int count = 0);
  void rename(const char* newname);

  ~DataStoreNode();
  void cleanup();

  DataStoreNode& add(DataStoreNode* node);
  DataStoreNode& add(DataStoreNode& node) { return add(&node); }

  bool remove(const char* key);

  void removeall();

  DataType getdata() const;

  void invalidate_caches();

  DataStoreNode* search(const char* key) const;

  DataStoreNode* searchpath(const char* path) const;

  DataStoreNode& get(const char* key);

  DataStoreNode& operator ()(const char* key) { return get(key); }

  DataStoreNode& operator [](const char* key) { return get(key); }





  DataStoreNode& add(const char* key) { return add(new DataStoreNode(key)); }





  DataStoreNode(const char* name, W64s value);
  DataStoreNode(const char* name, const W64s* values, int count, bool histogram = false);

  DataStoreNode& add(const char* key, W64s value) { return add(new DataStoreNode(key, (W64s)value)); }

  DataStoreNode& add(const char* key, const W64s* value, int count) { return add(new DataStoreNode(key, (W64s*)value, count)); }

  DataStoreNode& histogram(const char* key, const W64* value, int count, W64s histomin, W64s histomax, W64s histostride);

  DataStoreNode& histogram(const char* key, const W64* value, int count) {
    return histogram(key, value, count, 0, count-1, 1);
  }

  DataStoreNode& histogram(const char* key, const char** names, const W64* values, int count);

  operator W64s() const;

  operator W64() const { return (W64s)(*this); }
  operator W32s() const { return (W64s)(*this); }
  operator W32() const { return (W64s)(*this); }
  operator W16s() const { return (W64s)(*this); }
  operator W16() const { return (W64s)(*this); }
  operator byte() const { return (W64s)(*this); }
  operator W8s() const { return (W64s)(*this); }

  operator W64s*() const;
  operator W64*() const;

  DataStoreNode& operator =(W64s data);





  DataStoreNode(const char* name, double value);
  DataStoreNode(const char* name, const double* values, int count);

  DataStoreNode& addfloat(const char* key, double value) { return add(new DataStoreNode(key, (double)value)); }
  DataStoreNode& addfloat(const char* key, double* value, int count) { return add(new DataStoreNode(key, (double*)value, count)); }

  operator double() const;
  operator double*() const;
  operator float() const;

  DataStoreNode& operator =(double data);





  DataStoreNode(const char* name, const char* value);
  DataStoreNode(const char* name, const char** values, int count);

  DataStoreNode& add(const char* key, const char* value) { return add(new DataStoreNode(key, (const char*)value)); }
  DataStoreNode& add(const char* key, const char** value, int count) { return add(new DataStoreNode(key, (const char**)value, count)); }

  DataStoreNode& operator =(const char* data);

  const char* string() const;

  operator const char**() const;

  DataStoreNodeDirectory& getentries() const;

  double total() const;
  double percent_of_parent() const;
  double percent_of_toplevel() const;

  ostream& print(ostream& os, const DataStoreNodePrintSettings& printinfo = DataStoreNodePrintSettings(), int depth = 0, double supersum = 0) const;

  DataStoreNode(idstream& is);

  bool read(idstream& is);

  odstream& write(odstream& os) const;

  ostream& generate_structural_code(ostream& os, int level = 0) const;
  ostream& generate_reconstruction_code(ostream& os, int level = 0) const;

  template <class F>
  DataStoreNode* map(const F& func) const {
    DataStoreNode* newnode = __null;

    switch (type) {
    case DataStoreNode::DS_NODE_TYPE_NULL: {
      newnode = new DataStoreNode(name);
      break;
    }
    case DataStoreNode::DS_NODE_TYPE_INT: {
      if (count == 1) {
        newnode = new DataStoreNode(name, func(value.w));
      } else {
        W64s* destdata = new W64s[count];
        for (size_t i = 0; i < (count); i++) destdata[i] = func(values[i].w);
        newnode = new DataStoreNode(name, destdata, count);
      }
      break;
    }
    case DataStoreNode::DS_NODE_TYPE_FLOAT: {
      if (count == 1) {
        newnode = new DataStoreNode(name, func(value.f));
      } else {
        double* destdata = new double[count];
        for (size_t i = 0; i < (count); i++) destdata[i] = func(values[i].f);
        newnode = new DataStoreNode(name, destdata, count);
      }
      break;
    }
    case DataStoreNode::DS_NODE_TYPE_STRING: {
      if (count == 1) {
        newnode = new DataStoreNode(name, string());
      } else {
        newnode = new DataStoreNode(name, (const char**)(*this), count);
      }
      break;
    }
    default:
      (static_cast<void> (((__builtin_expect(!!(false), 0))) ? 0 : (assert_fail ("false", "./datastore.h", 277, __PRETTY_FUNCTION__), 0)));
    }

    newnode->summable = summable;
    newnode->histogramarray = histogramarray;
    newnode->identical_subtrees = identical_subtrees;

    newnode->histomin = histomin;
    newnode->histomax = histomax;
    newnode->histostride = histostride;

    DataStoreNodeDirectory& list = getentries();

    for (size_t i = 0; i < (list.length); i++) {
      newnode->add(list[i].value->map(func));
    }

    delete &list;

    return newnode;
  }

  DataStoreNode* clone() const { return map(IdentityOperator()); }
  DataStoreNode* zero() const { return map(ZeroOperator()); }


  DataStoreNode* sum_of_subtrees() const;
  DataStoreNode* average_of_subtrees() const;

  template <class F>
  static DataStoreNode* apply(const F& func, const DataStoreNode& a, const DataStoreNode& b) {
    DataStoreNode* newnode = __null;

    if (!((a.type == b.type) & (a.count == b.count))) {
      cerr << "DataStoreNode::apply(", a.name, ", ", b.name, "): mismatch types (", a.type, " vs ", b.type, "), count (", a.count, " vs ", b.count, ")", endl, flush;
      (static_cast<void> (((__builtin_expect(!!(false), 0))) ? 0 : (assert_fail ("false", "./datastore.h", 312, __PRETTY_FUNCTION__), 0)));
    }

    switch (a.type) {
    case DataStoreNode::DS_NODE_TYPE_NULL: {
      newnode = new DataStoreNode(a.name);
      break;
    }
    case DataStoreNode::DS_NODE_TYPE_INT: {
      if (a.count == 1) {
        newnode = new DataStoreNode(a.name, func(a.value.w, b.value.w));
      } else {
        W64s* destdata = new W64s[a.count];
        W64s* adata = a;
        W64s* bdata = b;
        for (size_t i = 0; i < (a.count); i++) destdata[i] = func(adata[i], bdata[i]);
        newnode = new DataStoreNode(a.name, destdata, a.count);
      }
      break;
    }
    case DataStoreNode::DS_NODE_TYPE_FLOAT: {
      if (a.count == 1) {
        newnode = new DataStoreNode(a.name, func(a.value.f, b.value.f));
      } else {
        double* destdata = new double[a.count];
        double* adata = a;
        double* bdata = b;
        for (size_t i = 0; i < (a.count); i++) destdata[i] = func(adata[i], bdata[i]);
        newnode = new DataStoreNode(a.name, destdata, a.count);
      }
      break;
    }
    case DataStoreNode::DS_NODE_TYPE_STRING: {
      if (a.count == 1) {
        newnode = new DataStoreNode(a.name, b.string());
      } else {
        newnode = new DataStoreNode(a.name, (const char**)b, b.count);
      }
      break;
    }
    default:
      (static_cast<void> (((__builtin_expect(!!(false), 0))) ? 0 : (assert_fail ("false", "./datastore.h", 353, __PRETTY_FUNCTION__), 0)));
    }

    newnode->summable = a.summable;
    newnode->histogramarray = a.histogramarray;
    newnode->identical_subtrees = a.identical_subtrees;

    newnode->histomin = a.histomin;
    newnode->histomax = a.histomax;
    newnode->histostride = a.histostride;

    DataStoreNodeDirectory& alist = a.getentries();
    DataStoreNodeDirectory& blist = b.getentries();

    if (alist.length != blist.length) {
      cerr << "DataStoreNode::apply(", a.name, ", ", b.name, "): mismatch in subnode list length (", alist.length, " vs ", blist.length, ")", endl, flush;
      (static_cast<void> (((__builtin_expect(!!(alist.length == blist.length), 0))) ? 0 : (assert_fail ("alist.length == blist.length", "./datastore.h", 369, __PRETTY_FUNCTION__), 0)));
    }

    for (size_t i = 0; i < (alist.length); i++) {
      DataStoreNode& anode = *a.search(alist[i].key);
      DataStoreNode& bnode = *b.search(blist[i].key);
      (static_cast<void> (((__builtin_expect(!!(&anode), 0))) ? 0 : (assert_fail ("&anode", "./datastore.h", 375, __PRETTY_FUNCTION__), 0))); (static_cast<void> (((__builtin_expect(!!(&bnode), 0))) ? 0 : (assert_fail ("&bnode", "./datastore.h", 375, __PRETTY_FUNCTION__), 0)));
      newnode->add(apply(func, anode, bnode));
    }

    delete &alist;
    delete &blist;

    return newnode;
  }

  template <class F>
  DataStoreNode& apply(const F& func, const DataStoreNode& b) {
    if (!((type == b.type) & (count == b.count))) {
      cerr << "DataStoreNode::apply(", name, ", ", b.name, "): mismatch types (", type, " vs ", b.type, "), count (", count, " vs ", b.count, ")", endl, flush;
      (static_cast<void> (((__builtin_expect(!!(false), 0))) ? 0 : (assert_fail ("false", "./datastore.h", 389, __PRETTY_FUNCTION__), 0)));
    }

    switch (type) {
    case DataStoreNode::DS_NODE_TYPE_NULL: {

      break;
    }
    case DataStoreNode::DS_NODE_TYPE_INT: {
      if (count == 1) {
        value.w = func(value.w, b.value.w);
      } else {
        for (size_t i = 0; i < (count); i++) values[i].w = func(values[i].w, b.values[i].w);
      }
      break;
    }
    case DataStoreNode::DS_NODE_TYPE_FLOAT: {
      if (count == 1) {
        value.f = func(value.f, b.value.f);
      } else {
        for (size_t i = 0; i < (count); i++) values[i].f = func(values[i].f, b.values[i].f);
      }
      break;
    }
    case DataStoreNode::DS_NODE_TYPE_STRING: {

      break;
    }
    default:
      (static_cast<void> (((__builtin_expect(!!(false), 0))) ? 0 : (assert_fail ("false", "./datastore.h", 418, __PRETTY_FUNCTION__), 0)));
    }

    DataStoreNodeDirectory& alist = getentries();
    DataStoreNodeDirectory& blist = b.getentries();

    if (alist.length != blist.length) {
      cerr << "DataStoreNode::apply(", name, ", ", b.name, "): mismatch in subnode list length (", alist.length, " vs ", blist.length, ")", endl, flush;
      (static_cast<void> (((__builtin_expect(!!(alist.length == blist.length), 0))) ? 0 : (assert_fail ("alist.length == blist.length", "./datastore.h", 426, __PRETTY_FUNCTION__), 0)));
    }

    for (size_t i = 0; i < (alist.length); i++) {
      DataStoreNode& anode = *search(alist[i].key);
      DataStoreNode& bnode = *b.search(blist[i].key);
      (static_cast<void> (((__builtin_expect(!!(&anode), 0))) ? 0 : (assert_fail ("&anode", "./datastore.h", 432, __PRETTY_FUNCTION__), 0))); (static_cast<void> (((__builtin_expect(!!(&bnode), 0))) ? 0 : (assert_fail ("&bnode", "./datastore.h", 432, __PRETTY_FUNCTION__), 0)));
      anode.apply(func, bnode);
    }

    delete &alist;
    delete &blist;

    return *this;
  }

  DataStoreNode* operator +(const DataStoreNode& b) const {
    return apply(AddOperator(), *this, b);
  }

  DataStoreNode* operator -(const DataStoreNode& b) const {
    return apply(SubtractOperator(), *this, b);
  }

  DataStoreNode& operator +=(const DataStoreNode& b) {
    return apply(AddOperator(), b);
  }

  DataStoreNode& addscaled(const DataStoreNode& b, double scale) {
    return apply(AddScaleOperator(scale), b);
  }

  DataStoreNode& operator -=(const DataStoreNode& b) {
    return apply(SubtractOperator(), b);
  }
};

inline odstream& operator <<(odstream& os, const DataStoreNode& node) {
  return node.write(os);
}
# 484 "./datastore.h"
struct DataStoreNodeTemplateBase {
  static const W32 MAGIC = 0x31545344;

  W32 magic;
  W16 length;
  W16 type;
  W32 histogramarray:1, labeled_histogram:1, summable:1, identical_subtrees:1;
  W32 subcount;
  W32 count;
  W32 limit;

  W64 histomin;
  W64 histomax;
  W64 histostride;
};

struct DataStoreNodeTemplate: public DataStoreNodeTemplateBase {
  char* name;
  dynarray<DataStoreNodeTemplate*> subnodes;
  char** labels;
  DataStoreNodeTemplate* parent;

  enum NodeType { DS_NODE_TYPE_NULL, DS_NODE_TYPE_INT, DS_NODE_TYPE_FLOAT, DS_NODE_TYPE_NODE, DS_NODE_TYPE_STRING, DS_NODE_TYPE_LABELED_HISTOGRAM };

  void init(const char* name, int type = DS_NODE_TYPE_NULL, int count = 1, const char** labels = __null);

  DataStoreNodeTemplate() { name = __null; labels = __null; parent = __null; }

  DataStoreNodeTemplate(const char* name, int type = DS_NODE_TYPE_NULL, int count = 1, const char** labels = __null);

  DataStoreNodeTemplate(const DataStoreNodeTemplate& base, const char* name = __null);

  ~DataStoreNodeTemplate();

  DataStoreNodeTemplate& add(DataStoreNodeTemplate* node) {
    node->parent = this;
    subnodes.push(node);
    subcount++;
    return *node;
  }

  DataStoreNodeTemplate& add(DataStoreNodeTemplate& node) { return add(&node); }


  DataStoreNodeTemplate& add(const char* key) { return add(new DataStoreNodeTemplate(key, DS_NODE_TYPE_NULL)); }
  DataStoreNodeTemplate& operator ()(const char* key) { return add(key); }


  DataStoreNodeTemplate& add(const char* key, DataStoreNodeTemplate& base);


  DataStoreNodeTemplate& addint(const char* key, int count = 1) { return add(new DataStoreNodeTemplate(key, DS_NODE_TYPE_INT, count)); }


  DataStoreNodeTemplate& histogram(const char* key, int count, W64 histomin, W64 histomax, W64 histostride, const char** names = __null) {
    DataStoreNodeTemplate& dsn = add(new DataStoreNodeTemplate(key, DS_NODE_TYPE_INT, count, names));
    dsn.histogramarray = 1;
    dsn.histomin = histomin;
    dsn.histomax = histomax;
    dsn.histostride = histostride;
    return dsn;
  }


  DataStoreNodeTemplate& histogram(const char* key, int count, const char** names = __null) {
    return histogram(key, count, 0, count-1, 1, names);
  }


  DataStoreNodeTemplate& addfloat(const char* key, int count = 1) { return add(new DataStoreNodeTemplate(key, DS_NODE_TYPE_FLOAT, count)); }


  DataStoreNodeTemplate& addstring(const char* key, int limit, int count = 1) {
    DataStoreNodeTemplate& dsn = add(new DataStoreNodeTemplate(key, DS_NODE_TYPE_STRING));

    dsn.limit = ceil(limit, 8);
    return dsn;
  }




  ostream& generate_struct_def(ostream& os, int depth = 0) const;




  odstream& write(odstream& os) const;




  DataStoreNodeTemplate(idstream& is);






  DataStoreNode* reconstruct(const W64*& p) const;
# 592 "./datastore.h"
  void subtract(W64*& p, W64*& psub) const;
};

static inline odstream& operator <<(odstream& os, const DataStoreNodeTemplate& node) {
  return node.write(os);
}

static inline ostream& operator <<(ostream& os, const DataStoreNodeTemplate& node) {
  return node.generate_struct_def(os);
}

struct StatsFileHeader {
  W64 magic;
  W64 template_offset;
  W64 template_size;
  W64 record_offset;
  W64 record_size;
  W64 record_count;
  W64 index_offset;
  W64 index_count;

  static const W64 MAGIC = 0x31307473644c5450ULL;
};

struct StatsIndexRecordLink: public selflistlink {
  W64 uuid;
  char* name;

  StatsIndexRecordLink() { }

  StatsIndexRecordLink(W64 uuid, const char* name) {
    this->uuid = uuid;
    this->name = strdup(name);
  }
};

struct StatsFileWriter {
  odstream os;
  StatsFileHeader header;
  StatsIndexRecordLink* namelist;

  StatsFileWriter() { }

  void open(const char* filename, const void* dst, size_t dstsize, int record_size);

  operator bool() const { return os.ok(); }
  W64 next_uuid() const { return header.record_count; }

  void write(const void* record, const char* name = __null);
  void flush();
  void close();
};

struct StatsFileReader {
  idstream is;
  StatsFileHeader header;
  byte* buf;
  byte* bufsub;
  DataStoreNodeTemplate* dst;
  Hashtable<const char*, W64, 256> name_to_uuid;

  StatsFileReader() { dst = __null; buf = __null; bufsub = __null; }

  bool open(const char* filename);

  void close();

  W64s uuid_of_name(const char* name);

  DataStoreNode* get(W64 uuid);
  DataStoreNode* getdelta(W64 uuid, W64 uuidsub);

  DataStoreNode* get(const char* name);
  DataStoreNode* getdelta(const char* name, const char* namesub);

  ostream& print(ostream& os) const;
};

static inline ostream& print(ostream& os, const StatsFileReader& reader) {
  return reader.print(os);
}
# 22 "./ptlsim.h" 2

extern W64 sim_cycle;
extern W64 unhalted_cycle_count;
extern W64 total_uops_committed;
extern W64 total_user_insns_committed;

void user_process_terminated(int rc);

ostream& print_user_context(ostream& os, const UserContext& ctx, int width = 4);

static const int MAX_TRANSOP_BUFFER_SIZE = 4;
struct BranchInfo
 {
      W64 rip;
      W64 numStalls;
      W64 pred_taken_and_taken;
      W64 pred_taken_and_not_taken;
      W64 pred_not_taken_and_taken;
      W64 pred_not_taken_and_not_taken;
      BranchInfo() { }
      BranchInfo(W64 rip):rip(rip) { numStalls = pred_taken_and_taken = pred_taken_and_not_taken = pred_not_taken_and_taken = pred_not_taken_and_not_taken = 0; }
};


struct PTLsimConfig;
struct PTLsimStats;

struct PTLsimMachine {
  bool initialized;
  PTLsimMachine() { initialized = 0; }
  virtual bool init(PTLsimConfig& config);
  virtual int run(PTLsimConfig& config);
  virtual void update_stats(PTLsimStats& stats);
  virtual void dump_state(ostream& os);
  virtual void flush_tlb(Context& ctx);
  virtual void flush_tlb_virt(Context& ctx, Waddr virtaddr);
  static void addmachine(const char* name, PTLsimMachine* machine);
  static PTLsimMachine* getmachine(const char* name);
  static PTLsimMachine* getcurrent();
};

struct TransOpBuffer {
  TransOp uops[MAX_TRANSOP_BUFFER_SIZE];
  uopimpl_func_t synthops[MAX_TRANSOP_BUFFER_SIZE];
  int index;
  int count;

  bool get(TransOp& uop, uopimpl_func_t& synthop) {
    if (!count) return false;
    uop = uops[index];
    synthop = synthops[index];
    index++;
    if (index >= count) { count = 0; index = 0; }
    return true;
  }

  void reset() {
    index = 0;
    count = 0;
  }

  int put() {
    return count++;
  }

  bool empty() const {
    return (count == 0);
  }

  TransOpBuffer() { reset(); }
};

void split_unaligned(const TransOp& transop, TransOpBuffer& buf);

void capture_stats_snapshot(const char* name = __null);
void flush_stats();
bool handle_config_change(PTLsimConfig& config, int argc = 0, char** argv = __null);
void collect_common_sysinfo(PTLsimStats& stats);
void collect_sysinfo(PTLsimStats& stats, int argc, char** argv);
void print_sysinfo(ostream& os);
void backup_and_reopen_logfile();
void shutdown_subsystems();

bool simulate(const char* machinename);
int inject_events();
bool check_for_async_sim_break();
void update_progress();

extern "C" void switch_to_sim();





struct AddrPair {
  byte* start;
  byte* end;
};

void init_uops();
void shutdown_uops();
uopimpl_func_t get_synthcode_for_uop(int op, int size, bool setflags, int cond, int extshift, bool except, bool internal);
uopimpl_func_t get_synthcode_for_cond_branch(int opcode, int cond, int size, bool except);
void synth_uops_for_bb(BasicBlock& bb);
struct PTLsimStats;
void print_banner(ostream& os, const PTLsimStats& stats, int argc = 0, char** argv = __null);

extern ostream logfile;
extern W64 user_insn_commits;
extern W64 iterations;
extern W64 total_uops_executed;
extern W64 total_uops_committed;
extern W64 total_user_insns_committed;
extern W64 total_basic_blocks_committed;






struct PTLsimConfig {
# 153 "./ptlsim.h"
  stringbuf core_name;


  bool quiet;
  stringbuf log_filename;
  W64 loglevel;
  W64 start_log_at_iteration;
  W64 start_log_at_rip;
  bool log_on_console;
  bool log_ptlsim_boot;
  W64 log_buffer_size;
  stringbuf mm_logfile;
  W64 mm_log_buffer_size;
  bool enable_inline_mm_logging;
  bool enable_mm_validate;


  bool event_log_enabled;
  W64 event_log_ring_buffer_size;
  bool flush_event_log_every_cycle;
  W64 log_backwards_from_trigger_rip;
  bool dump_state_now;
  bool abort_at_end;

  W64 log_trigger_virt_addr_start;
  W64 log_trigger_virt_addr_end;


  stringbuf stats_filename;
  W64 snapshot_cycles;
  stringbuf snapshot_now;



  W64 start_at_rip;
  bool include_dyn_linker;
  bool trigger_mode;
  W64 pause_at_startup;



  W64 stop_at_user_insns;
  W64 stop_at_cycle;
  W64 stop_at_iteration;
  W64 stop_at_rip;
  W64 stop_at_marker;
  W64 stop_at_marker_hits;
  W64 insns_in_last_basic_block;
  W64 stop_at_user_insns_relative;
  W64 flush_interval;
  bool kill_after_run;
# 223 "./ptlsim.h"
  bool continuous_validation;
  W64 validation_start_cycle;


  bool perfect_cache;


  stringbuf dumpcode_filename;
  bool dump_at_end;
  bool overshoot_and_dump;
  stringbuf bbcache_dump_filename;



  W64 sequential_mode_insns;
  bool exit_after_fullsim;

  void reset();
};

extern PTLsimConfig config;

extern ConfigurationParser<PTLsimConfig> configparser;

ostream& operator <<(ostream& os, const PTLsimConfig& config);

extern bool logenable;

void force_logging_enabled();
# 10 "uopimpl.cpp" 2



inline void capture_uop_context(const IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags, int opcode, int size, int cond = 0, int extshift = 0, W64 riptaken = 0, W64 ripseq = 0) { }






typedef W64 Wmax;
# 30 "uopimpl.cpp"
template <typename T>
inline byte x86_genflags(T r) {
  byte sf, zf, pf;
  asm("test %[r],%[r]\n"
      "sets %[sf]\n"
      "setz %[zf]\n"
      "setp %[pf]\n"
      : [sf] "=q" (sf), [zf] "=q" (zf), [pf] "=q" (pf)
      : [r] "q" (r));

  return (sf << 7) + (zf << 6) + (pf << 2);
}

template <typename T>
inline byte x86_genflags_separate(T sr, T zr, T pr) {
  byte sf, zf, pf;
  asm("test %[sr],%[sr]\n"
      "sets %[sf]\n"
      "test %[zr],%[zr]\n"
      "setz %[zf]\n"
      "test %[pr],%[pr]\n"
      "setp %[pf]\n"
      "shl  $7,%[sf]\n"
      "shl  $6,%[zf]\n"
      "shl  $2,%[pf]\n"
      : [sf] "=q" (sf), [zf] "=q" (zf), [pf] "=q" (pf)
      : [sr] "q" (sr), [zr] "q" (zr), [pr] "q" (pr));

  return (sf|zf|pf);
}

template byte x86_genflags<byte>(byte r);
template byte x86_genflags<W16>(W16 r);
template byte x86_genflags<W32>(W32 r);


template byte x86_genflags<W64>(W64 r);
# 83 "uopimpl.cpp"
template <typename T>
inline W64 x86_merge(W64 rd, W64 ra) {
  union {
    W8 w8;
    W16 w16;
    W32 w32;
    W64 w64;
  } sizes;

  switch (sizeof(T)) {
  case 1: sizes.w64 = rd; sizes.w8 = ra; return sizes.w64;
  case 2: sizes.w64 = rd; sizes.w16 = ra; return sizes.w64;
  case 4: return (W32)((ra) & 0xffffffffLL);
  case 8: return ra;
  }

  return rd;
}

typedef void (*uopimpl_func_t)(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags);
# 139 "uopimpl.cpp"
void uop_impl_nop(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  state.reg.rddata = 0;
  state.reg.rdflags = 0;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_nop, 0);
}




template <int ptlopcode, template<typename, int> class func, typename T, int genflags>
inline void aluop(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  byte cf = 0, of = 0;
  func<T, genflags> f;
  T rt = f(ra, rb, rc, raflags, rbflags, rcflags, cf, of);
  state.reg.rddata = x86_merge<T>(ra, rt);
  state.reg.rdflags = (of << 11) | cf | ((genflags & SETFLAG_ZF) ? x86_genflags<T>(rt) : 0);
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(T))>::value));
}
# 182 "uopimpl.cpp"
template <typename T>
inline void exp_op_mov(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  state.reg.rddata = x86_merge<T>(ra, rb);
  state.reg.rdflags = rbflags;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_mov, (lg<(sizeof(T))>::value));
}

uopimpl_func_t implmap_mov[4] = {&exp_op_mov<W8>, &exp_op_mov<W16>, &exp_op_mov<W32>, &exp_op_mov<W64>};


template <typename T, int genflags> struct exp_op_and { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = (ra & rb))); return rd; } }; uopimpl_func_t implmap_and[4][2] = { {&aluop<OP_and, exp_op_and, W8, 0>, &aluop<OP_and, exp_op_and, W8, ((SETFLAG_ZF))>}, {&aluop<OP_and, exp_op_and, W16, 0>, &aluop<OP_and, exp_op_and, W16, ((SETFLAG_ZF))>}, {&aluop<OP_and, exp_op_and, W32, 0>, &aluop<OP_and, exp_op_and, W32, ((SETFLAG_ZF))>}, {&aluop<OP_and, exp_op_and, W64, 0>, &aluop<OP_and, exp_op_and, W64, ((SETFLAG_ZF))>} };;;
template <typename T, int genflags> struct exp_op_or { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = (ra | rb))); return rd; } }; uopimpl_func_t implmap_or[4][2] = { {&aluop<OP_or, exp_op_or, W8, 0>, &aluop<OP_or, exp_op_or, W8, ((SETFLAG_ZF))>}, {&aluop<OP_or, exp_op_or, W16, 0>, &aluop<OP_or, exp_op_or, W16, ((SETFLAG_ZF))>}, {&aluop<OP_or, exp_op_or, W32, 0>, &aluop<OP_or, exp_op_or, W32, ((SETFLAG_ZF))>}, {&aluop<OP_or, exp_op_or, W64, 0>, &aluop<OP_or, exp_op_or, W64, ((SETFLAG_ZF))>} };;;
template <typename T, int genflags> struct exp_op_xor { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = (ra ^ rb))); return rd; } }; uopimpl_func_t implmap_xor[4][2] = { {&aluop<OP_xor, exp_op_xor, W8, 0>, &aluop<OP_xor, exp_op_xor, W8, ((SETFLAG_ZF))>}, {&aluop<OP_xor, exp_op_xor, W16, 0>, &aluop<OP_xor, exp_op_xor, W16, ((SETFLAG_ZF))>}, {&aluop<OP_xor, exp_op_xor, W32, 0>, &aluop<OP_xor, exp_op_xor, W32, ((SETFLAG_ZF))>}, {&aluop<OP_xor, exp_op_xor, W64, 0>, &aluop<OP_xor, exp_op_xor, W64, ((SETFLAG_ZF))>} };;;
template <typename T, int genflags> struct exp_op_andnot { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = ((~ra) & rb))); return rd; } }; uopimpl_func_t implmap_andnot[4][2] = { {&aluop<OP_andnot, exp_op_andnot, W8, 0>, &aluop<OP_andnot, exp_op_andnot, W8, ((SETFLAG_ZF))>}, {&aluop<OP_andnot, exp_op_andnot, W16, 0>, &aluop<OP_andnot, exp_op_andnot, W16, ((SETFLAG_ZF))>}, {&aluop<OP_andnot, exp_op_andnot, W32, 0>, &aluop<OP_andnot, exp_op_andnot, W32, ((SETFLAG_ZF))>}, {&aluop<OP_andnot, exp_op_andnot, W64, 0>, &aluop<OP_andnot, exp_op_andnot, W64, ((SETFLAG_ZF))>} };;;
template <typename T, int genflags> struct exp_op_ornot { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = ((~ra) | rb))); return rd; } }; uopimpl_func_t implmap_ornot[4][2] = { {&aluop<OP_ornot, exp_op_ornot, W8, 0>, &aluop<OP_ornot, exp_op_ornot, W8, ((SETFLAG_ZF))>}, {&aluop<OP_ornot, exp_op_ornot, W16, 0>, &aluop<OP_ornot, exp_op_ornot, W16, ((SETFLAG_ZF))>}, {&aluop<OP_ornot, exp_op_ornot, W32, 0>, &aluop<OP_ornot, exp_op_ornot, W32, ((SETFLAG_ZF))>}, {&aluop<OP_ornot, exp_op_ornot, W64, 0>, &aluop<OP_ornot, exp_op_ornot, W64, ((SETFLAG_ZF))>} };;;
template <typename T, int genflags> struct exp_op_nand { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = (~(ra & rb)))); return rd; } }; uopimpl_func_t implmap_nand[4][2] = { {&aluop<OP_nand, exp_op_nand, W8, 0>, &aluop<OP_nand, exp_op_nand, W8, ((SETFLAG_ZF))>}, {&aluop<OP_nand, exp_op_nand, W16, 0>, &aluop<OP_nand, exp_op_nand, W16, ((SETFLAG_ZF))>}, {&aluop<OP_nand, exp_op_nand, W32, 0>, &aluop<OP_nand, exp_op_nand, W32, ((SETFLAG_ZF))>}, {&aluop<OP_nand, exp_op_nand, W64, 0>, &aluop<OP_nand, exp_op_nand, W64, ((SETFLAG_ZF))>} };;;
template <typename T, int genflags> struct exp_op_nor { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = (~(ra | rb)))); return rd; } }; uopimpl_func_t implmap_nor[4][2] = { {&aluop<OP_nor, exp_op_nor, W8, 0>, &aluop<OP_nor, exp_op_nor, W8, ((SETFLAG_ZF))>}, {&aluop<OP_nor, exp_op_nor, W16, 0>, &aluop<OP_nor, exp_op_nor, W16, ((SETFLAG_ZF))>}, {&aluop<OP_nor, exp_op_nor, W32, 0>, &aluop<OP_nor, exp_op_nor, W32, ((SETFLAG_ZF))>}, {&aluop<OP_nor, exp_op_nor, W64, 0>, &aluop<OP_nor, exp_op_nor, W64, ((SETFLAG_ZF))>} };;;
template <typename T, int genflags> struct exp_op_eqv { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = (~(ra ^ rb)))); return rd; } }; uopimpl_func_t implmap_eqv[4][2] = { {&aluop<OP_eqv, exp_op_eqv, W8, 0>, &aluop<OP_eqv, exp_op_eqv, W8, ((SETFLAG_ZF))>}, {&aluop<OP_eqv, exp_op_eqv, W16, 0>, &aluop<OP_eqv, exp_op_eqv, W16, ((SETFLAG_ZF))>}, {&aluop<OP_eqv, exp_op_eqv, W32, 0>, &aluop<OP_eqv, exp_op_eqv, W32, ((SETFLAG_ZF))>}, {&aluop<OP_eqv, exp_op_eqv, W64, 0>, &aluop<OP_eqv, exp_op_eqv, W64, ((SETFLAG_ZF))>} };;;
template <typename T, int genflags> struct exp_op_addm { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = ((ra + rb) & rc))); return rd; } }; uopimpl_func_t implmap_addm[4][2] = { {&aluop<OP_addm, exp_op_addm, W8, 0>, &aluop<OP_addm, exp_op_addm, W8, ((SETFLAG_ZF))>}, {&aluop<OP_addm, exp_op_addm, W16, 0>, &aluop<OP_addm, exp_op_addm, W16, ((SETFLAG_ZF))>}, {&aluop<OP_addm, exp_op_addm, W32, 0>, &aluop<OP_addm, exp_op_addm, W32, ((SETFLAG_ZF))>}, {&aluop<OP_addm, exp_op_addm, W64, 0>, &aluop<OP_addm, exp_op_addm, W64, ((SETFLAG_ZF))>} };;;
template <typename T, int genflags> struct exp_op_subm { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = ((ra - rb) & rc))); return rd; } }; uopimpl_func_t implmap_subm[4][2] = { {&aluop<OP_subm, exp_op_subm, W8, 0>, &aluop<OP_subm, exp_op_subm, W8, ((SETFLAG_ZF))>}, {&aluop<OP_subm, exp_op_subm, W16, 0>, &aluop<OP_subm, exp_op_subm, W16, ((SETFLAG_ZF))>}, {&aluop<OP_subm, exp_op_subm, W32, 0>, &aluop<OP_subm, exp_op_subm, W32, ((SETFLAG_ZF))>}, {&aluop<OP_subm, exp_op_subm, W64, 0>, &aluop<OP_subm, exp_op_subm, W64, ((SETFLAG_ZF))>} };;;

template <typename T, int genflags> struct exp_op_bt { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rb = (((rb) >> (0)) & ((((lg<(sizeof(T)*8)>::value)) == 64) ? (W64)(-1LL) : ((1LL << ((lg<(sizeof(T)*8)>::value)))-1LL))), cf = (((ra) >> (rb)) & 1), rd = (cf) ? -1 : +1)); return rd; } }; uopimpl_func_t implmap_bt[4][2] = { {&aluop<OP_bt, exp_op_bt, W8, 0>, &aluop<OP_bt, exp_op_bt, W8, ((SETFLAG_CF))>}, {&aluop<OP_bt, exp_op_bt, W16, 0>, &aluop<OP_bt, exp_op_bt, W16, ((SETFLAG_CF))>}, {&aluop<OP_bt, exp_op_bt, W32, 0>, &aluop<OP_bt, exp_op_bt, W32, ((SETFLAG_CF))>}, {&aluop<OP_bt, exp_op_bt, W64, 0>, &aluop<OP_bt, exp_op_bt, W64, ((SETFLAG_CF))>} };;;
template <typename T, int genflags> struct exp_op_bts { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rb = (((rb) >> (0)) & ((((lg<(sizeof(T)*8)>::value)) == 64) ? (W64)(-1LL) : ((1LL << ((lg<(sizeof(T)*8)>::value)))-1LL))), cf = (((ra) >> (rb)) & 1), rd = ra | (1LL << rb))); return rd; } }; uopimpl_func_t implmap_bts[4][2] = { {&aluop<OP_bts, exp_op_bts, W8, 0>, &aluop<OP_bts, exp_op_bts, W8, ((SETFLAG_CF))>}, {&aluop<OP_bts, exp_op_bts, W16, 0>, &aluop<OP_bts, exp_op_bts, W16, ((SETFLAG_CF))>}, {&aluop<OP_bts, exp_op_bts, W32, 0>, &aluop<OP_bts, exp_op_bts, W32, ((SETFLAG_CF))>}, {&aluop<OP_bts, exp_op_bts, W64, 0>, &aluop<OP_bts, exp_op_bts, W64, ((SETFLAG_CF))>} };;;
template <typename T, int genflags> struct exp_op_btr { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rb = (((rb) >> (0)) & ((((lg<(sizeof(T)*8)>::value)) == 64) ? (W64)(-1LL) : ((1LL << ((lg<(sizeof(T)*8)>::value)))-1LL))), cf = (((ra) >> (rb)) & 1), rd = ra & ~(1LL << rb))); return rd; } }; uopimpl_func_t implmap_btr[4][2] = { {&aluop<OP_btr, exp_op_btr, W8, 0>, &aluop<OP_btr, exp_op_btr, W8, ((SETFLAG_CF))>}, {&aluop<OP_btr, exp_op_btr, W16, 0>, &aluop<OP_btr, exp_op_btr, W16, ((SETFLAG_CF))>}, {&aluop<OP_btr, exp_op_btr, W32, 0>, &aluop<OP_btr, exp_op_btr, W32, ((SETFLAG_CF))>}, {&aluop<OP_btr, exp_op_btr, W64, 0>, &aluop<OP_btr, exp_op_btr, W64, ((SETFLAG_CF))>} };;;
template <typename T, int genflags> struct exp_op_btc { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rb = (((rb) >> (0)) & ((((lg<(sizeof(T)*8)>::value)) == 64) ? (W64)(-1LL) : ((1LL << ((lg<(sizeof(T)*8)>::value)))-1LL))), cf = (((ra) >> (rb)) & 1), rd = ra ^ (1LL << rb))); return rd; } }; uopimpl_func_t implmap_btc[4][2] = { {&aluop<OP_btc, exp_op_btc, W8, 0>, &aluop<OP_btc, exp_op_btc, W8, ((SETFLAG_CF))>}, {&aluop<OP_btc, exp_op_btc, W16, 0>, &aluop<OP_btc, exp_op_btc, W16, ((SETFLAG_CF))>}, {&aluop<OP_btc, exp_op_btc, W32, 0>, &aluop<OP_btc, exp_op_btc, W32, ((SETFLAG_CF))>}, {&aluop<OP_btc, exp_op_btc, W64, 0>, &aluop<OP_btc, exp_op_btc, W64, ((SETFLAG_CF))>} };;;

template <typename T> inline W64 x86_bswap(T v) { asm("bswap %[v]" : [v] "+r" (v)); return v; }

template <typename T, int genflags> struct exp_op_bswap { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; ((rd = ((sizeof(T) >= 4) ? x86_bswap(rb) : 0))); return rd; } }; uopimpl_func_t implmap_bswap[4][2] = { {&aluop<OP_bswap, exp_op_bswap, W8, 0>, &aluop<OP_bswap, exp_op_bswap, W8, ((0))>}, {&aluop<OP_bswap, exp_op_bswap, W16, 0>, &aluop<OP_bswap, exp_op_bswap, W16, ((0))>}, {&aluop<OP_bswap, exp_op_bswap, W32, 0>, &aluop<OP_bswap, exp_op_bswap, W32, ((0))>}, {&aluop<OP_bswap, exp_op_bswap, W64, 0>, &aluop<OP_bswap, exp_op_bswap, W64, ((0))>} };;;

template <int ptlopcode, template<typename, int> class func, typename T, int genflags>
inline void ctzclzop(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  byte cf = 0, of = 0;
  func<T, genflags> f;
  T rt = f(ra, rb, rc, raflags, rbflags, rcflags, cf, of);
  state.reg.rddata = x86_merge<T>(ra, rt);
  state.reg.rdflags = (((T)rb) == 0) ? 0x040 : 0;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(T))>::value));
}

template <typename T, int genflags> struct exp_op_ctz { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; (rd = (rb) ? lsbindex64(rb) : 0); return rd; } };
uopimpl_func_t implmap_ctz[4][2] = { {&ctzclzop<OP_ctz, exp_op_ctz, W8, 0>, &ctzclzop<OP_ctz, exp_op_ctz, W8, (SETFLAG_ZF)>}, {&ctzclzop<OP_ctz, exp_op_ctz, W16, 0>, &ctzclzop<OP_ctz, exp_op_ctz, W16, (SETFLAG_ZF)>}, {&ctzclzop<OP_ctz, exp_op_ctz, W32, 0>, &ctzclzop<OP_ctz, exp_op_ctz, W32, (SETFLAG_ZF)>}, {&ctzclzop<OP_ctz, exp_op_ctz, W64, 0>, &ctzclzop<OP_ctz, exp_op_ctz, W64, (SETFLAG_ZF)>} };

template <typename T, int genflags> struct exp_op_clz { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; (rd = (rb) ? msbindex64(rb) : 0); return rd; } };
uopimpl_func_t implmap_clz[4][2] = { {&ctzclzop<OP_clz, exp_op_clz, W8, 0>, &ctzclzop<OP_clz, exp_op_clz, W8, (SETFLAG_ZF)>}, {&ctzclzop<OP_clz, exp_op_clz, W16, 0>, &ctzclzop<OP_clz, exp_op_clz, W16, (SETFLAG_ZF)>}, {&ctzclzop<OP_clz, exp_op_clz, W32, 0>, &ctzclzop<OP_clz, exp_op_clz, W32, (SETFLAG_ZF)>}, {&ctzclzop<OP_clz, exp_op_clz, W64, 0>, &ctzclzop<OP_clz, exp_op_clz, W64, (SETFLAG_ZF)>} };

void uop_impl_collcc(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  int flags = (raflags & 0x0d4) | (rbflags & 0x001) | (rcflags & 0x800);
  state.reg.rddata = flags;
  state.reg.rdflags = flags;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_collcc, 0);
}

void uop_impl_movrcc(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  int flags = rb & (0x0d4|0x001|0x800);
  state.reg.rddata = flags;
  state.reg.rdflags = flags;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_movrcc, 0);
}

void uop_impl_movccr(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  int flags = rbflags;
  state.reg.rddata = flags;
  state.reg.rdflags = flags;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_movccr, 0);
}

void uop_impl_andcc(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  state.reg.rddata = 0;
  state.reg.rdflags = (raflags & rbflags) & (0x0d4|0x001|0x800);
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_andcc, 0);
}

void uop_impl_orcc(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  state.reg.rddata = 0;
  state.reg.rdflags = (raflags | rbflags) & (0x0d4|0x001|0x800);
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_orcc, 0);
}

void uop_impl_ornotcc(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  state.reg.rddata = 0;
  state.reg.rdflags = (raflags | (~rbflags)) & (0x0d4|0x001|0x800);
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_ornot, 0);
}

void uop_impl_xorcc(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  state.reg.rddata = 0;
  state.reg.rdflags = (raflags ^ rbflags) & (0x0d4|0x001|0x800);
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_xorcc, 0);
}
# 288 "uopimpl.cpp"
template <typename T, int genflags> struct x86_op_add { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("pushw %[rcflags]; popfw; " "adc" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+q" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "qm" (rb), [rcflags] "rm" (rcflags)); else asm("adc" " %[rb],%[ra]" : [ra] "+q" (ra) : [rb] "qm" (rb) : "flags"); return ra; } }; uopimpl_func_t implmap_add[4][2] = { {&aluop<OP_add, x86_op_add, W8, 0>, &aluop<OP_add, x86_op_add, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_add, x86_op_add, W16, 0>, &aluop<OP_add, x86_op_add, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_add, x86_op_add, W32, 0>, &aluop<OP_add, x86_op_add, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_add, x86_op_add, W64, 0>, &aluop<OP_add, x86_op_add, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;;
template <typename T, int genflags> struct x86_op_sub { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("pushw %[rcflags]; popfw; " "sbb" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+q" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "qm" (rb), [rcflags] "rm" (rcflags)); else asm("sbb" " %[rb],%[ra]" : [ra] "+q" (ra) : [rb] "qm" (rb) : "flags"); return ra; } }; uopimpl_func_t implmap_sub[4][2] = { {&aluop<OP_sub, x86_op_sub, W8, 0>, &aluop<OP_sub, x86_op_sub, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_sub, x86_op_sub, W16, 0>, &aluop<OP_sub, x86_op_sub, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_sub, x86_op_sub, W32, 0>, &aluop<OP_sub, x86_op_sub, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_sub, x86_op_sub, W64, 0>, &aluop<OP_sub, x86_op_sub, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;;
# 311 "uopimpl.cpp"
template <int ptlopcode, template<typename, int> class func, typename T, int genflags, int rcshift>
inline void aluop3s(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  byte cf = 0, of = 0;
  func<T, genflags> f;
  T rt = f(ra, rb, rc << rcshift, raflags, rbflags, rcflags, cf, of);
  state.reg.rddata = x86_merge<T>(ra, rt);

  state.reg.rdflags = x86_genflags<T>(rt);
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(T))>::value), 0, rcshift);
}
# 357 "uopimpl.cpp"
template <typename T, int genflags> struct exp_op_adda { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; if((raflags & 0x080) && !(0x8000000000000000 & ra)) { ra = (W64s)((W32s)ra); } if((rbflags & 0x080) && !(0x8000000000000000 & rb)) { rb = (W64s)((W32s)rb); } if((rcflags & 0x080) && !(0x8000000000000000 & rc)) { rc = (W64s)((W32s)rc); } ((rd = (ra + rb + rc))); return rd; } }; uopimpl_func_t implmap_adda[4][4][2] = { { {&aluop3s<OP_adda, exp_op_adda, W8, 0, 0>, &aluop3s<OP_adda, exp_op_adda, W8, ((0)), 0>}, {&aluop3s<OP_adda, exp_op_adda, W8, 0, 1>, &aluop3s<OP_adda, exp_op_adda, W8, ((0)), 1>}, {&aluop3s<OP_adda, exp_op_adda, W8, 0, 2>, &aluop3s<OP_adda, exp_op_adda, W8, ((0)), 2>}, {&aluop3s<OP_adda, exp_op_adda, W8, 0, 3>, &aluop3s<OP_adda, exp_op_adda, W8, ((0)), 3>}, }, { {&aluop3s<OP_adda, exp_op_adda, W16, 0, 0>, &aluop3s<OP_adda, exp_op_adda, W16, ((0)), 0>}, {&aluop3s<OP_adda, exp_op_adda, W16, 0, 1>, &aluop3s<OP_adda, exp_op_adda, W16, ((0)), 1>}, {&aluop3s<OP_adda, exp_op_adda, W16, 0, 2>, &aluop3s<OP_adda, exp_op_adda, W16, ((0)), 2>}, {&aluop3s<OP_adda, exp_op_adda, W16, 0, 3>, &aluop3s<OP_adda, exp_op_adda, W16, ((0)), 3>}, }, { {&aluop3s<OP_adda, exp_op_adda, W32, 0, 0>, &aluop3s<OP_adda, exp_op_adda, W32, ((0)), 0>}, {&aluop3s<OP_adda, exp_op_adda, W32, 0, 1>, &aluop3s<OP_adda, exp_op_adda, W32, ((0)), 1>}, {&aluop3s<OP_adda, exp_op_adda, W32, 0, 2>, &aluop3s<OP_adda, exp_op_adda, W32, ((0)), 2>}, {&aluop3s<OP_adda, exp_op_adda, W32, 0, 3>, &aluop3s<OP_adda, exp_op_adda, W32, ((0)), 3>}, }, { {&aluop3s<OP_adda, exp_op_adda, W64, 0, 0>, &aluop3s<OP_adda, exp_op_adda, W64, ((0)), 0>}, {&aluop3s<OP_adda, exp_op_adda, W64, 0, 1>, &aluop3s<OP_adda, exp_op_adda, W64, ((0)), 1>}, {&aluop3s<OP_adda, exp_op_adda, W64, 0, 2>, &aluop3s<OP_adda, exp_op_adda, W64, ((0)), 2>}, {&aluop3s<OP_adda, exp_op_adda, W64, 0, 3>, &aluop3s<OP_adda, exp_op_adda, W64, ((0)), 3>}, }, };;
template <typename T, int genflags> struct exp_op_suba { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { cf = 0; of = 0; W64 rd; if((raflags & 0x080) && !(0x8000000000000000 & ra)) { ra = (W64s)((W32s)ra); } if((rbflags & 0x080) && !(0x8000000000000000 & rb)) { rb = (W64s)((W32s)rb); } if((rcflags & 0x080) && !(0x8000000000000000 & rc)) { rc = (W64s)((W32s)rc); } ((rd = (ra - rb + rc))); return rd; } }; uopimpl_func_t implmap_suba[4][4][2] = { { {&aluop3s<OP_suba, exp_op_suba, W8, 0, 0>, &aluop3s<OP_suba, exp_op_suba, W8, ((0)), 0>}, {&aluop3s<OP_suba, exp_op_suba, W8, 0, 1>, &aluop3s<OP_suba, exp_op_suba, W8, ((0)), 1>}, {&aluop3s<OP_suba, exp_op_suba, W8, 0, 2>, &aluop3s<OP_suba, exp_op_suba, W8, ((0)), 2>}, {&aluop3s<OP_suba, exp_op_suba, W8, 0, 3>, &aluop3s<OP_suba, exp_op_suba, W8, ((0)), 3>}, }, { {&aluop3s<OP_suba, exp_op_suba, W16, 0, 0>, &aluop3s<OP_suba, exp_op_suba, W16, ((0)), 0>}, {&aluop3s<OP_suba, exp_op_suba, W16, 0, 1>, &aluop3s<OP_suba, exp_op_suba, W16, ((0)), 1>}, {&aluop3s<OP_suba, exp_op_suba, W16, 0, 2>, &aluop3s<OP_suba, exp_op_suba, W16, ((0)), 2>}, {&aluop3s<OP_suba, exp_op_suba, W16, 0, 3>, &aluop3s<OP_suba, exp_op_suba, W16, ((0)), 3>}, }, { {&aluop3s<OP_suba, exp_op_suba, W32, 0, 0>, &aluop3s<OP_suba, exp_op_suba, W32, ((0)), 0>}, {&aluop3s<OP_suba, exp_op_suba, W32, 0, 1>, &aluop3s<OP_suba, exp_op_suba, W32, ((0)), 1>}, {&aluop3s<OP_suba, exp_op_suba, W32, 0, 2>, &aluop3s<OP_suba, exp_op_suba, W32, ((0)), 2>}, {&aluop3s<OP_suba, exp_op_suba, W32, 0, 3>, &aluop3s<OP_suba, exp_op_suba, W32, ((0)), 3>}, }, { {&aluop3s<OP_suba, exp_op_suba, W64, 0, 0>, &aluop3s<OP_suba, exp_op_suba, W64, ((0)), 0>}, {&aluop3s<OP_suba, exp_op_suba, W64, 0, 1>, &aluop3s<OP_suba, exp_op_suba, W64, ((0)), 1>}, {&aluop3s<OP_suba, exp_op_suba, W64, 0, 2>, &aluop3s<OP_suba, exp_op_suba, W64, ((0)), 2>}, {&aluop3s<OP_suba, exp_op_suba, W64, 0, 3>, &aluop3s<OP_suba, exp_op_suba, W64, ((0)), 3>}, }, };;
# 411 "uopimpl.cpp"
template <int ptlopcode, template<typename, int> class func, typename T, int genflags>
inline void shiftop(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  byte cf = 0, of = 0;
  func<T, genflags> f;
  T rt = f(ra, rb, rc, raflags, rbflags, rcflags, cf, of);
  state.reg.rddata = x86_merge<T>(ra, rt);
  int allflags = (of << 11) | cf | x86_genflags<T>(rt);
  state.reg.rdflags = (rb == 0) ? rcflags : allflags;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(T))>::value));
}
# 439 "uopimpl.cpp"
template <typename T, int genflags> struct x86_op_shl { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("pushw %[rcflags]; popfw; " "shl" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+r" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "c" ((byte)rb), [rcflags] "rm" (rcflags)); else asm("shl" " %[rb],%[ra]" : [ra] "+r" (ra) : [rb] "c" ((byte)rb) : "flags"); return ra; } }; uopimpl_func_t implmap_shl[4][2] = { {&shiftop<OP_shl, x86_op_shl, W8, 0>, &shiftop<OP_shl, x86_op_shl, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shl, x86_op_shl, W16, 0>, &shiftop<OP_shl, x86_op_shl, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shl, x86_op_shl, W32, 0>, &shiftop<OP_shl, x86_op_shl, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shl, x86_op_shl, W64, 0>, &shiftop<OP_shl, x86_op_shl, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;
template <typename T, int genflags> struct x86_op_shr { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("pushw %[rcflags]; popfw; " "shr" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+r" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "c" ((byte)rb), [rcflags] "rm" (rcflags)); else asm("shr" " %[rb],%[ra]" : [ra] "+r" (ra) : [rb] "c" ((byte)rb) : "flags"); return ra; } }; uopimpl_func_t implmap_shr[4][2] = { {&shiftop<OP_shr, x86_op_shr, W8, 0>, &shiftop<OP_shr, x86_op_shr, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shr, x86_op_shr, W16, 0>, &shiftop<OP_shr, x86_op_shr, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shr, x86_op_shr, W32, 0>, &shiftop<OP_shr, x86_op_shr, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shr, x86_op_shr, W64, 0>, &shiftop<OP_shr, x86_op_shr, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;
template <typename T, int genflags> struct x86_op_sar { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("pushw %[rcflags]; popfw; " "sar" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+r" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "c" ((byte)rb), [rcflags] "rm" (rcflags)); else asm("sar" " %[rb],%[ra]" : [ra] "+r" (ra) : [rb] "c" ((byte)rb) : "flags"); return ra; } }; uopimpl_func_t implmap_sar[4][2] = { {&shiftop<OP_sar, x86_op_sar, W8, 0>, &shiftop<OP_sar, x86_op_sar, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_sar, x86_op_sar, W16, 0>, &shiftop<OP_sar, x86_op_sar, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_sar, x86_op_sar, W32, 0>, &shiftop<OP_sar, x86_op_sar, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_sar, x86_op_sar, W64, 0>, &shiftop<OP_sar, x86_op_sar, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;

template <typename T, int genflags> struct x86_op_shls { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("" "shl" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+r" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "c" ((byte)rb), [rcflags] "rm" (rcflags)); else asm("shl" " %[rb],%[ra]" : [ra] "+r" (ra) : [rb] "c" ((byte)rb) : "flags"); return ra; } }; uopimpl_func_t implmap_shls[4][2] = { {&shiftop<OP_shls, x86_op_shls, W8, 0>, &shiftop<OP_shls, x86_op_shls, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shls, x86_op_shls, W16, 0>, &shiftop<OP_shls, x86_op_shls, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shls, x86_op_shls, W32, 0>, &shiftop<OP_shls, x86_op_shls, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shls, x86_op_shls, W64, 0>, &shiftop<OP_shls, x86_op_shls, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;
template <typename T, int genflags> struct x86_op_shrs { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("" "shr" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+r" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "c" ((byte)rb), [rcflags] "rm" (rcflags)); else asm("shr" " %[rb],%[ra]" : [ra] "+r" (ra) : [rb] "c" ((byte)rb) : "flags"); return ra; } }; uopimpl_func_t implmap_shrs[4][2] = { {&shiftop<OP_shrs, x86_op_shrs, W8, 0>, &shiftop<OP_shrs, x86_op_shrs, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shrs, x86_op_shrs, W16, 0>, &shiftop<OP_shrs, x86_op_shrs, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shrs, x86_op_shrs, W32, 0>, &shiftop<OP_shrs, x86_op_shrs, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_shrs, x86_op_shrs, W64, 0>, &shiftop<OP_shrs, x86_op_shrs, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;
template <typename T, int genflags> struct x86_op_sars { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("" "sar" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+r" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "c" ((byte)rb), [rcflags] "rm" (rcflags)); else asm("sar" " %[rb],%[ra]" : [ra] "+r" (ra) : [rb] "c" ((byte)rb) : "flags"); return ra; } }; uopimpl_func_t implmap_sars[4][2] = { {&shiftop<OP_sars, x86_op_sars, W8, 0>, &shiftop<OP_sars, x86_op_sars, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_sars, x86_op_sars, W16, 0>, &shiftop<OP_sars, x86_op_sars, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_sars, x86_op_sars, W32, 0>, &shiftop<OP_sars, x86_op_sars, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_sars, x86_op_sars, W64, 0>, &shiftop<OP_sars, x86_op_sars, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;

template <typename T, int genflags> struct x86_op_rotl { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("pushw %[rcflags]; popfw; " "rol" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+r" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "c" ((byte)rb), [rcflags] "rm" (rcflags)); else asm("rol" " %[rb],%[ra]" : [ra] "+r" (ra) : [rb] "c" ((byte)rb) : "flags"); return ra; } }; uopimpl_func_t implmap_rotl[4][2] = { {&shiftop<OP_rotl, x86_op_rotl, W8, 0>, &shiftop<OP_rotl, x86_op_rotl, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotl, x86_op_rotl, W16, 0>, &shiftop<OP_rotl, x86_op_rotl, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotl, x86_op_rotl, W32, 0>, &shiftop<OP_rotl, x86_op_rotl, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotl, x86_op_rotl, W64, 0>, &shiftop<OP_rotl, x86_op_rotl, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;
template <typename T, int genflags> struct x86_op_rotr { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("pushw %[rcflags]; popfw; " "ror" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+r" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "c" ((byte)rb), [rcflags] "rm" (rcflags)); else asm("ror" " %[rb],%[ra]" : [ra] "+r" (ra) : [rb] "c" ((byte)rb) : "flags"); return ra; } }; uopimpl_func_t implmap_rotr[4][2] = { {&shiftop<OP_rotr, x86_op_rotr, W8, 0>, &shiftop<OP_rotr, x86_op_rotr, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotr, x86_op_rotr, W16, 0>, &shiftop<OP_rotr, x86_op_rotr, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotr, x86_op_rotr, W32, 0>, &shiftop<OP_rotr, x86_op_rotr, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotr, x86_op_rotr, W64, 0>, &shiftop<OP_rotr, x86_op_rotr, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;
template <typename T, int genflags> struct x86_op_rotcl { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("pushw %[rcflags]; popfw; " "rcl" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+r" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "c" ((byte)rb), [rcflags] "rm" (rcflags)); else asm("rcl" " %[rb],%[ra]" : [ra] "+r" (ra) : [rb] "c" ((byte)rb) : "flags"); return ra; } }; uopimpl_func_t implmap_rotcl[4][2] = { {&shiftop<OP_rotcl, x86_op_rotcl, W8, 0>, &shiftop<OP_rotcl, x86_op_rotcl, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotcl, x86_op_rotcl, W16, 0>, &shiftop<OP_rotcl, x86_op_rotcl, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotcl, x86_op_rotcl, W32, 0>, &shiftop<OP_rotcl, x86_op_rotcl, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotcl, x86_op_rotcl, W64, 0>, &shiftop<OP_rotcl, x86_op_rotcl, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;
template <typename T, int genflags> struct x86_op_rotcr { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { if (genflags & (SETFLAG_CF|SETFLAG_OF)) asm("pushw %[rcflags]; popfw; " "rcr" " %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+r" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "c" ((byte)rb), [rcflags] "rm" (rcflags)); else asm("rcr" " %[rb],%[ra]" : [ra] "+r" (ra) : [rb] "c" ((byte)rb) : "flags"); return ra; } }; uopimpl_func_t implmap_rotcr[4][2] = { {&shiftop<OP_rotcr, x86_op_rotcr, W8, 0>, &shiftop<OP_rotcr, x86_op_rotcr, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotcr, x86_op_rotcr, W16, 0>, &shiftop<OP_rotcr, x86_op_rotcr, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotcr, x86_op_rotcr, W32, 0>, &shiftop<OP_rotcr, x86_op_rotcr, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&shiftop<OP_rotcr, x86_op_rotcr, W64, 0>, &shiftop<OP_rotcr, x86_op_rotcr, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;
# 467 "uopimpl.cpp"
template <int ptlopcode, typename T, int ZEROEXT, int SIGNEXT>
void exp_op_mask(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  static const int sizeshift = (lg<(sizeof(T))>::value);
  W64 shmask = (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL));
  shmask = shmask | (shmask << 6) | (shmask << 12);
  rc &= shmask;

  int ms = (((rc) >> (0)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));
  int mc = (((rc) >> (6)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));
  int ds = (((rc) >> (12)) & (((6) == 64) ? (W64)(-1LL) : ((1LL << (6))-1LL)));

  int mcms = (((rc) >> (0)) & (((12) == 64) ? (W64)(-1LL) : ((1LL << (12))-1LL)));


  W64 M = x86_ror<T>((((mc) == 64) ? (W64)(-1LL) : ((1LL << (mc))-1LL)), ms);
  W64 rd = (ra & ~M) | (x86_ror<T>(rb, ds) & M);
# 497 "uopimpl.cpp"
  if (ZEROEXT) {

    rd = rd & (((ms+mc) == 64) ? (W64)(-1LL) : ((1LL << (ms+mc))-1LL));
  } else if (SIGNEXT) {

    rd = signext64(rd, ms+mc);
  } else {
    rd = rd;
  }

  state.reg.rddata = x86_merge<T>(ra, rd);
  state.reg.rdflags = x86_genflags<T>(rd);
  bool sf = (((state.reg.rdflags) >> ((lg<(0x080)>::value))) & 1);
# 522 "uopimpl.cpp"
  state.reg.rdflags |= (((raflags) >> ((lg<(0x001)>::value))) & 1) << ((lg<(0x001)>::value));
  state.reg.rdflags |= (sf != (((raflags) >> ((lg<(0x800)>::value))) & 1)) << ((lg<(0x800)>::value));

  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, 0);
}


uopimpl_func_t implmap_mask[4][3] = {
  {&exp_op_mask<OP_mask, W8, 0, 0>, &exp_op_mask<OP_mask, W8, 1, 0>, &exp_op_mask<OP_mask, W8, 0, 1>},
  {&exp_op_mask<OP_mask, W16, 0, 0>, &exp_op_mask<OP_mask, W16, 1, 0>, &exp_op_mask<OP_mask, W16, 0, 1>},
  {&exp_op_mask<OP_mask, W32, 0, 0>, &exp_op_mask<OP_mask, W32, 1, 0>, &exp_op_mask<OP_mask, W32, 0, 1>},
  {&exp_op_mask<OP_mask, W64, 0, 0>, &exp_op_mask<OP_mask, W64, 1, 0>, &exp_op_mask<OP_mask, W64, 0, 1>}
};


uopimpl_func_t implmap_maskb[4][3] = {
  {&exp_op_mask<OP_maskb, W8, 0, 0>, &exp_op_mask<OP_maskb, W8, 1, 0>, &exp_op_mask<OP_maskb, W8, 0, 1>},
  {&exp_op_mask<OP_maskb, W16, 0, 0>, &exp_op_mask<OP_maskb, W16, 1, 0>, &exp_op_mask<OP_maskb, W16, 0, 1>},
  {&exp_op_mask<OP_maskb, W32, 0, 0>, &exp_op_mask<OP_maskb, W32, 1, 0>, &exp_op_mask<OP_maskb, W32, 0, 1>},
  {&exp_op_mask<OP_maskb, W64, 0, 0>, &exp_op_mask<OP_maskb, W64, 1, 0>, &exp_op_mask<OP_maskb, W64, 0, 1>}
};







void uop_impl_permb(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  static const bool DEBUG = 0;

  union vec128 {
    struct { W64 lo, hi; } w64;
    struct { byte b[16]; } bytes;
  };

  union vec64 {
    struct { W64 data; } w64;
    struct { byte b[8]; } bytes;
  };

  vec128 ab;
  vec64 d;

  ab.w64.lo = ra;
  ab.w64.hi = rb;

  if (__builtin_expect(!!(DEBUG), 0)) logfile << "Permute: ", *(vec16b*)&ab, " by control 0x", hexstring(rc, 32), ":", endl;
  for (size_t i = 0; i < (8); i++) {
    int which = (((rc) >> (i*4)) & (((4) == 64) ? (W64)(-1LL) : ((1LL << (4))-1LL)));

    if (__builtin_expect(!!(DEBUG), 0)) logfile << "  z[", i, "] = ", "ab[", which, "] = 0x", hexstring(ab.bytes.b[which], 8), endl;
    d.bytes.b[i] = ab.bytes.b[which];
  }

  state.reg.rddata = d.w64.data;
  state.reg.rdflags = x86_genflags<W64>(d.w64.data);

  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_permb, 0);
}
# 614 "uopimpl.cpp"
template <typename T, int genflags> struct x86_op_mull { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { Wmax rax = ra; Wmax rdx; asm("imul" " %[rb]; setc %[cf]; seto %[of];" : [rax] "+a" (rax), [rdx] "+d" (rdx), [cf] "=q" (cf), [of] "=q" (of) : [rb] "q" (rb)); Wmax rd; if (sizeof(T) == 1) ((rd = (T)rax)); else ((rd = (T)rax)); return rd; } }; uopimpl_func_t implmap_mull[4][2] = { {&aluop<OP_mull, x86_op_mull, W8, 0>, &aluop<OP_mull, x86_op_mull, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_mull, x86_op_mull, W16, 0>, &aluop<OP_mull, x86_op_mull, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_mull, x86_op_mull, W32, 0>, &aluop<OP_mull, x86_op_mull, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_mull, x86_op_mull, W64, 0>, &aluop<OP_mull, x86_op_mull, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;;
template <typename T, int genflags> struct x86_op_mulh { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { Wmax rax = ra; Wmax rdx; asm("imul" " %[rb]; setc %[cf]; seto %[of];" : [rax] "+a" (rax), [rdx] "+d" (rdx), [cf] "=q" (cf), [of] "=q" (of) : [rb] "q" (rb)); Wmax rd; if (sizeof(T) == 1) ((rd = (((rax) >> (8)) & (((8) == 64) ? (W64)(-1LL) : ((1LL << (8))-1LL))))); else ((rd = (T)rdx)); return rd; } }; uopimpl_func_t implmap_mulh[4][2] = { {&aluop<OP_mulh, x86_op_mulh, W8, 0>, &aluop<OP_mulh, x86_op_mulh, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_mulh, x86_op_mulh, W16, 0>, &aluop<OP_mulh, x86_op_mulh, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_mulh, x86_op_mulh, W32, 0>, &aluop<OP_mulh, x86_op_mulh, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_mulh, x86_op_mulh, W64, 0>, &aluop<OP_mulh, x86_op_mulh, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;;
template <typename T, int genflags> struct x86_op_mulhu { T operator ()(T ra, T rb, T rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) { Wmax rax = ra; Wmax rdx; asm("mul" " %[rb]; setc %[cf]; seto %[of];" : [rax] "+a" (rax), [rdx] "+d" (rdx), [cf] "=q" (cf), [of] "=q" (of) : [rb] "q" (rb)); Wmax rd; if (sizeof(T) == 1) ((rd = (((rax) >> (8)) & (((8) == 64) ? (W64)(-1LL) : ((1LL << (8))-1LL))))); else ((rd = (T)rdx)); return rd; } }; uopimpl_func_t implmap_mulhu[4][2] = { {&aluop<OP_mulhu, x86_op_mulhu, W8, 0>, &aluop<OP_mulhu, x86_op_mulhu, W8, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_mulhu, x86_op_mulhu, W16, 0>, &aluop<OP_mulhu, x86_op_mulhu, W16, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_mulhu, x86_op_mulhu, W32, 0>, &aluop<OP_mulhu, x86_op_mulhu, W32, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>}, {&aluop<OP_mulhu, x86_op_mulhu, W64, 0>, &aluop<OP_mulhu, x86_op_mulhu, W64, ((SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF))>} };;;


template <typename T, int genflags>
struct x86_op_mulhl {
  W64 operator ()(W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags, byte& cf, byte& of) {
    cf = 0; of = 0;
    T a = T(ra);
    T b = T(rb);
    return a * b;
  }
};

template <typename T>
inline void uop_impl_mulhl(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  T a = T(ra);
  T b = T(rb);
  W64 z = W64(a) * W64(b);
# 646 "uopimpl.cpp"
  state.reg.rddata = z;
  state.reg.rdflags = x86_genflags<W64>(z);
}

uopimpl_func_t implmap_mulhl[4] = {&uop_impl_mulhl<W8>, &uop_impl_mulhl<W16>, &uop_impl_mulhl<W32>, &uop_impl_mulhl<W64>};
# 663 "uopimpl.cpp"
template <int ptlopcode, typename T>
void x86_div(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  T quotient, remainder;

  if (__builtin_expect(!!(!div_rem<T>(quotient, remainder, T(ra), T(rb), T(rc))), 0)) {
    state.reg.rddata = EXCEPTION_DivideOverflow;
    state.reg.rdflags = 0x002;
    return;
  }

  state.reg.rddata = x86_merge<T>(rb, quotient);
  state.reg.rdflags = x86_genflags<T>(quotient);
}

template <int ptlopcode, typename T>
void x86_rem(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  T quotient, remainder;

  if (__builtin_expect(!!(!div_rem<T>(quotient, remainder, T(ra), T(rb), T(rc))), 0)) {
    state.reg.rddata = EXCEPTION_DivideOverflow;
    state.reg.rdflags = 0x002;
    return;
  }

  state.reg.rddata = x86_merge<T>(ra, remainder);
  state.reg.rdflags = x86_genflags<T>(remainder);
}

template <int ptlopcode, typename T>
void x86_divs(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  T quotient, remainder;

  if (__builtin_expect(!!(!div_rem_s<T>(quotient, remainder, T(ra), T(rb), T(rc))), 0)) {
    state.reg.rddata = EXCEPTION_DivideOverflow;
    state.reg.rdflags = 0x002;
    return;
  }

  state.reg.rddata = x86_merge<T>(rb, quotient);
  state.reg.rdflags = x86_genflags<T>(quotient);
}

template <int ptlopcode, typename T>
void x86_rems(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  T quotient, remainder;

  if (__builtin_expect(!!(!div_rem_s<T>(quotient, remainder, T(ra), T(rb), T(rc))), 0)) {
    state.reg.rddata = EXCEPTION_DivideOverflow;
    state.reg.rdflags = 0x002;
    return;
  }

  state.reg.rddata = x86_merge<T>(ra, remainder);
  state.reg.rdflags = x86_genflags<T>(remainder);
}

uopimpl_func_t implmap_div[4] = {&x86_div<OP_div, W8>, &x86_div<OP_div, W16>, &x86_div<OP_div, W32>, &x86_div<OP_div, W64>};
uopimpl_func_t implmap_rem[4] = {&x86_rem<OP_rem, W8>, &x86_rem<OP_rem, W16>, &x86_rem<OP_rem, W32>, &x86_rem<OP_rem, W64>};
uopimpl_func_t implmap_divs[4] = {&x86_divs<OP_divs, W8>, &x86_divs<OP_divs, W16>, &x86_divs<OP_divs, W32>, &x86_divs<OP_divs, W64>};
uopimpl_func_t implmap_rems[4] = {&x86_rems<OP_rems, W8>, &x86_rems<OP_rems, W16>, &x86_rems<OP_rems, W32>, &x86_rems<OP_rems, W64>};

template <int ptlopcode, typename T, bool compare_for_max>
void uop_impl_min_max(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  T a = ra;
  T b = rb;
  T z = (compare_for_max) ? max(a, b) : min(a, b);
  state.reg.rddata = x86_merge<T>(ra, z);
  state.reg.rdflags = x86_genflags<T>(z);
}

uopimpl_func_t implmap_min[4] = {&uop_impl_min_max<OP_min, W8, 0>, &uop_impl_min_max<OP_min, W16, 0>, &uop_impl_min_max<OP_min, W32, 0>, &uop_impl_min_max<OP_min, W64, 0>};
uopimpl_func_t implmap_max[4] = {&uop_impl_min_max<OP_max, W8, 1>, &uop_impl_min_max<OP_max, W16, 1>, &uop_impl_min_max<OP_max, W32, 1>, &uop_impl_min_max<OP_max, W64, 1>};
uopimpl_func_t implmap_min_s[4] = {&uop_impl_min_max<OP_min, W8s, 0>, &uop_impl_min_max<OP_min, W16s, 0>, &uop_impl_min_max<OP_min, W32s, 0>, &uop_impl_min_max<OP_min, W64s, 0>};
uopimpl_func_t implmap_max_s[4] = {&uop_impl_min_max<OP_max, W8s, 1>, &uop_impl_min_max<OP_max, W16s, 1>, &uop_impl_min_max<OP_max, W32s, 1>, &uop_impl_min_max<OP_max, W64s, 1>};





template <int evaltype>
inline bool evaluate_cond(int ra, int rb) {
  switch (evaltype) {
  case 0:
    return !!(rb & 0x800);
  case 1:
    return !(rb & 0x800);
  case 2:
    return !!(rb & 0x001);
  case 3:
    return !(rb & 0x001);
  case 4:
    return !!(ra & 0x040);
  case 5:
    return !(ra & 0x040);
  case 6:
    return ((ra & 0x040) || (rb & 0x001));
  case 7:
    return !((ra & 0x040) || (rb & 0x001));
  case 8:
    return !!(ra & 0x080);
  case 9:
    return !(ra & 0x080);
  case 10:
    return !!(ra & 0x004);
  case 11:
    return !(ra & 0x004);
  case 12:
    return (!!(ra & 0x080)) != (!!(rb & 0x800));
  case 13:
    return !(!!(ra & 0x080)) != (!!(rb & 0x800));
  case 14:
    return ((!!(ra & 0x040)) | ((!!(ra & 0x080)) != (!!(rb & 0x800))));
  case 15:
    return !((!!(ra & 0x040)) | ((!!(ra & 0x080)) != (!!(rb & 0x800))));
  }
}
# 807 "uopimpl.cpp"
template <typename T> struct sub_flag_gen_op {
  W16 operator ()(T ra, T rb) { x86_op_sub<T, SETFLAG_ZF|SETFLAG_CF|SETFLAG_OF> op; byte cf, of; T rd = op(ra, rb, 0, 0, 0, 0, cf, of); return (of << 11) | cf | x86_genflags<T>(rd); }
};

template <typename T> struct and_flag_gen_op {
  W16 operator ()(T ra, T rb) { return x86_genflags<T>(ra & rb); }
};




template <int ptlopcode, typename T, int evaltype>
inline void uop_impl_sel(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  bool istrue = evaluate_cond<evaltype>(rcflags, rcflags);
  state.reg.rddata = x86_merge<T>(ra, (istrue) ? rb : ra);
  state.reg.rdflags = (istrue) ? rbflags : raflags;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(T))>::value), evaltype);
}

uopimpl_func_t implmap_sel [16][4] = { {&uop_impl_sel<OP_sel, W8, 0>, &uop_impl_sel<OP_sel, W16, 0>, &uop_impl_sel<OP_sel, W32, 0>, &uop_impl_sel<OP_sel, W64, 0>}, {&uop_impl_sel<OP_sel, W8, 1>, &uop_impl_sel<OP_sel, W16, 1>, &uop_impl_sel<OP_sel, W32, 1>, &uop_impl_sel<OP_sel, W64, 1>}, {&uop_impl_sel<OP_sel, W8, 2>, &uop_impl_sel<OP_sel, W16, 2>, &uop_impl_sel<OP_sel, W32, 2>, &uop_impl_sel<OP_sel, W64, 2>}, {&uop_impl_sel<OP_sel, W8, 3>, &uop_impl_sel<OP_sel, W16, 3>, &uop_impl_sel<OP_sel, W32, 3>, &uop_impl_sel<OP_sel, W64, 3>}, {&uop_impl_sel<OP_sel, W8, 4>, &uop_impl_sel<OP_sel, W16, 4>, &uop_impl_sel<OP_sel, W32, 4>, &uop_impl_sel<OP_sel, W64, 4>}, {&uop_impl_sel<OP_sel, W8, 5>, &uop_impl_sel<OP_sel, W16, 5>, &uop_impl_sel<OP_sel, W32, 5>, &uop_impl_sel<OP_sel, W64, 5>}, {&uop_impl_sel<OP_sel, W8, 6>, &uop_impl_sel<OP_sel, W16, 6>, &uop_impl_sel<OP_sel, W32, 6>, &uop_impl_sel<OP_sel, W64, 6>}, {&uop_impl_sel<OP_sel, W8, 7>, &uop_impl_sel<OP_sel, W16, 7>, &uop_impl_sel<OP_sel, W32, 7>, &uop_impl_sel<OP_sel, W64, 7>}, {&uop_impl_sel<OP_sel, W8, 8>, &uop_impl_sel<OP_sel, W16, 8>, &uop_impl_sel<OP_sel, W32, 8>, &uop_impl_sel<OP_sel, W64, 8>}, {&uop_impl_sel<OP_sel, W8, 9>, &uop_impl_sel<OP_sel, W16, 9>, &uop_impl_sel<OP_sel, W32, 9>, &uop_impl_sel<OP_sel, W64, 9>}, {&uop_impl_sel<OP_sel, W8, 10>, &uop_impl_sel<OP_sel, W16, 10>, &uop_impl_sel<OP_sel, W32, 10>, &uop_impl_sel<OP_sel, W64, 10>}, {&uop_impl_sel<OP_sel, W8, 11>, &uop_impl_sel<OP_sel, W16, 11>, &uop_impl_sel<OP_sel, W32, 11>, &uop_impl_sel<OP_sel, W64, 11>}, {&uop_impl_sel<OP_sel, W8, 12>, &uop_impl_sel<OP_sel, W16, 12>, &uop_impl_sel<OP_sel, W32, 12>, &uop_impl_sel<OP_sel, W64, 12>}, {&uop_impl_sel<OP_sel, W8, 13>, &uop_impl_sel<OP_sel, W16, 13>, &uop_impl_sel<OP_sel, W32, 13>, &uop_impl_sel<OP_sel, W64, 13>}, {&uop_impl_sel<OP_sel, W8, 14>, &uop_impl_sel<OP_sel, W16, 14>, &uop_impl_sel<OP_sel, W32, 14>, &uop_impl_sel<OP_sel, W64, 14>}, {&uop_impl_sel<OP_sel, W8, 15>, &uop_impl_sel<OP_sel, W16, 15>, &uop_impl_sel<OP_sel, W32, 15>, &uop_impl_sel<OP_sel, W64, 15>} };
# 838 "uopimpl.cpp"
template <int ptlopcode, typename Tmerge, typename Tcompare, int evaltype>
inline void uop_impl_sel_cmp(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  int flags = x86_genflags<Tcompare>(rc);
  bool istrue = evaluate_cond<evaltype>(flags, flags);
  state.reg.rddata = x86_merge<Tmerge>(ra, (istrue) ? rb : ra);
  state.reg.rdflags = (istrue) ? rbflags : raflags;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(Tmerge))>::value), evaltype);
}

uopimpl_func_t implmap_sel_cmp [16][4][4] = { { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 0>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 0>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 0>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 0>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 0>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 1>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 1>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 1>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 1>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 1>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 2>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 2>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 2>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 2>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 2>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 3>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 3>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 3>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 3>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 3>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 4>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 4>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 4>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 4>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 4>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 5>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 5>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 5>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 5>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 5>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 6>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 6>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 6>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 6>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 6>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 7>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 7>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 7>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 7>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 7>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 8>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 8>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 8>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 8>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 8>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 9>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 9>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 9>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 9>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 9>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 10>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 10>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 10>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 10>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 10>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 11>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 11>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 11>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 11>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 11>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 12>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 12>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 12>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 12>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 12>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 13>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 13>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 13>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 13>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 13>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 14>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 14>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 14>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 14>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 14>}, }, { {&uop_impl_sel_cmp<OP_sel_cmp, W8, W8, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W16, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W32, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W8, W64, 15>}, {&uop_impl_sel_cmp<OP_sel_cmp, W16, W8, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W16, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W32, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W16, W64, 15>}, {&uop_impl_sel_cmp<OP_sel_cmp, W32, W8, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W16, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W32, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W32, W64, 15>}, {&uop_impl_sel_cmp<OP_sel_cmp, W64, W8, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W16, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W32, 15>, &uop_impl_sel_cmp<OP_sel_cmp, W64, W64, 15>}, } };




template <int ptlopcode, typename T, int evaltype>
inline void uop_impl_set(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  bool istrue = evaluate_cond<evaltype>(raflags, rbflags);
  state.reg.rddata = x86_merge<T>(rc, (istrue) ? 1 : 0);
  state.reg.rdflags = (istrue) ? 0x001 : 0;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(T))>::value));
}

uopimpl_func_t implmap_set [16][4] = { {&uop_impl_set<OP_set, W8, 0>, &uop_impl_set<OP_set, W16, 0>, &uop_impl_set<OP_set, W32, 0>, &uop_impl_set<OP_set, W64, 0>}, {&uop_impl_set<OP_set, W8, 1>, &uop_impl_set<OP_set, W16, 1>, &uop_impl_set<OP_set, W32, 1>, &uop_impl_set<OP_set, W64, 1>}, {&uop_impl_set<OP_set, W8, 2>, &uop_impl_set<OP_set, W16, 2>, &uop_impl_set<OP_set, W32, 2>, &uop_impl_set<OP_set, W64, 2>}, {&uop_impl_set<OP_set, W8, 3>, &uop_impl_set<OP_set, W16, 3>, &uop_impl_set<OP_set, W32, 3>, &uop_impl_set<OP_set, W64, 3>}, {&uop_impl_set<OP_set, W8, 4>, &uop_impl_set<OP_set, W16, 4>, &uop_impl_set<OP_set, W32, 4>, &uop_impl_set<OP_set, W64, 4>}, {&uop_impl_set<OP_set, W8, 5>, &uop_impl_set<OP_set, W16, 5>, &uop_impl_set<OP_set, W32, 5>, &uop_impl_set<OP_set, W64, 5>}, {&uop_impl_set<OP_set, W8, 6>, &uop_impl_set<OP_set, W16, 6>, &uop_impl_set<OP_set, W32, 6>, &uop_impl_set<OP_set, W64, 6>}, {&uop_impl_set<OP_set, W8, 7>, &uop_impl_set<OP_set, W16, 7>, &uop_impl_set<OP_set, W32, 7>, &uop_impl_set<OP_set, W64, 7>}, {&uop_impl_set<OP_set, W8, 8>, &uop_impl_set<OP_set, W16, 8>, &uop_impl_set<OP_set, W32, 8>, &uop_impl_set<OP_set, W64, 8>}, {&uop_impl_set<OP_set, W8, 9>, &uop_impl_set<OP_set, W16, 9>, &uop_impl_set<OP_set, W32, 9>, &uop_impl_set<OP_set, W64, 9>}, {&uop_impl_set<OP_set, W8, 10>, &uop_impl_set<OP_set, W16, 10>, &uop_impl_set<OP_set, W32, 10>, &uop_impl_set<OP_set, W64, 10>}, {&uop_impl_set<OP_set, W8, 11>, &uop_impl_set<OP_set, W16, 11>, &uop_impl_set<OP_set, W32, 11>, &uop_impl_set<OP_set, W64, 11>}, {&uop_impl_set<OP_set, W8, 12>, &uop_impl_set<OP_set, W16, 12>, &uop_impl_set<OP_set, W32, 12>, &uop_impl_set<OP_set, W64, 12>}, {&uop_impl_set<OP_set, W8, 13>, &uop_impl_set<OP_set, W16, 13>, &uop_impl_set<OP_set, W32, 13>, &uop_impl_set<OP_set, W64, 13>}, {&uop_impl_set<OP_set, W8, 14>, &uop_impl_set<OP_set, W16, 14>, &uop_impl_set<OP_set, W32, 14>, &uop_impl_set<OP_set, W64, 14>}, {&uop_impl_set<OP_set, W8, 15>, &uop_impl_set<OP_set, W16, 15>, &uop_impl_set<OP_set, W32, 15>, &uop_impl_set<OP_set, W64, 15>} };

template <int ptlopcode, typename Tmerge, typename Tcompare, int evaltype>
inline void uop_impl_set_and(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  and_flag_gen_op<Tcompare> func;
  int flags = func(ra, rb);
  bool istrue = evaluate_cond<evaltype>(flags, flags);
  state.reg.rddata = x86_merge<Tmerge>(rc, (istrue) ? 1 : 0);
  state.reg.rdflags = (istrue) ? 0x001 : 0;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(Tmerge))>::value));
}

uopimpl_func_t implmap_set_and [16][4][4] = { { {&uop_impl_set_and<OP_set_and, W8, W8, 0>, &uop_impl_set_and<OP_set_and, W8, W16, 0>, &uop_impl_set_and<OP_set_and, W8, W32, 0>, &uop_impl_set_and<OP_set_and, W8, W64, 0>}, {&uop_impl_set_and<OP_set_and, W16, W8, 0>, &uop_impl_set_and<OP_set_and, W16, W16, 0>, &uop_impl_set_and<OP_set_and, W16, W32, 0>, &uop_impl_set_and<OP_set_and, W16, W64, 0>}, {&uop_impl_set_and<OP_set_and, W32, W8, 0>, &uop_impl_set_and<OP_set_and, W32, W16, 0>, &uop_impl_set_and<OP_set_and, W32, W32, 0>, &uop_impl_set_and<OP_set_and, W32, W64, 0>}, {&uop_impl_set_and<OP_set_and, W64, W8, 0>, &uop_impl_set_and<OP_set_and, W64, W16, 0>, &uop_impl_set_and<OP_set_and, W64, W32, 0>, &uop_impl_set_and<OP_set_and, W64, W64, 0>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 1>, &uop_impl_set_and<OP_set_and, W8, W16, 1>, &uop_impl_set_and<OP_set_and, W8, W32, 1>, &uop_impl_set_and<OP_set_and, W8, W64, 1>}, {&uop_impl_set_and<OP_set_and, W16, W8, 1>, &uop_impl_set_and<OP_set_and, W16, W16, 1>, &uop_impl_set_and<OP_set_and, W16, W32, 1>, &uop_impl_set_and<OP_set_and, W16, W64, 1>}, {&uop_impl_set_and<OP_set_and, W32, W8, 1>, &uop_impl_set_and<OP_set_and, W32, W16, 1>, &uop_impl_set_and<OP_set_and, W32, W32, 1>, &uop_impl_set_and<OP_set_and, W32, W64, 1>}, {&uop_impl_set_and<OP_set_and, W64, W8, 1>, &uop_impl_set_and<OP_set_and, W64, W16, 1>, &uop_impl_set_and<OP_set_and, W64, W32, 1>, &uop_impl_set_and<OP_set_and, W64, W64, 1>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 2>, &uop_impl_set_and<OP_set_and, W8, W16, 2>, &uop_impl_set_and<OP_set_and, W8, W32, 2>, &uop_impl_set_and<OP_set_and, W8, W64, 2>}, {&uop_impl_set_and<OP_set_and, W16, W8, 2>, &uop_impl_set_and<OP_set_and, W16, W16, 2>, &uop_impl_set_and<OP_set_and, W16, W32, 2>, &uop_impl_set_and<OP_set_and, W16, W64, 2>}, {&uop_impl_set_and<OP_set_and, W32, W8, 2>, &uop_impl_set_and<OP_set_and, W32, W16, 2>, &uop_impl_set_and<OP_set_and, W32, W32, 2>, &uop_impl_set_and<OP_set_and, W32, W64, 2>}, {&uop_impl_set_and<OP_set_and, W64, W8, 2>, &uop_impl_set_and<OP_set_and, W64, W16, 2>, &uop_impl_set_and<OP_set_and, W64, W32, 2>, &uop_impl_set_and<OP_set_and, W64, W64, 2>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 3>, &uop_impl_set_and<OP_set_and, W8, W16, 3>, &uop_impl_set_and<OP_set_and, W8, W32, 3>, &uop_impl_set_and<OP_set_and, W8, W64, 3>}, {&uop_impl_set_and<OP_set_and, W16, W8, 3>, &uop_impl_set_and<OP_set_and, W16, W16, 3>, &uop_impl_set_and<OP_set_and, W16, W32, 3>, &uop_impl_set_and<OP_set_and, W16, W64, 3>}, {&uop_impl_set_and<OP_set_and, W32, W8, 3>, &uop_impl_set_and<OP_set_and, W32, W16, 3>, &uop_impl_set_and<OP_set_and, W32, W32, 3>, &uop_impl_set_and<OP_set_and, W32, W64, 3>}, {&uop_impl_set_and<OP_set_and, W64, W8, 3>, &uop_impl_set_and<OP_set_and, W64, W16, 3>, &uop_impl_set_and<OP_set_and, W64, W32, 3>, &uop_impl_set_and<OP_set_and, W64, W64, 3>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 4>, &uop_impl_set_and<OP_set_and, W8, W16, 4>, &uop_impl_set_and<OP_set_and, W8, W32, 4>, &uop_impl_set_and<OP_set_and, W8, W64, 4>}, {&uop_impl_set_and<OP_set_and, W16, W8, 4>, &uop_impl_set_and<OP_set_and, W16, W16, 4>, &uop_impl_set_and<OP_set_and, W16, W32, 4>, &uop_impl_set_and<OP_set_and, W16, W64, 4>}, {&uop_impl_set_and<OP_set_and, W32, W8, 4>, &uop_impl_set_and<OP_set_and, W32, W16, 4>, &uop_impl_set_and<OP_set_and, W32, W32, 4>, &uop_impl_set_and<OP_set_and, W32, W64, 4>}, {&uop_impl_set_and<OP_set_and, W64, W8, 4>, &uop_impl_set_and<OP_set_and, W64, W16, 4>, &uop_impl_set_and<OP_set_and, W64, W32, 4>, &uop_impl_set_and<OP_set_and, W64, W64, 4>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 5>, &uop_impl_set_and<OP_set_and, W8, W16, 5>, &uop_impl_set_and<OP_set_and, W8, W32, 5>, &uop_impl_set_and<OP_set_and, W8, W64, 5>}, {&uop_impl_set_and<OP_set_and, W16, W8, 5>, &uop_impl_set_and<OP_set_and, W16, W16, 5>, &uop_impl_set_and<OP_set_and, W16, W32, 5>, &uop_impl_set_and<OP_set_and, W16, W64, 5>}, {&uop_impl_set_and<OP_set_and, W32, W8, 5>, &uop_impl_set_and<OP_set_and, W32, W16, 5>, &uop_impl_set_and<OP_set_and, W32, W32, 5>, &uop_impl_set_and<OP_set_and, W32, W64, 5>}, {&uop_impl_set_and<OP_set_and, W64, W8, 5>, &uop_impl_set_and<OP_set_and, W64, W16, 5>, &uop_impl_set_and<OP_set_and, W64, W32, 5>, &uop_impl_set_and<OP_set_and, W64, W64, 5>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 6>, &uop_impl_set_and<OP_set_and, W8, W16, 6>, &uop_impl_set_and<OP_set_and, W8, W32, 6>, &uop_impl_set_and<OP_set_and, W8, W64, 6>}, {&uop_impl_set_and<OP_set_and, W16, W8, 6>, &uop_impl_set_and<OP_set_and, W16, W16, 6>, &uop_impl_set_and<OP_set_and, W16, W32, 6>, &uop_impl_set_and<OP_set_and, W16, W64, 6>}, {&uop_impl_set_and<OP_set_and, W32, W8, 6>, &uop_impl_set_and<OP_set_and, W32, W16, 6>, &uop_impl_set_and<OP_set_and, W32, W32, 6>, &uop_impl_set_and<OP_set_and, W32, W64, 6>}, {&uop_impl_set_and<OP_set_and, W64, W8, 6>, &uop_impl_set_and<OP_set_and, W64, W16, 6>, &uop_impl_set_and<OP_set_and, W64, W32, 6>, &uop_impl_set_and<OP_set_and, W64, W64, 6>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 7>, &uop_impl_set_and<OP_set_and, W8, W16, 7>, &uop_impl_set_and<OP_set_and, W8, W32, 7>, &uop_impl_set_and<OP_set_and, W8, W64, 7>}, {&uop_impl_set_and<OP_set_and, W16, W8, 7>, &uop_impl_set_and<OP_set_and, W16, W16, 7>, &uop_impl_set_and<OP_set_and, W16, W32, 7>, &uop_impl_set_and<OP_set_and, W16, W64, 7>}, {&uop_impl_set_and<OP_set_and, W32, W8, 7>, &uop_impl_set_and<OP_set_and, W32, W16, 7>, &uop_impl_set_and<OP_set_and, W32, W32, 7>, &uop_impl_set_and<OP_set_and, W32, W64, 7>}, {&uop_impl_set_and<OP_set_and, W64, W8, 7>, &uop_impl_set_and<OP_set_and, W64, W16, 7>, &uop_impl_set_and<OP_set_and, W64, W32, 7>, &uop_impl_set_and<OP_set_and, W64, W64, 7>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 8>, &uop_impl_set_and<OP_set_and, W8, W16, 8>, &uop_impl_set_and<OP_set_and, W8, W32, 8>, &uop_impl_set_and<OP_set_and, W8, W64, 8>}, {&uop_impl_set_and<OP_set_and, W16, W8, 8>, &uop_impl_set_and<OP_set_and, W16, W16, 8>, &uop_impl_set_and<OP_set_and, W16, W32, 8>, &uop_impl_set_and<OP_set_and, W16, W64, 8>}, {&uop_impl_set_and<OP_set_and, W32, W8, 8>, &uop_impl_set_and<OP_set_and, W32, W16, 8>, &uop_impl_set_and<OP_set_and, W32, W32, 8>, &uop_impl_set_and<OP_set_and, W32, W64, 8>}, {&uop_impl_set_and<OP_set_and, W64, W8, 8>, &uop_impl_set_and<OP_set_and, W64, W16, 8>, &uop_impl_set_and<OP_set_and, W64, W32, 8>, &uop_impl_set_and<OP_set_and, W64, W64, 8>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 9>, &uop_impl_set_and<OP_set_and, W8, W16, 9>, &uop_impl_set_and<OP_set_and, W8, W32, 9>, &uop_impl_set_and<OP_set_and, W8, W64, 9>}, {&uop_impl_set_and<OP_set_and, W16, W8, 9>, &uop_impl_set_and<OP_set_and, W16, W16, 9>, &uop_impl_set_and<OP_set_and, W16, W32, 9>, &uop_impl_set_and<OP_set_and, W16, W64, 9>}, {&uop_impl_set_and<OP_set_and, W32, W8, 9>, &uop_impl_set_and<OP_set_and, W32, W16, 9>, &uop_impl_set_and<OP_set_and, W32, W32, 9>, &uop_impl_set_and<OP_set_and, W32, W64, 9>}, {&uop_impl_set_and<OP_set_and, W64, W8, 9>, &uop_impl_set_and<OP_set_and, W64, W16, 9>, &uop_impl_set_and<OP_set_and, W64, W32, 9>, &uop_impl_set_and<OP_set_and, W64, W64, 9>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 10>, &uop_impl_set_and<OP_set_and, W8, W16, 10>, &uop_impl_set_and<OP_set_and, W8, W32, 10>, &uop_impl_set_and<OP_set_and, W8, W64, 10>}, {&uop_impl_set_and<OP_set_and, W16, W8, 10>, &uop_impl_set_and<OP_set_and, W16, W16, 10>, &uop_impl_set_and<OP_set_and, W16, W32, 10>, &uop_impl_set_and<OP_set_and, W16, W64, 10>}, {&uop_impl_set_and<OP_set_and, W32, W8, 10>, &uop_impl_set_and<OP_set_and, W32, W16, 10>, &uop_impl_set_and<OP_set_and, W32, W32, 10>, &uop_impl_set_and<OP_set_and, W32, W64, 10>}, {&uop_impl_set_and<OP_set_and, W64, W8, 10>, &uop_impl_set_and<OP_set_and, W64, W16, 10>, &uop_impl_set_and<OP_set_and, W64, W32, 10>, &uop_impl_set_and<OP_set_and, W64, W64, 10>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 11>, &uop_impl_set_and<OP_set_and, W8, W16, 11>, &uop_impl_set_and<OP_set_and, W8, W32, 11>, &uop_impl_set_and<OP_set_and, W8, W64, 11>}, {&uop_impl_set_and<OP_set_and, W16, W8, 11>, &uop_impl_set_and<OP_set_and, W16, W16, 11>, &uop_impl_set_and<OP_set_and, W16, W32, 11>, &uop_impl_set_and<OP_set_and, W16, W64, 11>}, {&uop_impl_set_and<OP_set_and, W32, W8, 11>, &uop_impl_set_and<OP_set_and, W32, W16, 11>, &uop_impl_set_and<OP_set_and, W32, W32, 11>, &uop_impl_set_and<OP_set_and, W32, W64, 11>}, {&uop_impl_set_and<OP_set_and, W64, W8, 11>, &uop_impl_set_and<OP_set_and, W64, W16, 11>, &uop_impl_set_and<OP_set_and, W64, W32, 11>, &uop_impl_set_and<OP_set_and, W64, W64, 11>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 12>, &uop_impl_set_and<OP_set_and, W8, W16, 12>, &uop_impl_set_and<OP_set_and, W8, W32, 12>, &uop_impl_set_and<OP_set_and, W8, W64, 12>}, {&uop_impl_set_and<OP_set_and, W16, W8, 12>, &uop_impl_set_and<OP_set_and, W16, W16, 12>, &uop_impl_set_and<OP_set_and, W16, W32, 12>, &uop_impl_set_and<OP_set_and, W16, W64, 12>}, {&uop_impl_set_and<OP_set_and, W32, W8, 12>, &uop_impl_set_and<OP_set_and, W32, W16, 12>, &uop_impl_set_and<OP_set_and, W32, W32, 12>, &uop_impl_set_and<OP_set_and, W32, W64, 12>}, {&uop_impl_set_and<OP_set_and, W64, W8, 12>, &uop_impl_set_and<OP_set_and, W64, W16, 12>, &uop_impl_set_and<OP_set_and, W64, W32, 12>, &uop_impl_set_and<OP_set_and, W64, W64, 12>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 13>, &uop_impl_set_and<OP_set_and, W8, W16, 13>, &uop_impl_set_and<OP_set_and, W8, W32, 13>, &uop_impl_set_and<OP_set_and, W8, W64, 13>}, {&uop_impl_set_and<OP_set_and, W16, W8, 13>, &uop_impl_set_and<OP_set_and, W16, W16, 13>, &uop_impl_set_and<OP_set_and, W16, W32, 13>, &uop_impl_set_and<OP_set_and, W16, W64, 13>}, {&uop_impl_set_and<OP_set_and, W32, W8, 13>, &uop_impl_set_and<OP_set_and, W32, W16, 13>, &uop_impl_set_and<OP_set_and, W32, W32, 13>, &uop_impl_set_and<OP_set_and, W32, W64, 13>}, {&uop_impl_set_and<OP_set_and, W64, W8, 13>, &uop_impl_set_and<OP_set_and, W64, W16, 13>, &uop_impl_set_and<OP_set_and, W64, W32, 13>, &uop_impl_set_and<OP_set_and, W64, W64, 13>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 14>, &uop_impl_set_and<OP_set_and, W8, W16, 14>, &uop_impl_set_and<OP_set_and, W8, W32, 14>, &uop_impl_set_and<OP_set_and, W8, W64, 14>}, {&uop_impl_set_and<OP_set_and, W16, W8, 14>, &uop_impl_set_and<OP_set_and, W16, W16, 14>, &uop_impl_set_and<OP_set_and, W16, W32, 14>, &uop_impl_set_and<OP_set_and, W16, W64, 14>}, {&uop_impl_set_and<OP_set_and, W32, W8, 14>, &uop_impl_set_and<OP_set_and, W32, W16, 14>, &uop_impl_set_and<OP_set_and, W32, W32, 14>, &uop_impl_set_and<OP_set_and, W32, W64, 14>}, {&uop_impl_set_and<OP_set_and, W64, W8, 14>, &uop_impl_set_and<OP_set_and, W64, W16, 14>, &uop_impl_set_and<OP_set_and, W64, W32, 14>, &uop_impl_set_and<OP_set_and, W64, W64, 14>}, }, { {&uop_impl_set_and<OP_set_and, W8, W8, 15>, &uop_impl_set_and<OP_set_and, W8, W16, 15>, &uop_impl_set_and<OP_set_and, W8, W32, 15>, &uop_impl_set_and<OP_set_and, W8, W64, 15>}, {&uop_impl_set_and<OP_set_and, W16, W8, 15>, &uop_impl_set_and<OP_set_and, W16, W16, 15>, &uop_impl_set_and<OP_set_and, W16, W32, 15>, &uop_impl_set_and<OP_set_and, W16, W64, 15>}, {&uop_impl_set_and<OP_set_and, W32, W8, 15>, &uop_impl_set_and<OP_set_and, W32, W16, 15>, &uop_impl_set_and<OP_set_and, W32, W32, 15>, &uop_impl_set_and<OP_set_and, W32, W64, 15>}, {&uop_impl_set_and<OP_set_and, W64, W8, 15>, &uop_impl_set_and<OP_set_and, W64, W16, 15>, &uop_impl_set_and<OP_set_and, W64, W32, 15>, &uop_impl_set_and<OP_set_and, W64, W64, 15>}, } };

template <int ptlopcode, typename Tmerge, typename Tcompare, int evaltype>
inline void uop_impl_set_sub(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  sub_flag_gen_op<Tcompare> func;
  int flags = func(ra, rb);
  bool istrue = evaluate_cond<evaltype>(flags, flags);
  state.reg.rddata = x86_merge<Tmerge>(rc, (istrue) ? 1 : 0);
  state.reg.rdflags = (istrue) ? 0x001 : 0;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(Tmerge))>::value));
}

uopimpl_func_t implmap_set_sub [16][4][4] = { { {&uop_impl_set_sub<OP_set_sub, W8, W8, 0>, &uop_impl_set_sub<OP_set_sub, W8, W16, 0>, &uop_impl_set_sub<OP_set_sub, W8, W32, 0>, &uop_impl_set_sub<OP_set_sub, W8, W64, 0>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 0>, &uop_impl_set_sub<OP_set_sub, W16, W16, 0>, &uop_impl_set_sub<OP_set_sub, W16, W32, 0>, &uop_impl_set_sub<OP_set_sub, W16, W64, 0>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 0>, &uop_impl_set_sub<OP_set_sub, W32, W16, 0>, &uop_impl_set_sub<OP_set_sub, W32, W32, 0>, &uop_impl_set_sub<OP_set_sub, W32, W64, 0>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 0>, &uop_impl_set_sub<OP_set_sub, W64, W16, 0>, &uop_impl_set_sub<OP_set_sub, W64, W32, 0>, &uop_impl_set_sub<OP_set_sub, W64, W64, 0>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 1>, &uop_impl_set_sub<OP_set_sub, W8, W16, 1>, &uop_impl_set_sub<OP_set_sub, W8, W32, 1>, &uop_impl_set_sub<OP_set_sub, W8, W64, 1>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 1>, &uop_impl_set_sub<OP_set_sub, W16, W16, 1>, &uop_impl_set_sub<OP_set_sub, W16, W32, 1>, &uop_impl_set_sub<OP_set_sub, W16, W64, 1>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 1>, &uop_impl_set_sub<OP_set_sub, W32, W16, 1>, &uop_impl_set_sub<OP_set_sub, W32, W32, 1>, &uop_impl_set_sub<OP_set_sub, W32, W64, 1>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 1>, &uop_impl_set_sub<OP_set_sub, W64, W16, 1>, &uop_impl_set_sub<OP_set_sub, W64, W32, 1>, &uop_impl_set_sub<OP_set_sub, W64, W64, 1>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 2>, &uop_impl_set_sub<OP_set_sub, W8, W16, 2>, &uop_impl_set_sub<OP_set_sub, W8, W32, 2>, &uop_impl_set_sub<OP_set_sub, W8, W64, 2>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 2>, &uop_impl_set_sub<OP_set_sub, W16, W16, 2>, &uop_impl_set_sub<OP_set_sub, W16, W32, 2>, &uop_impl_set_sub<OP_set_sub, W16, W64, 2>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 2>, &uop_impl_set_sub<OP_set_sub, W32, W16, 2>, &uop_impl_set_sub<OP_set_sub, W32, W32, 2>, &uop_impl_set_sub<OP_set_sub, W32, W64, 2>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 2>, &uop_impl_set_sub<OP_set_sub, W64, W16, 2>, &uop_impl_set_sub<OP_set_sub, W64, W32, 2>, &uop_impl_set_sub<OP_set_sub, W64, W64, 2>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 3>, &uop_impl_set_sub<OP_set_sub, W8, W16, 3>, &uop_impl_set_sub<OP_set_sub, W8, W32, 3>, &uop_impl_set_sub<OP_set_sub, W8, W64, 3>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 3>, &uop_impl_set_sub<OP_set_sub, W16, W16, 3>, &uop_impl_set_sub<OP_set_sub, W16, W32, 3>, &uop_impl_set_sub<OP_set_sub, W16, W64, 3>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 3>, &uop_impl_set_sub<OP_set_sub, W32, W16, 3>, &uop_impl_set_sub<OP_set_sub, W32, W32, 3>, &uop_impl_set_sub<OP_set_sub, W32, W64, 3>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 3>, &uop_impl_set_sub<OP_set_sub, W64, W16, 3>, &uop_impl_set_sub<OP_set_sub, W64, W32, 3>, &uop_impl_set_sub<OP_set_sub, W64, W64, 3>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 4>, &uop_impl_set_sub<OP_set_sub, W8, W16, 4>, &uop_impl_set_sub<OP_set_sub, W8, W32, 4>, &uop_impl_set_sub<OP_set_sub, W8, W64, 4>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 4>, &uop_impl_set_sub<OP_set_sub, W16, W16, 4>, &uop_impl_set_sub<OP_set_sub, W16, W32, 4>, &uop_impl_set_sub<OP_set_sub, W16, W64, 4>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 4>, &uop_impl_set_sub<OP_set_sub, W32, W16, 4>, &uop_impl_set_sub<OP_set_sub, W32, W32, 4>, &uop_impl_set_sub<OP_set_sub, W32, W64, 4>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 4>, &uop_impl_set_sub<OP_set_sub, W64, W16, 4>, &uop_impl_set_sub<OP_set_sub, W64, W32, 4>, &uop_impl_set_sub<OP_set_sub, W64, W64, 4>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 5>, &uop_impl_set_sub<OP_set_sub, W8, W16, 5>, &uop_impl_set_sub<OP_set_sub, W8, W32, 5>, &uop_impl_set_sub<OP_set_sub, W8, W64, 5>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 5>, &uop_impl_set_sub<OP_set_sub, W16, W16, 5>, &uop_impl_set_sub<OP_set_sub, W16, W32, 5>, &uop_impl_set_sub<OP_set_sub, W16, W64, 5>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 5>, &uop_impl_set_sub<OP_set_sub, W32, W16, 5>, &uop_impl_set_sub<OP_set_sub, W32, W32, 5>, &uop_impl_set_sub<OP_set_sub, W32, W64, 5>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 5>, &uop_impl_set_sub<OP_set_sub, W64, W16, 5>, &uop_impl_set_sub<OP_set_sub, W64, W32, 5>, &uop_impl_set_sub<OP_set_sub, W64, W64, 5>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 6>, &uop_impl_set_sub<OP_set_sub, W8, W16, 6>, &uop_impl_set_sub<OP_set_sub, W8, W32, 6>, &uop_impl_set_sub<OP_set_sub, W8, W64, 6>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 6>, &uop_impl_set_sub<OP_set_sub, W16, W16, 6>, &uop_impl_set_sub<OP_set_sub, W16, W32, 6>, &uop_impl_set_sub<OP_set_sub, W16, W64, 6>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 6>, &uop_impl_set_sub<OP_set_sub, W32, W16, 6>, &uop_impl_set_sub<OP_set_sub, W32, W32, 6>, &uop_impl_set_sub<OP_set_sub, W32, W64, 6>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 6>, &uop_impl_set_sub<OP_set_sub, W64, W16, 6>, &uop_impl_set_sub<OP_set_sub, W64, W32, 6>, &uop_impl_set_sub<OP_set_sub, W64, W64, 6>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 7>, &uop_impl_set_sub<OP_set_sub, W8, W16, 7>, &uop_impl_set_sub<OP_set_sub, W8, W32, 7>, &uop_impl_set_sub<OP_set_sub, W8, W64, 7>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 7>, &uop_impl_set_sub<OP_set_sub, W16, W16, 7>, &uop_impl_set_sub<OP_set_sub, W16, W32, 7>, &uop_impl_set_sub<OP_set_sub, W16, W64, 7>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 7>, &uop_impl_set_sub<OP_set_sub, W32, W16, 7>, &uop_impl_set_sub<OP_set_sub, W32, W32, 7>, &uop_impl_set_sub<OP_set_sub, W32, W64, 7>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 7>, &uop_impl_set_sub<OP_set_sub, W64, W16, 7>, &uop_impl_set_sub<OP_set_sub, W64, W32, 7>, &uop_impl_set_sub<OP_set_sub, W64, W64, 7>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 8>, &uop_impl_set_sub<OP_set_sub, W8, W16, 8>, &uop_impl_set_sub<OP_set_sub, W8, W32, 8>, &uop_impl_set_sub<OP_set_sub, W8, W64, 8>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 8>, &uop_impl_set_sub<OP_set_sub, W16, W16, 8>, &uop_impl_set_sub<OP_set_sub, W16, W32, 8>, &uop_impl_set_sub<OP_set_sub, W16, W64, 8>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 8>, &uop_impl_set_sub<OP_set_sub, W32, W16, 8>, &uop_impl_set_sub<OP_set_sub, W32, W32, 8>, &uop_impl_set_sub<OP_set_sub, W32, W64, 8>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 8>, &uop_impl_set_sub<OP_set_sub, W64, W16, 8>, &uop_impl_set_sub<OP_set_sub, W64, W32, 8>, &uop_impl_set_sub<OP_set_sub, W64, W64, 8>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 9>, &uop_impl_set_sub<OP_set_sub, W8, W16, 9>, &uop_impl_set_sub<OP_set_sub, W8, W32, 9>, &uop_impl_set_sub<OP_set_sub, W8, W64, 9>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 9>, &uop_impl_set_sub<OP_set_sub, W16, W16, 9>, &uop_impl_set_sub<OP_set_sub, W16, W32, 9>, &uop_impl_set_sub<OP_set_sub, W16, W64, 9>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 9>, &uop_impl_set_sub<OP_set_sub, W32, W16, 9>, &uop_impl_set_sub<OP_set_sub, W32, W32, 9>, &uop_impl_set_sub<OP_set_sub, W32, W64, 9>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 9>, &uop_impl_set_sub<OP_set_sub, W64, W16, 9>, &uop_impl_set_sub<OP_set_sub, W64, W32, 9>, &uop_impl_set_sub<OP_set_sub, W64, W64, 9>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 10>, &uop_impl_set_sub<OP_set_sub, W8, W16, 10>, &uop_impl_set_sub<OP_set_sub, W8, W32, 10>, &uop_impl_set_sub<OP_set_sub, W8, W64, 10>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 10>, &uop_impl_set_sub<OP_set_sub, W16, W16, 10>, &uop_impl_set_sub<OP_set_sub, W16, W32, 10>, &uop_impl_set_sub<OP_set_sub, W16, W64, 10>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 10>, &uop_impl_set_sub<OP_set_sub, W32, W16, 10>, &uop_impl_set_sub<OP_set_sub, W32, W32, 10>, &uop_impl_set_sub<OP_set_sub, W32, W64, 10>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 10>, &uop_impl_set_sub<OP_set_sub, W64, W16, 10>, &uop_impl_set_sub<OP_set_sub, W64, W32, 10>, &uop_impl_set_sub<OP_set_sub, W64, W64, 10>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 11>, &uop_impl_set_sub<OP_set_sub, W8, W16, 11>, &uop_impl_set_sub<OP_set_sub, W8, W32, 11>, &uop_impl_set_sub<OP_set_sub, W8, W64, 11>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 11>, &uop_impl_set_sub<OP_set_sub, W16, W16, 11>, &uop_impl_set_sub<OP_set_sub, W16, W32, 11>, &uop_impl_set_sub<OP_set_sub, W16, W64, 11>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 11>, &uop_impl_set_sub<OP_set_sub, W32, W16, 11>, &uop_impl_set_sub<OP_set_sub, W32, W32, 11>, &uop_impl_set_sub<OP_set_sub, W32, W64, 11>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 11>, &uop_impl_set_sub<OP_set_sub, W64, W16, 11>, &uop_impl_set_sub<OP_set_sub, W64, W32, 11>, &uop_impl_set_sub<OP_set_sub, W64, W64, 11>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 12>, &uop_impl_set_sub<OP_set_sub, W8, W16, 12>, &uop_impl_set_sub<OP_set_sub, W8, W32, 12>, &uop_impl_set_sub<OP_set_sub, W8, W64, 12>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 12>, &uop_impl_set_sub<OP_set_sub, W16, W16, 12>, &uop_impl_set_sub<OP_set_sub, W16, W32, 12>, &uop_impl_set_sub<OP_set_sub, W16, W64, 12>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 12>, &uop_impl_set_sub<OP_set_sub, W32, W16, 12>, &uop_impl_set_sub<OP_set_sub, W32, W32, 12>, &uop_impl_set_sub<OP_set_sub, W32, W64, 12>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 12>, &uop_impl_set_sub<OP_set_sub, W64, W16, 12>, &uop_impl_set_sub<OP_set_sub, W64, W32, 12>, &uop_impl_set_sub<OP_set_sub, W64, W64, 12>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 13>, &uop_impl_set_sub<OP_set_sub, W8, W16, 13>, &uop_impl_set_sub<OP_set_sub, W8, W32, 13>, &uop_impl_set_sub<OP_set_sub, W8, W64, 13>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 13>, &uop_impl_set_sub<OP_set_sub, W16, W16, 13>, &uop_impl_set_sub<OP_set_sub, W16, W32, 13>, &uop_impl_set_sub<OP_set_sub, W16, W64, 13>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 13>, &uop_impl_set_sub<OP_set_sub, W32, W16, 13>, &uop_impl_set_sub<OP_set_sub, W32, W32, 13>, &uop_impl_set_sub<OP_set_sub, W32, W64, 13>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 13>, &uop_impl_set_sub<OP_set_sub, W64, W16, 13>, &uop_impl_set_sub<OP_set_sub, W64, W32, 13>, &uop_impl_set_sub<OP_set_sub, W64, W64, 13>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 14>, &uop_impl_set_sub<OP_set_sub, W8, W16, 14>, &uop_impl_set_sub<OP_set_sub, W8, W32, 14>, &uop_impl_set_sub<OP_set_sub, W8, W64, 14>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 14>, &uop_impl_set_sub<OP_set_sub, W16, W16, 14>, &uop_impl_set_sub<OP_set_sub, W16, W32, 14>, &uop_impl_set_sub<OP_set_sub, W16, W64, 14>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 14>, &uop_impl_set_sub<OP_set_sub, W32, W16, 14>, &uop_impl_set_sub<OP_set_sub, W32, W32, 14>, &uop_impl_set_sub<OP_set_sub, W32, W64, 14>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 14>, &uop_impl_set_sub<OP_set_sub, W64, W16, 14>, &uop_impl_set_sub<OP_set_sub, W64, W32, 14>, &uop_impl_set_sub<OP_set_sub, W64, W64, 14>}, }, { {&uop_impl_set_sub<OP_set_sub, W8, W8, 15>, &uop_impl_set_sub<OP_set_sub, W8, W16, 15>, &uop_impl_set_sub<OP_set_sub, W8, W32, 15>, &uop_impl_set_sub<OP_set_sub, W8, W64, 15>}, {&uop_impl_set_sub<OP_set_sub, W16, W8, 15>, &uop_impl_set_sub<OP_set_sub, W16, W16, 15>, &uop_impl_set_sub<OP_set_sub, W16, W32, 15>, &uop_impl_set_sub<OP_set_sub, W16, W64, 15>}, {&uop_impl_set_sub<OP_set_sub, W32, W8, 15>, &uop_impl_set_sub<OP_set_sub, W32, W16, 15>, &uop_impl_set_sub<OP_set_sub, W32, W32, 15>, &uop_impl_set_sub<OP_set_sub, W32, W64, 15>}, {&uop_impl_set_sub<OP_set_sub, W64, W8, 15>, &uop_impl_set_sub<OP_set_sub, W64, W16, 15>, &uop_impl_set_sub<OP_set_sub, W64, W32, 15>, &uop_impl_set_sub<OP_set_sub, W64, W64, 15>}, } };





template <int ptlopcode, typename T, int evaltype, bool excepting>
inline void uop_impl_condbranch(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  W64 riptaken = state.brreg.riptaken;
  W64 ripseq = state.brreg.ripseq;
  bool taken = evaluate_cond<evaltype>(raflags, rbflags);
  state.reg.rddata = (taken) ? riptaken : ripseq;
  state.reg.rdflags = (taken) ? 0x8000 : 0;

  if (excepting & (!taken)) {
    state.reg.rddata = EXCEPTION_BranchMispredict;
    state.reg.rdflags |= 0x002;
  }
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(T))>::value), evaltype, excepting, riptaken, ripseq);
}



uopimpl_func_t implmap_br [16][2] = { {&uop_impl_condbranch<OP_br, W64, 0, false>, &uop_impl_condbranch<OP_br, W64, 0, true>}, {&uop_impl_condbranch<OP_br, W64, 1, false>, &uop_impl_condbranch<OP_br, W64, 1, true>}, {&uop_impl_condbranch<OP_br, W64, 2, false>, &uop_impl_condbranch<OP_br, W64, 2, true>}, {&uop_impl_condbranch<OP_br, W64, 3, false>, &uop_impl_condbranch<OP_br, W64, 3, true>}, {&uop_impl_condbranch<OP_br, W64, 4, false>, &uop_impl_condbranch<OP_br, W64, 4, true>}, {&uop_impl_condbranch<OP_br, W64, 5, false>, &uop_impl_condbranch<OP_br, W64, 5, true>}, {&uop_impl_condbranch<OP_br, W64, 6, false>, &uop_impl_condbranch<OP_br, W64, 6, true>}, {&uop_impl_condbranch<OP_br, W64, 7, false>, &uop_impl_condbranch<OP_br, W64, 7, true>}, {&uop_impl_condbranch<OP_br, W64, 8, false>, &uop_impl_condbranch<OP_br, W64, 8, true>}, {&uop_impl_condbranch<OP_br, W64, 9, false>, &uop_impl_condbranch<OP_br, W64, 9, true>}, {&uop_impl_condbranch<OP_br, W64, 10, false>, &uop_impl_condbranch<OP_br, W64, 10, true>}, {&uop_impl_condbranch<OP_br, W64, 11, false>, &uop_impl_condbranch<OP_br, W64, 11, true>}, {&uop_impl_condbranch<OP_br, W64, 12, false>, &uop_impl_condbranch<OP_br, W64, 12, true>}, {&uop_impl_condbranch<OP_br, W64, 13, false>, &uop_impl_condbranch<OP_br, W64, 13, true>}, {&uop_impl_condbranch<OP_br, W64, 14, false>, &uop_impl_condbranch<OP_br, W64, 14, true>}, {&uop_impl_condbranch<OP_br, W64, 15, false>, &uop_impl_condbranch<OP_br, W64, 15, true>} };

template <int ptlopcode, typename T, int evaltype, bool excepting, template<typename> class func_t>
inline void uop_impl_alu_and_condbranch(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  W64 riptaken = state.brreg.riptaken;
  W64 ripseq = state.brreg.ripseq;
  func_t<T> func;
  int flags = func(ra, rb);
  bool taken = evaluate_cond<evaltype>(flags, flags);
  state.reg.rddata = (taken) ? riptaken : ripseq;
  state.reg.rdflags = flags | (taken ? 0x8000 : 0);

  if (excepting & (!taken)) {
    state.reg.rddata = EXCEPTION_BranchMispredict;
    state.reg.rdflags |= 0x002;
  }
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(T))>::value), evaltype, excepting, riptaken, ripseq);
}
# 934 "uopimpl.cpp"
uopimpl_func_t implmap_br_and [16][4][2] = { { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 0, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 0, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 0, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 0, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 0, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 0, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 0, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 0, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 1, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 1, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 1, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 1, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 1, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 1, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 1, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 1, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 2, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 2, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 2, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 2, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 2, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 2, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 2, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 2, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 3, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 3, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 3, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 3, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 3, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 3, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 3, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 3, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 4, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 4, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 4, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 4, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 4, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 4, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 4, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 4, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 5, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 5, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 5, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 5, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 5, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 5, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 5, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 5, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 6, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 6, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 6, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 6, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 6, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 6, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 6, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 6, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 7, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 7, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 7, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 7, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 7, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 7, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 7, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 7, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 8, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 8, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 8, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 8, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 8, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 8, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 8, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 8, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 9, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 9, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 9, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 9, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 9, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 9, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 9, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 9, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 10, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 10, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 10, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 10, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 10, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 10, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 10, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 10, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 11, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 11, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 11, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 11, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 11, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 11, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 11, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 11, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 12, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 12, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 12, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 12, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 12, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 12, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 12, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 12, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 13, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 13, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 13, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 13, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 13, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 13, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 13, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 13, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 14, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 14, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 14, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 14, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 14, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 14, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 14, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 14, true, and_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_and, W8, 15, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W8, 15, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W16, 15, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W16, 15, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W32, 15, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W32, 15, true, and_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_and, W64, 15, false, and_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_and, W64, 15, true, and_flag_gen_op>}, } };
uopimpl_func_t implmap_br_sub [16][4][2] = { { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 0, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 0, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 0, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 0, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 0, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 0, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 0, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 0, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 1, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 1, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 1, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 1, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 1, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 1, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 1, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 1, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 2, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 2, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 2, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 2, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 2, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 2, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 2, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 2, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 3, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 3, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 3, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 3, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 3, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 3, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 3, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 3, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 4, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 4, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 4, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 4, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 4, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 4, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 4, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 4, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 5, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 5, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 5, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 5, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 5, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 5, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 5, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 5, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 6, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 6, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 6, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 6, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 6, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 6, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 6, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 6, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 7, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 7, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 7, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 7, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 7, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 7, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 7, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 7, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 8, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 8, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 8, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 8, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 8, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 8, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 8, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 8, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 9, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 9, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 9, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 9, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 9, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 9, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 9, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 9, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 10, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 10, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 10, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 10, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 10, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 10, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 10, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 10, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 11, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 11, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 11, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 11, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 11, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 11, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 11, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 11, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 12, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 12, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 12, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 12, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 12, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 12, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 12, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 12, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 13, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 13, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 13, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 13, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 13, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 13, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 13, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 13, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 14, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 14, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 14, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 14, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 14, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 14, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 14, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 14, true, sub_flag_gen_op>}, }, { {&uop_impl_alu_and_condbranch<OP_br_sub, W8, 15, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W8, 15, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W16, 15, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W16, 15, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W32, 15, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W32, 15, true, sub_flag_gen_op>}, {&uop_impl_alu_and_condbranch<OP_br_sub, W64, 15, false, sub_flag_gen_op>, &uop_impl_alu_and_condbranch<OP_br_sub, W64, 15, true, sub_flag_gen_op>}, } };

void uop_impl_jmp(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  W64 riptaken = state.brreg.riptaken;
  bool taken = (riptaken == ra);
  state.reg.rddata = ra;
  state.reg.rdflags = (taken) ? 0x8000 : 0;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_jmp, 0, 0, 0, riptaken, riptaken);
}

void uop_impl_jmp_ex(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  W64 riptaken = state.brreg.riptaken;
  bool taken = (riptaken == ra);
  state.reg.rddata = ra;
  state.reg.rdflags = (taken) ? 0x8000 : 0;

  if (!taken) {
    state.reg.rddata = EXCEPTION_BranchMispredict;
    state.reg.rdflags |= 0x002;
  }
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_jmp, 0, 0, 1, riptaken, riptaken);
}

void uop_impl_bru(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  W64 riptaken = state.brreg.riptaken;
  state.reg.rddata = riptaken;
  state.reg.rdflags = 0x8000;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_bru, 0, 0, 0, riptaken, riptaken);
}

void uop_impl_brp(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  W64 riptaken = state.brreg.riptaken;
  state.reg.rddata = state.brreg.riptaken;
  state.reg.rdflags = 0x8000;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_brp, 0, 0, 0, riptaken, riptaken);
}




template <int ptlopcode, int evaltype>
inline void uop_impl_chk(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  bool passed = evaluate_cond<evaltype>(raflags, rbflags);
  state.reg.rddata = (passed) ? 0 : rc;
  state.reg.addr = 0;
  state.reg.rdflags = (passed) ? 0 : 0x002;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_chk, 0);
}

template <int ptlopcode, typename T, int evaltype>
inline void uop_impl_chk_sub(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  sub_flag_gen_op<T> func;
  int flags = func(ra, rb);
  bool passed = evaluate_cond<evaltype>(flags, flags);
  state.reg.rddata = (passed) ? 0 : rc;
  state.reg.addr = 0;
  state.reg.rdflags = (passed) ? 0 : 0x002;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(T))>::value), evaltype);
}

template <int ptlopcode, typename T, int evaltype>
inline void uop_impl_chk_and(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  and_flag_gen_op<T> func;
  int flags = func(ra, rb);
  bool passed = evaluate_cond<evaltype>(flags, flags);
  state.reg.rddata = (passed) ? 0 : rc;
  state.reg.addr = 0;
  state.reg.rdflags = (passed) ? 0 : 0x002;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, (lg<(sizeof(T))>::value), evaltype);
}

uopimpl_func_t implmap_chk [16][1] = { &uop_impl_chk<OP_chk, 0>, &uop_impl_chk<OP_chk, 1>, &uop_impl_chk<OP_chk, 2>, &uop_impl_chk<OP_chk, 3>, &uop_impl_chk<OP_chk, 4>, &uop_impl_chk<OP_chk, 5>, &uop_impl_chk<OP_chk, 6>, &uop_impl_chk<OP_chk, 7>, &uop_impl_chk<OP_chk, 8>, &uop_impl_chk<OP_chk, 9>, &uop_impl_chk<OP_chk, 10>, &uop_impl_chk<OP_chk, 11>, &uop_impl_chk<OP_chk, 12>, &uop_impl_chk<OP_chk, 13>, &uop_impl_chk<OP_chk, 14>, &uop_impl_chk<OP_chk, 15> };
uopimpl_func_t implmap_chk_sub [16][4] = { {&uop_impl_chk_sub<OP_chk_sub, W8, 0>, &uop_impl_chk_sub<OP_chk_sub, W16, 0>, &uop_impl_chk_sub<OP_chk_sub, W32, 0>, &uop_impl_chk_sub<OP_chk_sub, W64, 0>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 1>, &uop_impl_chk_sub<OP_chk_sub, W16, 1>, &uop_impl_chk_sub<OP_chk_sub, W32, 1>, &uop_impl_chk_sub<OP_chk_sub, W64, 1>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 2>, &uop_impl_chk_sub<OP_chk_sub, W16, 2>, &uop_impl_chk_sub<OP_chk_sub, W32, 2>, &uop_impl_chk_sub<OP_chk_sub, W64, 2>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 3>, &uop_impl_chk_sub<OP_chk_sub, W16, 3>, &uop_impl_chk_sub<OP_chk_sub, W32, 3>, &uop_impl_chk_sub<OP_chk_sub, W64, 3>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 4>, &uop_impl_chk_sub<OP_chk_sub, W16, 4>, &uop_impl_chk_sub<OP_chk_sub, W32, 4>, &uop_impl_chk_sub<OP_chk_sub, W64, 4>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 5>, &uop_impl_chk_sub<OP_chk_sub, W16, 5>, &uop_impl_chk_sub<OP_chk_sub, W32, 5>, &uop_impl_chk_sub<OP_chk_sub, W64, 5>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 6>, &uop_impl_chk_sub<OP_chk_sub, W16, 6>, &uop_impl_chk_sub<OP_chk_sub, W32, 6>, &uop_impl_chk_sub<OP_chk_sub, W64, 6>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 7>, &uop_impl_chk_sub<OP_chk_sub, W16, 7>, &uop_impl_chk_sub<OP_chk_sub, W32, 7>, &uop_impl_chk_sub<OP_chk_sub, W64, 7>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 8>, &uop_impl_chk_sub<OP_chk_sub, W16, 8>, &uop_impl_chk_sub<OP_chk_sub, W32, 8>, &uop_impl_chk_sub<OP_chk_sub, W64, 8>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 9>, &uop_impl_chk_sub<OP_chk_sub, W16, 9>, &uop_impl_chk_sub<OP_chk_sub, W32, 9>, &uop_impl_chk_sub<OP_chk_sub, W64, 9>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 10>, &uop_impl_chk_sub<OP_chk_sub, W16, 10>, &uop_impl_chk_sub<OP_chk_sub, W32, 10>, &uop_impl_chk_sub<OP_chk_sub, W64, 10>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 11>, &uop_impl_chk_sub<OP_chk_sub, W16, 11>, &uop_impl_chk_sub<OP_chk_sub, W32, 11>, &uop_impl_chk_sub<OP_chk_sub, W64, 11>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 12>, &uop_impl_chk_sub<OP_chk_sub, W16, 12>, &uop_impl_chk_sub<OP_chk_sub, W32, 12>, &uop_impl_chk_sub<OP_chk_sub, W64, 12>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 13>, &uop_impl_chk_sub<OP_chk_sub, W16, 13>, &uop_impl_chk_sub<OP_chk_sub, W32, 13>, &uop_impl_chk_sub<OP_chk_sub, W64, 13>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 14>, &uop_impl_chk_sub<OP_chk_sub, W16, 14>, &uop_impl_chk_sub<OP_chk_sub, W32, 14>, &uop_impl_chk_sub<OP_chk_sub, W64, 14>}, {&uop_impl_chk_sub<OP_chk_sub, W8, 15>, &uop_impl_chk_sub<OP_chk_sub, W16, 15>, &uop_impl_chk_sub<OP_chk_sub, W32, 15>, &uop_impl_chk_sub<OP_chk_sub, W64, 15>} };
uopimpl_func_t implmap_chk_and [16][4] = { {&uop_impl_chk_and<OP_chk_and, W8, 0>, &uop_impl_chk_and<OP_chk_and, W16, 0>, &uop_impl_chk_and<OP_chk_and, W32, 0>, &uop_impl_chk_and<OP_chk_and, W64, 0>}, {&uop_impl_chk_and<OP_chk_and, W8, 1>, &uop_impl_chk_and<OP_chk_and, W16, 1>, &uop_impl_chk_and<OP_chk_and, W32, 1>, &uop_impl_chk_and<OP_chk_and, W64, 1>}, {&uop_impl_chk_and<OP_chk_and, W8, 2>, &uop_impl_chk_and<OP_chk_and, W16, 2>, &uop_impl_chk_and<OP_chk_and, W32, 2>, &uop_impl_chk_and<OP_chk_and, W64, 2>}, {&uop_impl_chk_and<OP_chk_and, W8, 3>, &uop_impl_chk_and<OP_chk_and, W16, 3>, &uop_impl_chk_and<OP_chk_and, W32, 3>, &uop_impl_chk_and<OP_chk_and, W64, 3>}, {&uop_impl_chk_and<OP_chk_and, W8, 4>, &uop_impl_chk_and<OP_chk_and, W16, 4>, &uop_impl_chk_and<OP_chk_and, W32, 4>, &uop_impl_chk_and<OP_chk_and, W64, 4>}, {&uop_impl_chk_and<OP_chk_and, W8, 5>, &uop_impl_chk_and<OP_chk_and, W16, 5>, &uop_impl_chk_and<OP_chk_and, W32, 5>, &uop_impl_chk_and<OP_chk_and, W64, 5>}, {&uop_impl_chk_and<OP_chk_and, W8, 6>, &uop_impl_chk_and<OP_chk_and, W16, 6>, &uop_impl_chk_and<OP_chk_and, W32, 6>, &uop_impl_chk_and<OP_chk_and, W64, 6>}, {&uop_impl_chk_and<OP_chk_and, W8, 7>, &uop_impl_chk_and<OP_chk_and, W16, 7>, &uop_impl_chk_and<OP_chk_and, W32, 7>, &uop_impl_chk_and<OP_chk_and, W64, 7>}, {&uop_impl_chk_and<OP_chk_and, W8, 8>, &uop_impl_chk_and<OP_chk_and, W16, 8>, &uop_impl_chk_and<OP_chk_and, W32, 8>, &uop_impl_chk_and<OP_chk_and, W64, 8>}, {&uop_impl_chk_and<OP_chk_and, W8, 9>, &uop_impl_chk_and<OP_chk_and, W16, 9>, &uop_impl_chk_and<OP_chk_and, W32, 9>, &uop_impl_chk_and<OP_chk_and, W64, 9>}, {&uop_impl_chk_and<OP_chk_and, W8, 10>, &uop_impl_chk_and<OP_chk_and, W16, 10>, &uop_impl_chk_and<OP_chk_and, W32, 10>, &uop_impl_chk_and<OP_chk_and, W64, 10>}, {&uop_impl_chk_and<OP_chk_and, W8, 11>, &uop_impl_chk_and<OP_chk_and, W16, 11>, &uop_impl_chk_and<OP_chk_and, W32, 11>, &uop_impl_chk_and<OP_chk_and, W64, 11>}, {&uop_impl_chk_and<OP_chk_and, W8, 12>, &uop_impl_chk_and<OP_chk_and, W16, 12>, &uop_impl_chk_and<OP_chk_and, W32, 12>, &uop_impl_chk_and<OP_chk_and, W64, 12>}, {&uop_impl_chk_and<OP_chk_and, W8, 13>, &uop_impl_chk_and<OP_chk_and, W16, 13>, &uop_impl_chk_and<OP_chk_and, W32, 13>, &uop_impl_chk_and<OP_chk_and, W64, 13>}, {&uop_impl_chk_and<OP_chk_and, W8, 14>, &uop_impl_chk_and<OP_chk_and, W16, 14>, &uop_impl_chk_and<OP_chk_and, W32, 14>, &uop_impl_chk_and<OP_chk_and, W64, 14>}, {&uop_impl_chk_and<OP_chk_and, W8, 15>, &uop_impl_chk_and<OP_chk_and, W16, 15>, &uop_impl_chk_and<OP_chk_and, W32, 15>, &uop_impl_chk_and<OP_chk_and, W64, 15>} };







template <int ptlopcode, template<typename> class F, int datatype>
inline void floatop(IssueState& state, W64 raraw, W64 rbraw, W64 rcraw, W16 raflags, W16 rbflags, W16 rcflags) {
  SSEType ra, rb, rc, rd;
  ra.w64 = raraw; rb.w64 = rbraw; rc.w64 = rcraw;

  switch (datatype) {
  case 0: {
    F<float> func;
    rd.f.lo = func(ra.f.lo, rb.f.lo, rc.f.lo);
    rd.w32.hi = ra.w32.hi;
    break;
  }
  case 1: {
    F<float> func;
    rd.f.lo = func(ra.f.lo, rb.f.lo, rc.f.lo);
    rd.f.hi = func(ra.f.hi, rb.f.hi, rc.f.hi);
    break;
  }
  case 2: case 3: {
    F<float> func;
    rd.d = func(ra.d, rb.d, rc.d);
    break;
  }
  }
  state.reg.rddata = rd.w64;
  state.reg.rdflags = 0;
  capture_uop_context(state, raraw, rbraw, rcraw, raflags, rbflags, rcflags, ptlopcode, datatype);
}
# 1086 "uopimpl.cpp"
template <int ptlopcode, int datatype> void x86_op_fadd(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "add" "ss " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "add" "ps " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "add" "sd " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); }; uopimpl_func_t implmap_fadd[4] = {&x86_op_fadd<OP_fadd, 0>, &x86_op_fadd<OP_fadd, 1>, &x86_op_fadd<OP_fadd, 2>, &x86_op_fadd<OP_fadd, 3>};
template <int ptlopcode, int datatype> void x86_op_fsub(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "sub" "ss " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "sub" "ps " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "sub" "sd " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); }; uopimpl_func_t implmap_fsub[4] = {&x86_op_fsub<OP_fsub, 0>, &x86_op_fsub<OP_fsub, 1>, &x86_op_fsub<OP_fsub, 2>, &x86_op_fsub<OP_fsub, 3>};
template <int ptlopcode, int datatype> void x86_op_fmul(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "mul" "ss " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "mul" "ps " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "mul" "sd " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); }; uopimpl_func_t implmap_fmul[4] = {&x86_op_fmul<OP_fmul, 0>, &x86_op_fmul<OP_fmul, 1>, &x86_op_fmul<OP_fmul, 2>, &x86_op_fmul<OP_fmul, 3>};
template <int ptlopcode, int datatype> void x86_op_fdiv(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "div" "ss " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "div" "ps " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "div" "sd " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); }; uopimpl_func_t implmap_fdiv[4] = {&x86_op_fdiv<OP_fdiv, 0>, &x86_op_fdiv<OP_fdiv, 1>, &x86_op_fdiv<OP_fdiv, 2>, &x86_op_fdiv<OP_fdiv, 3>};
template <int ptlopcode, int datatype> void x86_op_fsqrt(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "sqrt" "ss " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "sqrt" "ps " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "sqrt" "sd " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); }; uopimpl_func_t implmap_fsqrt[4] = {&x86_op_fsqrt<OP_fsqrt, 0>, &x86_op_fsqrt<OP_fsqrt, 1>, &x86_op_fsqrt<OP_fsqrt, 2>, &x86_op_fsqrt<OP_fsqrt, 3>};
template <int ptlopcode, int datatype> void x86_op_frcp(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "rcp" "ss " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "rcp" "ps " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "rcp" "sd " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); }; uopimpl_func_t implmap_frcp[4] = {&x86_op_frcp<OP_frcp, 0>, &x86_op_frcp<OP_frcp, 1>, &x86_op_frcp<OP_frcp, 2>, &x86_op_frcp<OP_frcp, 3>};
template <int ptlopcode, int datatype> void x86_op_frsqrt(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "rsqrt" "ss " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "rsqrt" "ps " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "rsqrt" "sd " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); }; uopimpl_func_t implmap_frsqrt[4] = {&x86_op_frsqrt<OP_frsqrt, 0>, &x86_op_frsqrt<OP_frsqrt, 1>, &x86_op_frsqrt<OP_frsqrt, 2>, &x86_op_frsqrt<OP_frsqrt, 3>};
template <int ptlopcode, int datatype> void x86_op_fmin(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "min" "ss " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "min" "ps " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "min" "sd " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); }; uopimpl_func_t implmap_fmin[4] = {&x86_op_fmin<OP_fmin, 0>, &x86_op_fmin<OP_fmin, 1>, &x86_op_fmin<OP_fmin, 2>, &x86_op_fmin<OP_fmin, 3>};
template <int ptlopcode, int datatype> void x86_op_fmax(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "max" "ss " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "max" "ps " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "max" "sd " "" "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); }; uopimpl_func_t implmap_fmax[4] = {&x86_op_fmax<OP_fmax, 0>, &x86_op_fmax<OP_fmax, 1>, &x86_op_fmax<OP_fmax, 2>, &x86_op_fmax<OP_fmax, 3>};
# 1104 "uopimpl.cpp"
template <int datatype>
void x86_op_fmadd(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {



  x86_op_fmul<OP_fmul, datatype>(state, ra, rb, 0, 0, 0, 0);
  x86_op_fadd<OP_fsub, datatype>(state, state.reg.rddata, rc, 0, 0, 0, 0);
}

uopimpl_func_t implmap_fmadd[4] = {&x86_op_fmadd<0>, &x86_op_fmadd<1>, &x86_op_fmadd<2>, &x86_op_fmadd<3>};

template <int datatype>
void x86_op_fmsub(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {



  x86_op_fmul<OP_fmul, datatype>(state, ra, rb, 0, 0, 0, 0);
  x86_op_fsub<OP_fsub, datatype>(state, state.reg.rddata, rc, 0, 0, 0, 0);
}

uopimpl_func_t implmap_fmsub[4] = {&x86_op_fmsub<0>, &x86_op_fmsub<1>, &x86_op_fmsub<2>, &x86_op_fmsub<3>};

template <int datatype>
void x86_op_fmsubr(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {



  x86_op_fmul<OP_fmul, datatype>(state, ra, rb, 0, 0, 0, 0);
  x86_op_fsub<OP_fsub, datatype>(state, rc, state.reg.rddata, 0, 0, 0, 0);
}

uopimpl_func_t implmap_fmsubr[4] = {&x86_op_fmsubr<0>, &x86_op_fmsubr<1>, &x86_op_fmsubr<2>, &x86_op_fmsubr<3>};

template <int ptlopcode, int datatype> void x86_op_fcmp0(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ss " "$0," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ps " "$0," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "sd " "$0," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); };
template <int ptlopcode, int datatype> void x86_op_fcmp1(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ss " "$1," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ps " "$1," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "sd " "$1," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); };
template <int ptlopcode, int datatype> void x86_op_fcmp2(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ss " "$2," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ps " "$2," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "sd " "$2," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); };
template <int ptlopcode, int datatype> void x86_op_fcmp3(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ss " "$3," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ps " "$3," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "sd " "$3," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); };
template <int ptlopcode, int datatype> void x86_op_fcmp4(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ss " "$4," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ps " "$4," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "sd " "$4," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); };
template <int ptlopcode, int datatype> void x86_op_fcmp5(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ss " "$5," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ps " "$5," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "sd " "$5," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); };
template <int ptlopcode, int datatype> void x86_op_fcmp6(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ss " "$6," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ps " "$6," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "sd " "$6," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); };
template <int ptlopcode, int datatype> void x86_op_fcmp7(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b fpa, fpb; if ((datatype == 0) & ((((1<<0)|(1<<1)|(1<<2)) >> (0)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ss " "$7," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype == 1) & ((((1<<0)|(1<<1)|(1<<2)) >> (1)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "ps " "$7," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((datatype >= 2) & ((((1<<0)|(1<<1)|(1<<2)) >> (2)) & 1)) asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cmp" "sd " "$7," "%[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, datatype); };

uopimpl_func_t implmap_fcmp[8][4] = {
  {&x86_op_fcmp0<OP_fcmp, 0>, &x86_op_fcmp0<OP_fcmp, 1>, &x86_op_fcmp0<OP_fcmp, 2>, &x86_op_fcmp0<OP_fcmp, 3>},
  {&x86_op_fcmp1<OP_fcmp, 0>, &x86_op_fcmp1<OP_fcmp, 1>, &x86_op_fcmp1<OP_fcmp, 2>, &x86_op_fcmp1<OP_fcmp, 3>},
  {&x86_op_fcmp2<OP_fcmp, 0>, &x86_op_fcmp2<OP_fcmp, 1>, &x86_op_fcmp2<OP_fcmp, 2>, &x86_op_fcmp2<OP_fcmp, 3>},
  {&x86_op_fcmp3<OP_fcmp, 0>, &x86_op_fcmp3<OP_fcmp, 1>, &x86_op_fcmp3<OP_fcmp, 2>, &x86_op_fcmp3<OP_fcmp, 3>},
  {&x86_op_fcmp4<OP_fcmp, 0>, &x86_op_fcmp4<OP_fcmp, 1>, &x86_op_fcmp4<OP_fcmp, 2>, &x86_op_fcmp4<OP_fcmp, 3>},
  {&x86_op_fcmp5<OP_fcmp, 0>, &x86_op_fcmp5<OP_fcmp, 1>, &x86_op_fcmp5<OP_fcmp, 2>, &x86_op_fcmp5<OP_fcmp, 3>},
  {&x86_op_fcmp6<OP_fcmp, 0>, &x86_op_fcmp6<OP_fcmp, 1>, &x86_op_fcmp6<OP_fcmp, 2>, &x86_op_fcmp6<OP_fcmp, 3>},
  {&x86_op_fcmp7<OP_fcmp, 0>, &x86_op_fcmp7<OP_fcmp, 1>, &x86_op_fcmp7<OP_fcmp, 2>, &x86_op_fcmp7<OP_fcmp, 3>}
};

template <int comptype>
void uop_impl_fcmpcc(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  W64 rd;
  vec16b fpa, fpb;
  byte zf, pf, cf;
  switch (comptype) {
  case 0:
    asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; comiss %[fpb],%[fpa]; setz %[zf]; setp %[pf]; setc %[cf];"
        : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb), [zf] "=q" (zf), [pf] "=q" (pf), [cf] "=q" (cf)
        : [ra] "rm" (ra), [rb] "rm" (rb)); break;
  case 1:
    asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; ucomiss %[fpb],%[fpa]; setz %[zf]; setp %[pf]; setc %[cf];"
        : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb), [zf] "=q" (zf), [pf] "=q" (pf), [cf] "=q" (cf)
        : [ra] "rm" (ra), [rb] "rm" (rb)); break;
  case 2:
    asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; comisd %[fpb],%[fpa]; setz %[zf]; setp %[pf]; setc %[cf];"
        : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb), [zf] "=q" (zf), [pf] "=q" (pf), [cf] "=q" (cf)
        : [ra] "rm" (ra), [rb] "rm" (rb)); break;
  case 3:
    asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; ucomisd %[fpb],%[fpa]; setz %[zf]; setp %[pf]; setc %[cf];"
        : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb), [zf] "=q" (zf), [pf] "=q" (pf), [cf] "=q" (cf)
        : [ra] "rm" (ra), [rb] "rm" (rb)); break;
  }
  state.reg.rdflags = (zf << 6) + (pf << 2) + (cf << 0);
  state.reg.rddata = state.reg.rdflags;
  capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_fcmpcc, comptype);
}

uopimpl_func_t implmap_fcmpcc[8][4] = {&uop_impl_fcmpcc<0>, &uop_impl_fcmpcc<1>, &uop_impl_fcmpcc<2>, &uop_impl_fcmpcc<3>};
# 1204 "uopimpl.cpp"
void uop_impl_fcvt_i2s_p(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpa, fpb; if (0) { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtdq2ps" " %[fpb],%[fpa]; movhlps %[fpa],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } else { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtdq2ps" " %[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_fcvt_i2s_p, 0); };
void uop_impl_fcvt_i2d_lo(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpa, fpb; if (0) { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtdq2pd" " %[fpb],%[fpa]; movhlps %[fpa],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } else { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtdq2pd" " %[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_fcvt_i2d_lo, 0); };
void uop_impl_fcvt_i2d_hi(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpa, fpb; if (1) { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtdq2pd" " %[fpb],%[fpa]; movhlps %[fpa],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } else { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtdq2pd" " %[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_fcvt_i2d_hi, 0); };
void uop_impl_fcvt_s2d_lo(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpa, fpb; if (0) { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtps2pd" " %[fpb],%[fpa]; movhlps %[fpa],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } else { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtps2pd" " %[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_fcvt_s2d_lo, 0); };
void uop_impl_fcvt_s2d_hi(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpa, fpb; if (1) { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtps2pd" " %[fpb],%[fpa]; movhlps %[fpa],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } else { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtps2pd" " %[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_fcvt_s2d_hi, 0); };
void uop_impl_fcvt_d2s_ins(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpa, fpb; if (0) { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtsd2ss" " %[fpb],%[fpa]; movhlps %[fpa],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } else { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; " "cvtsd2ss" " %[fpb],%[fpa]; movq %[fpa],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_fcvt_d2s_ins, 0); };







void uop_impl_fcvt_i2s_ins(IssueState& state, W64 raraw, W64 rbraw, W64 rcraw, W16 raflags, W16 rbflags, W16 rcflags) { SSEType ra, rb, rc, rd; ra.w64 = raraw; rb.w64 = rbraw; rc.w64 = rcraw; (rd.f.lo = (float)(W32s)rb.w32.lo, rd.w32.hi = ra.w32.hi); state.reg.rddata = rd.w64; state.reg.rdflags = 0; capture_uop_context(state, raraw, rbraw, rcraw, raflags, rbflags, rcflags, OP_fcvt_i2s_ins, 0); };
void uop_impl_fcvt_q2s_ins(IssueState& state, W64 raraw, W64 rbraw, W64 rcraw, W16 raflags, W16 rbflags, W16 rcflags) { SSEType ra, rb, rc, rd; ra.w64 = raraw; rb.w64 = rbraw; rc.w64 = rcraw; (rd.f.lo = (float)(W64s)rb.w64, rd.w32.hi = ra.w32.hi); state.reg.rddata = rd.w64; state.reg.rdflags = 0; capture_uop_context(state, raraw, rbraw, rcraw, raflags, rbflags, rcflags, OP_fcvt_q2s_ins, 0); };
void uop_impl_fcvt_q2d(IssueState& state, W64 raraw, W64 rbraw, W64 rcraw, W16 raflags, W16 rbflags, W16 rcflags) { SSEType ra, rb, rc, rd; ra.w64 = raraw; rb.w64 = rbraw; rc.w64 = rcraw; (rd.d = (double)(W64s)rb.w64); state.reg.rddata = rd.w64; state.reg.rdflags = 0; capture_uop_context(state, raraw, rbraw, rcraw, raflags, rbflags, rcflags, OP_fcvt_q2d, 0); };
# 1241 "uopimpl.cpp"
template <int ptlopcode, int trunc> void uop_impl_fcvt_s2i(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W32 rd; vec4f fpv; if (trunc) { asm("movq" " %[rb],%[fpv]; " "cvttss2si" " %[fpv],%[rd];" : [rd] "=r" (rd), [fpv] "=x" (fpv) : [rb] "rm" (rb)); } else { asm("movq" " %[rb],%[fpv]; " "cvtss2si" " %[fpv],%[rd];" : [rd] "=r" (rd), [fpv] "=x" (fpv) : [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, trunc); }; uopimpl_func_t implmap_fcvt_s2i[2] = {&uop_impl_fcvt_s2i<OP_fcvt_s2i, 0>, &uop_impl_fcvt_s2i<OP_fcvt_s2i, 1>};
template <int ptlopcode, int trunc> void uop_impl_fcvt_d2i(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W32 rd; vec4f fpv; if (trunc) { asm("movq" " %[rb],%[fpv]; " "cvttsd2si" " %[fpv],%[rd];" : [rd] "=r" (rd), [fpv] "=x" (fpv) : [rb] "rm" (rb)); } else { asm("movq" " %[rb],%[fpv]; " "cvtsd2si" " %[fpv],%[rd];" : [rd] "=r" (rd), [fpv] "=x" (fpv) : [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, trunc); }; uopimpl_func_t implmap_fcvt_d2i[2] = {&uop_impl_fcvt_d2i<OP_fcvt_d2i, 0>, &uop_impl_fcvt_d2i<OP_fcvt_d2i, 1>};


template <int ptlopcode, int trunc> void uop_impl_fcvt_s2q(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpv; if (trunc) { asm("movq" " %[rb],%[fpv]; " "cvttss2si" " %[fpv],%[rd];" : [rd] "=r" (rd), [fpv] "=x" (fpv) : [rb] "rm" (rb)); } else { asm("movq" " %[rb],%[fpv]; " "cvtss2si" " %[fpv],%[rd];" : [rd] "=r" (rd), [fpv] "=x" (fpv) : [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, trunc); }; uopimpl_func_t implmap_fcvt_s2q[2] = {&uop_impl_fcvt_s2q<OP_fcvt_s2q, 0>, &uop_impl_fcvt_s2q<OP_fcvt_s2q, 1>};
template <int ptlopcode, int trunc> void uop_impl_fcvt_d2q(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpv; if (trunc) { asm("movq" " %[rb],%[fpv]; " "cvttsd2si" " %[fpv],%[rd];" : [rd] "=r" (rd), [fpv] "=x" (fpv) : [rb] "rm" (rb)); } else { asm("movq" " %[rb],%[fpv]; " "cvtsd2si" " %[fpv],%[rd];" : [rd] "=r" (rd), [fpv] "=x" (fpv) : [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, trunc); }; uopimpl_func_t implmap_fcvt_d2q[2] = {&uop_impl_fcvt_d2q<OP_fcvt_d2q, 0>, &uop_impl_fcvt_d2q<OP_fcvt_d2q, 1>};
# 1300 "uopimpl.cpp"
template <int trunc> void uop_impl_fcvt_s2i_p(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpa, fpb; if (trunc) { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; movlhps %[fpa],%[fpb]; " "cvttps2dq" " %[fpb],%[fpb]; " "movq" " %[fpb],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } else { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; movlhps %[fpa],%[fpb]; " "cvtps2dq" " %[fpb],%[fpb]; " "movq" " %[fpb],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_fcvt_s2i_p, trunc); }; uopimpl_func_t implmap_fcvt_s2i_p[2] = {&uop_impl_fcvt_s2i_p<0>, &uop_impl_fcvt_s2i_p<1>};
template <int trunc> void uop_impl_fcvt_d2i_p(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpa, fpb; if (trunc) { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; movlhps %[fpa],%[fpb]; " "cvttpd2dq" " %[fpb],%[fpb]; " "movq" " %[fpb],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } else { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; movlhps %[fpa],%[fpb]; " "cvtpd2dq" " %[fpb],%[fpb]; " "movq" " %[fpb],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_fcvt_d2i_p, trunc); }; uopimpl_func_t implmap_fcvt_d2i_p[2] = {&uop_impl_fcvt_d2i_p<0>, &uop_impl_fcvt_d2i_p<1>};
template <int trunc> void uop_impl_fcvt_d2s_p(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec4f fpa, fpb; if (trunc) { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; movlhps %[fpa],%[fpb]; " "cvtpd2ps" " %[fpb],%[fpb]; " "movq" " %[fpb],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } else { asm("movq" " %[ra],%[fpa]; " "movq" " %[rb],%[fpb]; movlhps %[fpa],%[fpb]; " "cvtpd2ps" " %[fpb],%[fpb]; " "movq" " %[fpb],%[rd];" : [rd] "=" "rm" (rd), [fpa] "=x" (fpa), [fpb] "=x" (fpb) : [ra] "rm" (ra), [rb] "rm" (rb)); } state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, OP_fcvt_d2s_p, trunc); }; uopimpl_func_t implmap_fcvt_d2s_p[2] = {&uop_impl_fcvt_d2s_p<0>, &uop_impl_fcvt_d2s_p<1>};
# 1338 "uopimpl.cpp"
template <int ptlopcode, int sizeshift>
void x86_op_nop(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  state.reg.rddata = 0;
  state.reg.rdflags = 0;
}

template <int ptlopcode, int size> void x86_op_vadd(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "paddb" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "paddw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "paddd" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "paddq" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vadd[4] = {&x86_op_vadd<OP_vadd, 0>, &x86_op_vadd<OP_vadd, 1>, &x86_op_vadd<OP_vadd, 2>, &x86_op_vadd<OP_vadd, 3>};
template <int ptlopcode, int size> void x86_op_vsub(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psubb" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psubw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psubd" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psubq" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vsub[4] = {&x86_op_vsub<OP_vsub, 0>, &x86_op_vsub<OP_vsub, 1>, &x86_op_vsub<OP_vsub, 2>, &x86_op_vsub<OP_vsub, 3>};
template <int ptlopcode, int size> void x86_op_vadd_us(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "paddusb" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "paddusw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vadd_us[4] = {&x86_op_vadd_us<OP_vadd_us, 0>, &x86_op_vadd_us<OP_vadd_us, 1>, &x86_op_vadd_us<OP_vadd_us, 2>, &x86_op_vadd_us<OP_vadd_us, 3>};
template <int ptlopcode, int size> void x86_op_vsub_us(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psubusb" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psubusw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vsub_us[4] = {&x86_op_vsub_us<OP_vsub_us, 0>, &x86_op_vsub_us<OP_vsub_us, 1>, &x86_op_vsub_us<OP_vsub_us, 2>, &x86_op_vsub_us<OP_vsub_us, 3>};
template <int ptlopcode, int size> void x86_op_vadd_ss(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "paddsb" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "paddsw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vadd_ss[4] = {&x86_op_vadd_ss<OP_vadd_ss, 0>, &x86_op_vadd_ss<OP_vadd_ss, 1>, &x86_op_vadd_ss<OP_vadd_ss, 2>, &x86_op_vadd_ss<OP_vadd_ss, 3>};
template <int ptlopcode, int size> void x86_op_vsub_ss(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psubsb" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psubsw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vsub_ss[4] = {&x86_op_vsub_ss<OP_vsub_ss, 0>, &x86_op_vsub_ss<OP_vsub_ss, 1>, &x86_op_vsub_ss<OP_vsub_ss, 2>, &x86_op_vsub_ss<OP_vsub_ss, 3>};

template <int ptlopcode, int size> void x86_op_vshl(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((0 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((0 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psllw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((0 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pslld" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((0 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psllq" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vshl[4] = {&x86_op_vshl<OP_vshl, 0>, &x86_op_vshl<OP_vshl, 1>, &x86_op_vshl<OP_vshl, 2>, &x86_op_vshl<OP_vshl, 3>};
template <int ptlopcode, int size> void x86_op_vshr(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((0 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((0 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psrlw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((0 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psrld" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((0 << 0) | (1 << 1) | (1 << 2) | (1 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psrlq" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vshr[4] = {&x86_op_vshr<OP_vshr, 0>, &x86_op_vshr<OP_vshr, 1>, &x86_op_vshr<OP_vshr, 2>, &x86_op_vshr<OP_vshr, 3>};

template <int ptlopcode, int size> void x86_op_vsar(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((0 << 0) | (1 << 1) | (1 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((0 << 0) | (1 << 1) | (1 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psraw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((0 << 0) | (1 << 1) | (1 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psrad" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((0 << 0) | (1 << 1) | (1 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vsar[4] = {&x86_op_vsar<OP_vsar, 0>, &x86_op_vsar<OP_vsar, 1>, &x86_op_vsar<OP_vsar, 2>, &x86_op_vsar<OP_vsar, 3>};

template <int ptlopcode, int size> void x86_op_vavg(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pavgb" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pavgw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vavg[4] = {&x86_op_vavg<OP_vavg, 0>, &x86_op_vavg<OP_vavg, 1>, &x86_op_vavg<OP_vavg, 2>, &x86_op_vavg<OP_vavg, 3>};

template <int ptlopcode, int size> void x86_op_vmin(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pminub" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vmin[4] = {&x86_op_vmin<OP_vmin, 0>, &x86_op_vmin<OP_vmin, 1>, &x86_op_vmin<OP_vmin, 2>, &x86_op_vmin<OP_vmin, 3>};
template <int ptlopcode, int size> void x86_op_vmax(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pmaxub" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vmax[4] = {&x86_op_vmax<OP_vmax, 0>, &x86_op_vmax<OP_vmax, 1>, &x86_op_vmax<OP_vmax, 2>, &x86_op_vmax<OP_vmax, 3>};
template <int ptlopcode, int size> void x86_op_vmin_s(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pminsw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vmin_s[4] = {&x86_op_vmin_s<OP_vmin_s, 0>, &x86_op_vmin_s<OP_vmin_s, 1>, &x86_op_vmin_s<OP_vmin_s, 2>, &x86_op_vmin_s<OP_vmin_s, 3>};
template <int ptlopcode, int size> void x86_op_vmax_s(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pmaxsw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vmax_s[4] = {&x86_op_vmax_s<OP_vmax_s, 0>, &x86_op_vmax_s<OP_vmax_s, 1>, &x86_op_vmax_s<OP_vmax_s, 2>, &x86_op_vmax_s<OP_vmax_s, 3>};

template <int ptlopcode, int size> void x86_op_vmull(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pmullw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vmull[4] = {&x86_op_vmull<OP_vmull, 0>, &x86_op_vmull<OP_vmull, 1>, &x86_op_vmull<OP_vmull, 2>, &x86_op_vmull<OP_vmull, 3>};
template <int ptlopcode, int size> void x86_op_vmulh(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pmulhw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vmulh[4] = {&x86_op_vmulh<OP_vmulh, 0>, &x86_op_vmulh<OP_vmulh, 1>, &x86_op_vmulh<OP_vmulh, 2>, &x86_op_vmulh<OP_vmulh, 3>};
template <int ptlopcode, int size> void x86_op_vmulhu(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pmulhuw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vmulhu[4] = {&x86_op_vmulhu<OP_vmulhu, 0>, &x86_op_vmulhu<OP_vmulhu, 1>, &x86_op_vmulhu<OP_vmulhu, 2>, &x86_op_vmulhu<OP_vmulhu, 3>};

template <int ptlopcode, int size> void x86_op_vmaddp(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "pmaddwd" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vmaddp[4] = {&x86_op_vmaddp<OP_vmaddp, 0>, &x86_op_vmaddp<OP_vmaddp, 1>, &x86_op_vmaddp<OP_vmaddp, 2>, &x86_op_vmaddp<OP_vmaddp, 3>};
template <int ptlopcode, int size> void x86_op_vsad(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va, vb; if ((size == 0) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 1) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "psadbw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 2) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); if ((size == 3) & (((((0 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("movq" " %[ra],%[va]; " "movq" " %[rb],%[vb]; " "nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb) : [ra] "rm" (ra), [rb] "rm" (rb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vsad[4] = {&x86_op_vsad<OP_vsad, 0>, &x86_op_vsad<OP_vsad, 1>, &x86_op_vsad<OP_vsad, 2>, &x86_op_vsad<OP_vsad, 3>};

static inline vec16b buildvec(W64 hi, W64 lo) {
  vec16b v;
  W64* vp = (W64*)&v;
  vp[0] = lo;
  vp[1] = hi;
  return v;
}
# 1402 "uopimpl.cpp"
template <int ptlopcode, int size> void x86_op_vpack_us(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va = buildvec(rb, ra); vec16b vb = buildvec(0, 0); logfile << "va = ", va, ", vb = ", vb, endl; if ((size == 0) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("packuswb" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "+x" (va), [vb] "+x" (vb)); if ((size == 1) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb)); if ((size == 2) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb)); if ((size == 3) & (((((1 << 0) | (0 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vpack_us[4] = {&x86_op_vpack_us<OP_vpack_us, 0>, &x86_op_vpack_us<OP_vpack_us, 1>, &x86_op_vpack_us<OP_vpack_us, 2>, &x86_op_vpack_us<OP_vpack_us, 3>};
template <int ptlopcode, int size> void x86_op_vpack_ss(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) { W64 rd; vec16b va = buildvec(rb, ra); vec16b vb = buildvec(0, 0); logfile << "va = ", va, ", vb = ", vb, endl; if ((size == 0) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (0)) & 1)) asm("packsswb" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "+x" (va), [vb] "+x" (vb)); if ((size == 1) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (1)) & 1)) asm("packssdw" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb)); if ((size == 2) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (2)) & 1)) asm("nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb)); if ((size == 3) & (((((1 << 0) | (1 << 1) | (0 << 2) | (0 << 3))) >> (3)) & 1)) asm("nop" " " "" "%[vb],%[va]; movq %[va],%[rd];" : [rd] "=" "rm" (rd), [va] "=x" (va), [vb] "=x" (vb)); state.reg.rddata = rd; state.reg.rdflags = 0; capture_uop_context(state, ra, rb, rc, raflags, rbflags, rcflags, ptlopcode, size); }; uopimpl_func_t implmap_vpack_ss[4] = {&x86_op_vpack_ss<OP_vpack_ss, 0>, &x86_op_vpack_ss<OP_vpack_ss, 1>, &x86_op_vpack_ss<OP_vpack_ss, 2>, &x86_op_vpack_ss<OP_vpack_ss, 3>};
# 1421 "uopimpl.cpp"
template <int sizeshift>
void uop_impl_vbt(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  int sizebits = (1 << sizeshift) * 8;

  rb = (((rb) >> (0)) & (((3 + sizeshift) == 64) ? (W64)(-1LL) : ((1LL << (3 + sizeshift))-1LL)));

  W64 rd = 0;

  for (int i = (1 << (3-sizeshift))-1; i >= 0; i--) {
    bool b = (((ra) >> ((i * sizebits) + rb)) & 1);
    rd = (rd << 1) | b;
  }

  state.reg.rddata = rd;
  state.reg.rdflags = x86_genflags<W64>(rd);
}

uopimpl_func_t implmap_vbt[4] = {&uop_impl_vbt<0>, &uop_impl_vbt<1>, &uop_impl_vbt<2>, &uop_impl_vbt<3>};






template <typename T>
W16 compare_and_gen_flags(T ra, T rb) {
  byte cf = 0; byte of = 0;
  asm("sub %[rb],%[ra]; setc %[cf]; seto %[of]" : [ra] "+q" (ra), [cf] "=q" (cf), [of] "=q" (of) : [rb] "qm" (rb));

  return x86_genflags<T>(ra) | (W16(cf) << 0) | (W16(of) << 11);
}
# 1473 "uopimpl.cpp"
template <int sizeshift, int cond>
void uop_impl_vcmp(IssueState& state, W64 ra, W64 rb, W64 rc, W16 raflags, W16 rbflags, W16 rcflags) {
  int sizebits = (1 << sizeshift) * 8;

  W64 rd = 0;

  for (int i = (1 << (3-sizeshift))-1; i >= 0; i--) {
    W64 a = (((ra) >> (i*sizebits)) & (((sizebits) == 64) ? (W64)(-1LL) : ((1LL << (sizebits))-1LL)));
    W64 b = (((rb) >> (i*sizebits)) & (((sizebits) == 64) ? (W64)(-1LL) : ((1LL << (sizebits))-1LL)));
    W16 flags = 0;
    switch (sizeshift) {
    case 0: flags = compare_and_gen_flags<byte>(a, b); break;
    case 1: flags = compare_and_gen_flags<W16>(a, b); break;
    case 2: flags = compare_and_gen_flags<W32>(a, b); break;
    case 3: flags = compare_and_gen_flags<W64>(a, b); break;
    }

    bool z = evaluate_cond<cond>(flags, flags);

    rd <<= sizebits;
    rd |= (z) ? (((sizebits) == 64) ? (W64)(-1LL) : ((1LL << (sizebits))-1LL)) : 0;
  }

  state.reg.rddata = rd;
  state.reg.rdflags = x86_genflags<W64>(rd);
}



uopimpl_func_t implmap_vcmp[16][4] = {
  {&uop_impl_vcmp<0, 0>, &uop_impl_vcmp<1, 0>, &uop_impl_vcmp<2, 0>, &uop_impl_vcmp<3, 0>},
  {&uop_impl_vcmp<0, 1>, &uop_impl_vcmp<1, 1>, &uop_impl_vcmp<2, 1>, &uop_impl_vcmp<3, 1>},
  {&uop_impl_vcmp<0, 2>, &uop_impl_vcmp<1, 2>, &uop_impl_vcmp<2, 2>, &uop_impl_vcmp<3, 2>},
  {&uop_impl_vcmp<0, 3>, &uop_impl_vcmp<1, 3>, &uop_impl_vcmp<2, 3>, &uop_impl_vcmp<3, 3>},
  {&uop_impl_vcmp<0, 4>, &uop_impl_vcmp<1, 4>, &uop_impl_vcmp<2, 4>, &uop_impl_vcmp<3, 4>},
  {&uop_impl_vcmp<0, 5>, &uop_impl_vcmp<1, 5>, &uop_impl_vcmp<2, 5>, &uop_impl_vcmp<3, 5>},
  {&uop_impl_vcmp<0, 6>, &uop_impl_vcmp<1, 6>, &uop_impl_vcmp<2, 6>, &uop_impl_vcmp<3, 6>},
  {&uop_impl_vcmp<0, 7>, &uop_impl_vcmp<1, 7>, &uop_impl_vcmp<2, 7>, &uop_impl_vcmp<3, 7>},
  {&uop_impl_vcmp<0, 8>, &uop_impl_vcmp<1, 8>, &uop_impl_vcmp<2, 8>, &uop_impl_vcmp<3, 8>},
  {&uop_impl_vcmp<0, 9>, &uop_impl_vcmp<1, 9>, &uop_impl_vcmp<2, 9>, &uop_impl_vcmp<3, 9>},
  {&uop_impl_vcmp<0, 10>, &uop_impl_vcmp<1, 10>, &uop_impl_vcmp<2, 10>, &uop_impl_vcmp<3, 10>},
  {&uop_impl_vcmp<0, 11>, &uop_impl_vcmp<1, 11>, &uop_impl_vcmp<2, 11>, &uop_impl_vcmp<3, 11>},
  {&uop_impl_vcmp<0, 12>, &uop_impl_vcmp<1, 12>, &uop_impl_vcmp<2, 12>, &uop_impl_vcmp<3, 12>},
  {&uop_impl_vcmp<0, 13>, &uop_impl_vcmp<1, 13>, &uop_impl_vcmp<2, 13>, &uop_impl_vcmp<3, 13>},
  {&uop_impl_vcmp<0, 14>, &uop_impl_vcmp<1, 14>, &uop_impl_vcmp<2, 14>, &uop_impl_vcmp<3, 14>},
  {&uop_impl_vcmp<0, 15>, &uop_impl_vcmp<1, 15>, &uop_impl_vcmp<2, 15>, &uop_impl_vcmp<3, 15>}
};




uopimpl_func_t get_synthcode_for_uop(int op, int size, bool setflags, int cond, int extshift, bool except, bool internal) {
  uopimpl_func_t func = __null;

  switch (op) {
  case OP_nop:
    func = uop_impl_nop; break;
  case OP_mov:
    func = implmap_mov[size]; break;
  case OP_and:
    func = implmap_and[size][setflags]; break;
  case OP_or:
    func = implmap_or[size][setflags]; break;
  case OP_xor:
    func = implmap_xor[size][setflags]; break;
  case OP_andnot:
    func = implmap_andnot[size][setflags]; break;
  case OP_ornot:
    func = implmap_ornot[size][setflags]; break;
  case OP_nand:
    func = implmap_nand[size][setflags]; break;
  case OP_nor:
    func = implmap_nor[size][setflags]; break;
  case OP_eqv:
    func = implmap_eqv[size][setflags]; break;
  case OP_add:
    func = implmap_add[size][setflags]; break;
  case OP_sub:
    func = implmap_sub[size][setflags]; break;
  case OP_adda:
    func = implmap_adda[size][extshift][setflags]; break;
  case OP_suba:
    func = implmap_suba[size][extshift][setflags]; break;
  case OP_addm:
    func = implmap_addm[size][setflags]; break;
  case OP_subm:
    func = implmap_subm[size][setflags]; break;
  case OP_sel:
    func = implmap_sel[cond][size]; break;
  case OP_sel_cmp:
    func = implmap_sel_cmp[cond][size][extshift]; break;
  case OP_set:
    func = implmap_set[cond][size]; break;
  case OP_set_and:
    func = implmap_set_and[cond][size][extshift]; break;
  case OP_set_sub:
    func = implmap_set_sub[cond][size][extshift]; break;
  case OP_br:
    func = implmap_br[cond][except]; break;
  case OP_br_sub:
    func = implmap_br_sub[cond][size][except]; break;
  case OP_br_and:
    func = implmap_br_and[cond][size][except]; break;
  case OP_jmp:
    func = (except ? uop_impl_jmp_ex: uop_impl_jmp); break;
  case OP_bru:
    func = uop_impl_bru; break;
  case OP_brp:
    func = uop_impl_brp; break;
  case OP_chk:
    func = implmap_chk[cond][0]; break;
  case OP_chk_sub:
    func = implmap_chk_sub[cond][size]; break;
  case OP_chk_and:
    func = implmap_chk_and[cond][size]; break;




  case OP_ld:
  case OP_ldx:
  case OP_ld_pre:
  case OP_st:
  case OP_mf:
    func = uop_impl_nop; break;

  case OP_bt:
    func = implmap_bt[size][setflags]; break;
  case OP_bts:
    func = implmap_bts[size][setflags]; break;
  case OP_btr:
    func = implmap_btr[size][setflags]; break;
  case OP_btc:
    func = implmap_btc[size][setflags]; break;

  case OP_rotl:
    func = implmap_rotl[size][setflags]; break;
  case OP_rotr:
    func = implmap_rotr[size][setflags]; break;
  case OP_rotcl:
    func = implmap_rotcl[size][setflags]; break;
  case OP_rotcr:
    func = implmap_rotcr[size][setflags]; break;
  case OP_shl:
    func = implmap_shl[size][setflags]; break;
  case OP_shr:
    func = implmap_shr[size][setflags]; break;
  case OP_sar:
    func = implmap_sar[size][setflags]; break;
  case OP_mask:
    func = implmap_mask[size][cond]; break;

  case OP_shls:
    func = implmap_shls[size][setflags]; break;
  case OP_shrs:
    func = implmap_shrs[size][setflags]; break;
  case OP_sars:
    func = implmap_sars[size][setflags]; break;
  case OP_maskb:
    func = implmap_maskb[size][cond]; break;

  case OP_bswap:
    func = implmap_bswap[size][0]; break;
  case OP_collcc:
    func = uop_impl_collcc; break;
  case OP_movccr:
    func = uop_impl_movccr; break;
  case OP_movrcc:
    func = uop_impl_movrcc; break;
  case OP_andcc:
    func = uop_impl_andcc; break;
  case OP_orcc:
    func = uop_impl_orcc; break;
  case OP_ornotcc:
    func = uop_impl_ornotcc; break;
  case OP_xorcc:
    func = uop_impl_xorcc; break;

  case OP_mull:
    func = implmap_mull[size][setflags]; break;
  case OP_mulh:
    func = implmap_mulh[size][setflags]; break;
  case OP_mulhu:
    func = implmap_mulhu[size][setflags]; break;
  case OP_mulhl:
    func = implmap_mulhl[size]; break;

  case OP_ctz:
    func = implmap_ctz[size][setflags]; break;
  case OP_clz:
    func = implmap_clz[size][setflags]; break;

  case OP_permb:
    func = uop_impl_permb; break;

  case OP_div:
    func = implmap_div[size]; break;
  case OP_rem:
    func = implmap_rem[size]; break;
  case OP_divs:
    func = implmap_divs[size]; break;
  case OP_rems:
    func = implmap_rems[size]; break;

  case OP_min:
    func = implmap_min[size]; break;
  case OP_max:
    func = implmap_max[size]; break;
  case OP_min_s:
    func = implmap_min_s[size]; break;
  case OP_max_s:
    func = implmap_max_s[size]; break;

  case OP_fadd:
    func = implmap_fadd[size]; break;
  case OP_fsub:
    func = implmap_fsub[size]; break;
  case OP_fmul:
    func = implmap_fmul[size]; break;
  case OP_fmadd:
    func = implmap_fmadd[size]; break;
  case OP_fmsub:
    func = implmap_fmsub[size]; break;
  case OP_fmsubr:
    func = implmap_fmsubr[size]; break;
  case OP_fdiv:
    func = implmap_fdiv[size]; break;
  case OP_fsqrt:
    func = implmap_fsqrt[size]; break;
  case OP_frcp:
    func = implmap_frcp[size]; break;
  case OP_frsqrt:
    func = implmap_frsqrt[size]; break;
  case OP_fmin:
    func = implmap_fmin[size]; break;
  case OP_fmax:
    func = implmap_fmax[size]; break;
  case OP_fcmp:
    func = implmap_fcmp[cond][size]; break;
  case OP_fcmpcc:
    func = implmap_fcmpcc[cond][size]; break;

  case OP_fcvt_i2s_ins:
    func = uop_impl_fcvt_i2s_ins; break;

  case OP_fcvt_i2s_p:
    func = uop_impl_fcvt_i2s_p; break;
  case OP_fcvt_i2d_lo:
    func = uop_impl_fcvt_i2d_lo; break;
  case OP_fcvt_i2d_hi:
    func = uop_impl_fcvt_i2d_hi; break;

  case OP_fcvt_q2s_ins:
    func = uop_impl_fcvt_q2s_ins; break;
  case OP_fcvt_q2d:
    func = uop_impl_fcvt_q2d; break;

  case OP_fcvt_s2i:
    func = implmap_fcvt_s2i[size & 1]; break;
  case OP_fcvt_s2q:
    func = implmap_fcvt_s2q[size & 1]; break;
  case OP_fcvt_s2i_p:
    func = implmap_fcvt_s2i_p[size & 1]; break;
  case OP_fcvt_d2i:
    func = implmap_fcvt_d2i[size & 1]; break;
  case OP_fcvt_d2q:
    func = implmap_fcvt_d2q[size & 1]; break;
  case OP_fcvt_d2i_p:
    func = implmap_fcvt_d2i_p[size & 1]; break;
  case OP_fcvt_d2s_ins:
    func = uop_impl_fcvt_d2s_ins; break;
  case OP_fcvt_d2s_p:
    func = implmap_fcvt_d2s_p[0]; break;

  case OP_fcvt_s2d_lo:
    func = uop_impl_fcvt_s2d_lo; break;
  case OP_fcvt_s2d_hi:
    func = uop_impl_fcvt_s2d_hi; break;

  case OP_vadd:
    func = implmap_vadd[size]; break;
  case OP_vsub:
    func = implmap_vsub[size]; break;
  case OP_vadd_us:
    func = implmap_vadd_us[size]; break;
  case OP_vsub_us:
    func = implmap_vsub_us[size]; break;
  case OP_vadd_ss:
    func = implmap_vadd_ss[size]; break;
  case OP_vsub_ss:
    func = implmap_vsub_ss[size]; break;
  case OP_vshl:
    func = implmap_vshl[size]; break;
  case OP_vshr:
    func = implmap_vshr[size]; break;
  case OP_vbt:
    func = implmap_vbt[size]; break;
  case OP_vsar:
    func = implmap_vsar[size]; break;
  case OP_vavg:
    func = implmap_vavg[size]; break;
  case OP_vcmp:
    func = implmap_vcmp[cond][size]; break;
  case OP_vmin:
    func = implmap_vmin[size]; break;
  case OP_vmax:
    func = implmap_vmax[size]; break;
  case OP_vmin_s:
    func = implmap_vmin_s[size]; break;
  case OP_vmax_s:
    func = implmap_vmax_s[size]; break;
  case OP_vmull:
    func = implmap_vmull[size]; break;
  case OP_vmulh:
    func = implmap_vmulh[size]; break;
  case OP_vmulhu:
    func = implmap_vmulhu[size]; break;
  case OP_vmaddp:
    func = implmap_vmaddp[size]; break;
  case OP_vsad:
    func = implmap_vsad[size]; break;
  case OP_vpack_us:
    func = implmap_vpack_us[size]; break;
  case OP_vpack_ss:
    func = implmap_vpack_ss[size]; break;
  default:
    logfile << "Unknown uop opcode ", op, flush, " (", nameof(op), ")", endl, flush;
    (static_cast<void> (((__builtin_expect(!!(false), 0))) ? 0 : (assert_fail ("false", "uopimpl.cpp", 1800, __PRETTY_FUNCTION__), 0)));
  }
  return func;
}

void synth_uops_for_bb(BasicBlock& bb) {
  bb.synthops = new uopimpl_func_t[bb.count];
  for (size_t i = 0; i < (bb.count); i++) {
    const TransOp& transop = bb.transops[i];
    uopimpl_func_t func = get_synthcode_for_uop(transop.opcode, transop.size, transop.setflags, transop.cond, transop.extshift, 0, transop.internal);
    bb.synthops[i] = func;
  }
}

uopimpl_func_t get_synthcode_for_cond_branch(int opcode, int cond, int size, bool except) {
  uopimpl_func_t func;

  switch (opcode) {

  case OP_br_sub:
    func = implmap_br_sub[cond][size][except]; break;
  case OP_br_and:
    func = implmap_br_and[cond][size][except]; break;

  case OP_br:
    func = implmap_br[cond][except]; break;
  default:
    (static_cast<void> (((__builtin_expect(!!(false), 0))) ? 0 : (assert_fail ("false", "uopimpl.cpp", 1827, __PRETTY_FUNCTION__), 0)));
  }

  return func;
}

void init_uops() {
}

void shutdown_uops() {
}
