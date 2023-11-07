#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/* 
   The following code uses an include guard to prevent multiple inclusions
   of this header file. If FUNCTION_LIKE_MACRO_H has not been defined yet,
   it gets defined here.
*/

#define ABS(x) ((x) < (0) ? -(x) : (x))

/* 
   The macro ABS is defined as a function-like macro. It takes a single 
   argument 'x' and returns the absolute value of 'x'. The macro performs 
   a conditional expression to determine the absolute value.
*/

#endif

/* 
   This marks the end of the header file. The #endif corresponds to the #ifndef 
   at the beginning, effectively closing the include guard.
*/

