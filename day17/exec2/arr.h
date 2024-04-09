//arr.h
#ifndef _ARR_H
#define _ARR_H
//包含公共头文件
#include <stdio.h>
///求数组元素个数
#define ASIZE(x) (sizeof(x) / sizeof(x[0]))
//声明操作函数
extern void print(int*, int);

#endif
