#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - returns the sum of a and b.
 * @a: sum.
 * @b: sum.
 * Return: an integer.
 */

int op_add(int a, int b);

/**
 * op_sub - returns the difference of a and b.
 * @a: integer.
 * @b: integer.
 * Return: integer.
 */

int op_sub(int a, int b);

/**
 * op_mul - returns the product of a and b.
 * @a: product.
 * @b: product.
 * Return: integer.
 */

int op_mul(int a, int b);

/**
 * op_div - returns the result of the division of a by b.
 * @a: integer
 * @b: integer
 * Return: integer.
 */

int op_div(int a, int b);

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: integer.
 * @b: integer.
 * Return: an integer.
 */

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
