 /***************************************************************************************
  *  File Name: std_types.h
 *
 * Description: types for ARM.
 *
 * Author: Mostafa Kotb.
 *
 ***************************************************************************************/


#ifndef LIB_STD_TYPES_H_
#define LIB_STD_TYPES_H_

/* Boolean Data Type */
typedef unsigned char boolean;


/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif

#ifndef TRUE
#define TRUE        (1u)
#endif

#define LOGIC_HIGH        (1u)
#define LOGIC_LOW         (0u)

#define NULL		(0u)

typedef unsigned char         uint8_t;          /*           0 .. 255              */
typedef signed char           sint8_t;          /*        -128 .. +127             */
typedef unsigned short        uint16_t;         /*           0 .. 65535            */
typedef signed short          sint16_t;         /*      -32768 .. +32767           */
typedef unsigned long         uint32_t;         /*           0 .. 4294967295       */
typedef signed long           sint32_t;         /* -2147483648 .. +2147483647      */
typedef unsigned long long    uint64_t;         /*       0 .. 18446744073709551615  */
typedef signed long long      sint64_t;         /* -9223372036854775808 .. 9223372036854775807 */
typedef float                 fint32_t;
typedef double                fint64_t;

#endif /* LIB_STD_TYPES_H_ */
