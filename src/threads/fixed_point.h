#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define P 17
#define Q 14
#define FRAC 1 << (Q)

#if P + Q != 31
#error "P + Q != 31."
#endif

#define INT_TO_FP(n) (n) * (FRAC)
#define FP_TO_INT_TRUNC(x) (x) / (FRAC)
#define FP_TO_INT_ROUND(x) ((x) >= 0 ? ((x) + (FRAC) / 2) / (FRAC) : ((x) - (FRAC) / 2) / (FRAC))
#define FP_ADD_INT(x, n) (x) + (n) * (FRAC)
#define FP_SUB_INT(x, n) (x) - (n) * (FRAC)
#define FP_MUL_FP(x, y) ((int64_t) (x)) * (y) / (FRAC)
#define FP_DIV_FP(x, y) ((int64_t) (x)) * (FRAC) / (y)

#endif /* threads/fixed_point.h */

