#pragma once

// stdbool

#define bool    _Bool
#define true    1
#define false   0

// stddef

#define NULL    ((void*)0)

// stdint

typedef __INT8_TYPE__    int8_t;
typedef __UINT8_TYPE__   uint8_t;
typedef __INT16_TYPE__   int16_t;
typedef __UINT16_TYPE__  uint16_t;
typedef __INT32_TYPE__   int32_t;
typedef __UINT32_TYPE__  uint32_t;
typedef __INT64_TYPE__   int64_t;
typedef __UINT64_TYPE__  uint64_t;
typedef __INTPTR_TYPE__  intptr_t;
typedef __UINTPTR_TYPE__ uintptr_t;

typedef __PTRDIFF_TYPE__ ptrdiff_t;
typedef __SIZE_TYPE__    size_t;
typedef __SIZE_TYPE__    rsize_t;
typedef __WCHAR_TYPE__   wchar_t;
typedef __WINT_TYPE__    wint_t;

// float

#define FLT_RADIX 2

#define FLT_TRUE_MIN 1.40129846432481707092e-45F
#define FLT_MIN 1.17549435082228750797e-38F
#define FLT_MAX 3.40282346638528859812e+38F
#define FLT_EPSILON 1.1920928955078125e-07F

#define FLT_MANT_DIG 24
#define FLT_MIN_EXP (-125)
#define FLT_MAX_EXP 128
#define FLT_HAS_SUBNORM 1

#define FLT_DIG 6
#define FLT_DECIMAL_DIG 9
#define FLT_MIN_10_EXP (-37)
#define FLT_MAX_10_EXP 38

#define DBL_TRUE_MIN 4.94065645841246544177e-324
#define DBL_MIN 2.22507385850720138309e-308
#define DBL_MAX 1.79769313486231570815e+308
#define DBL_EPSILON 2.22044604925031308085e-16

#define DBL_MANT_DIG 53
#define DBL_MIN_EXP (-1021)
#define DBL_MAX_EXP 1024
#define DBL_HAS_SUBNORM 1

#define DBL_DIG 15
#define DBL_DECIMAL_DIG 17
#define DBL_MIN_10_EXP (-307)
#define DBL_MAX_10_EXP 308

#define FLT_ROUNDS 1
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__

#define LDBL_TRUE_MIN __LDBL_DENORM_MIN__
#define LDBL_MIN __LDBL_MIN__
#define LDBL_MAX __LDBL_MAX__
#define LDBL_EPSILON __LDBL_EPSILON__

#define LDBL_MANT_DIG __LDBL_MANT_DIG__
#define LDBL_MIN_EXP __LDBL_MIN_EXP__
#define LDBL_MAX_EXP __LDBL_MAX_EXP__

#define LDBL_DIG __LDBL_DIG__
#define LDBL_MIN_10_EXP __LDBL_MIN_10_EXP__
#define LDBL_MAX_10_EXP __LDBL_MAX_10_EXP__

#define DECIMAL_DIG __DECIMAL_DIG__

// endian

#define __BYTE_ORDER __LITTLE_ENDIAN
