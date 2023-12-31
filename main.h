#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

/** FLAGS */
#define F_MINUS 0x01
#define F_PLUS 0x02
#define F_ZERO 0x04
#define F_HASH 0x08
#define F_SPACE 0x10

/** MACRO CONSTANT */
#define S_LONG 1
#define S_SHORT 2

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * struct fmt - Struct op
 *
 * @fmt: format
 * @fn: associated function
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: Format.
 * @fn: Function associated.
 */

typedef struct fmt fmt_t;

int _putchar(char c);
int _printf(const char *format, ...);
int b_printf(const char *format, ...);
int _putunsigned(unsigned int n);
int gets_size(const char *format, int *a);
int gets_width(const char *format, int *a, va_list list);
int _putoctal(unsigned int n);
int _puthex(unsigned int n, int uppercase);
void prints_buffer(char buffer[], int *buff_ind);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length, int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[], char buffer[], int flags, char flag_ch, int width, int precision, int size);
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],	int flags, int width, int precision, int size);
int gets_flags(const char *format, int *i);
int gets_width(const char *format, int *i, va_list list);
int gets_precision(const char *format, int *i, va_list list);
int gets_size(const char *format, int *i);
int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_rot13(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[],	int flags, int width, int precision, int size);
int print_non_printable(va_list types, char buffer[], int flags, int width, int precision, int size);


long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
int write_number(int is_positive, int ind, char buffer[], int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length, int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);

int handle_print(const char *fmt, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);
int write_numb(int is_negative, int i, char *buffer, const char *flags, int width, int precision, int size);
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size);

int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
int prints_binary(va_list args);
int prints_non_printable(va_list types, char buffer[], int flags, int width, int precision, int size);
#endif
