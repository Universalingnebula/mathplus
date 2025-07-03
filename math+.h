#ifndef MATH_PLUS_H
#define MATH_PLUS_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

// Базовые арифметические операции (int)
int plusi(int a, int b, int *f);
int minusi(int a, int b, int *f);
int multiplyi(int a, int b, int *f);
int dividei(int a, int b, int *f);

// Базовые арифметические операции (double)
double plusd(double a, double b, double *f);
double minusd(double a, double b, double *f);
double multiplyd(double a, double b, double *f);
double divided(double a, double b, double *f);

// Базовые арифметические операции (float)
float plusf(float a, float b, float *f);
float minusf(float a, float b, float *f);
float multiplyf(float a, float b, float *f);
float dividef(float a, float b, float *f);

// Специальные последовательности и факториалы (int)
int fibonaccii(int n, int *f);
int factoriali(int n, int *f);

// Специальные последовательности и факториалы (double)
double fibonaccid(int n, double *f);
double factoriald(int n, double *f);

// Специальные последовательности и факториалы (float)
float fibonaccif(int n, float *f);
float factorialf(int n, float *f);

// Степени и корни (int)
int squarei(int a, int *f);
int cubei(int a, int *f);
int poweri(int a, int b, int *f);

// Степени и корни (double)
double squared(double a, double *f);
double cubed(double a, double *f);
double powerd(double a, int b, double *f);

// Степени и корни (float)
float squaref(float a, float *f);
float cubef(float a, float *f);
float powerf(float a, int b, float *f);

// Корни и логарифмы (double)
double square_rootd(double a, double *f);
double cube_rootd(double a, double *f);
double logarithmd(double a, double *f);

// Корни и логарифмы (float)
float square_rootf(float a, float *f);
float cube_rootf(float a, float *f);
float logarithmf(float a, float *f);

// Случайные числа
int randomi(int min, int max, int *f);
double randomd(double min, double max, double *f);
float randomf(float min, float max, float *f);

// Расширенные математические функции (double)
double pow_doubled(double base, double exp, double *f);
double sin_radd(double x, double *f);
double cos_radd(double x, double *f);
double tan_radd(double x, double *f);
double lnd(double x, double *f);
double log10d(double x, double *f);
double absd(double x, double *f);
double expd(double x, double *f);

// Расширенные математические функции (float)
float pow_f(float base, float exp, float *f);
float sin_radf(float x, float *f);
float cos_radf(float x, float *f);
float tan_radf(float x, float *f);
float lnf(float x, float *f);
float log10_f(float x, float *f);
float abs_f(float x, float *f);
float exp_f(float x, float *f);

// Информационные функции
void info();
void info_ru();

// Алиасы для обратной совместимости
#define plus(a, b, f) plusi(a, b, f)
#define minus(a, b, f) minusi(a, b, f)
#define multiply(a, b, f) multiplyi(a, b, f)
#define divide(a, b, f) dividei(a, b, f)
#define fibonacci(n, f) fibonaccii(n, f)
#define factorial(n, f) factoriali(n, f)
#define square(a, f) squarei(a, f)
#define cube(a, f) cubei(a, f)
#define power(a, b, f) poweri(a, b, f)
#define square_root(a, f) square_rootd(a, f)
#define cube_root(a, f) cube_rootd(a, f)
#define logarithm(a, f) logarithmd(a, f)
#define random(min, max, f) randomi(min, max, f)

#ifdef __cplusplus
}
#endif

#endif // MATH_PLUS_H
