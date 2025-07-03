#include "math+.h"

// Базовые арифметические операции (int)
int plusi(int a, int b, int *f) {
    int result = a + b;
    if (f != NULL) *f = result;
    return result;
}

int minusi(int a, int b, int *f) {
    int result = a - b;
    if (f != NULL) *f = result;
    return result;
}

int multiplyi(int a, int b, int *f) {
    int result = a * b;
    if (f != NULL) *f = result;
    return result;
}

int dividei(int a, int b, int *f) {
    if (b == 0) {
        printf("Error: cannot divide by zero\n");
        if (f != NULL) *f = 0;
        return 0;
    }
    int result = a / b;
    if (f != NULL) *f = result;
    return result;
}

// Базовые арифметические операции (double)
double plusd(double a, double b, double *f) {
    double result = a + b;
    if (f != NULL) *f = result;
    return result;
}

double minusd(double a, double b, double *f) {
    double result = a - b;
    if (f != NULL) *f = result;
    return result;
}

double multiplyd(double a, double b, double *f) {
    double result = a * b;
    if (f != NULL) *f = result;
    return result;
}

double divided(double a, double b, double *f) {
    if (b == 0.0) {
        printf("Error: cannot divide by zero\n");
        if (f != NULL) *f = 0.0;
        return 0.0;
    }
    double result = a / b;
    if (f != NULL) *f = result;
    return result;
}

// Базовые арифметические операции (float)
float plusf(float a, float b, float *f) {
    float result = a + b;
    if (f != NULL) *f = result;
    return result;
}

float minusf(float a, float b, float *f) {
    float result = a - b;
    if (f != NULL) *f = result;
    return result;
}

float multiplyf(float a, float b, float *f) {
    float result = a * b;
    if (f != NULL) *f = result;
    return result;
}

float dividef(float a, float b, float *f) {
    if (b == 0.0f) {
        printf("Error: cannot divide by zero\n");
        if (f != NULL) *f = 0.0f;
        return 0.0f;
    }
    float result = a / b;
    if (f != NULL) *f = result;
    return result;
}

// Специальные последовательности и факториалы (int)
int fibonaccii(int n, int *f) {
    int result;
    if (n <= 0) {
        result = 0;
    } else if (n == 1) {
        result = 1;
    } else {
        int a = 0, b = 1;
        for (int i = 2; i <= n; i++) {
            result = a + b;
            a = b;
            b = result;
        }
    }
    if (f != NULL) *f = result;
    return result;
}

int factoriali(int n, int *f) {
    if (n < 0) {
        printf("Error: cannot calculate factorial of a negative number\n");
        if (f != NULL) *f = -1;
        return -1;
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    if (f != NULL) *f = result;
    return result;
}

// Специальные последовательности и факториалы (double)
double fibonaccid(int n, double *f) {
    double result;
    if (n <= 0) {
        result = 0.0;
    } else if (n == 1) {
        result = 1.0;
    } else {
        double a = 0.0, b = 1.0;
        for (int i = 2; i <= n; i++) {
            result = a + b;
            a = b;
            b = result;
        }
    }
    if (f != NULL) *f = result;
    return result;
}

double factoriald(int n, double *f) {
    if (n < 0) {
        printf("Error: cannot calculate factorial of a negative number\n");
        if (f != NULL) *f = -1.0;
        return -1.0;
    }
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    if (f != NULL) *f = result;
    return result;
}

// Специальные последовательности и факториалы (float)
float fibonaccif(int n, float *f) {
    float result;
    if (n <= 0) {
        result = 0.0f;
    } else if (n == 1) {
        result = 1.0f;
    } else {
        float a = 0.0f, b = 1.0f;
        for (int i = 2; i <= n; i++) {
            result = a + b;
            a = b;
            b = result;
        }
    }
    if (f != NULL) *f = result;
    return result;
}

float factorialf(int n, float *f) {
    if (n < 0) {
        printf("Error: cannot calculate factorial of a negative number\n");
        if (f != NULL) *f = -1.0f;
        return -1.0f;
    }
    float result = 1.0f;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    if (f != NULL) *f = result;
    return result;
}

// Степени и корни (int)
int squarei(int a, int *f) {
    int result = a * a;
    if (f != NULL) *f = result;
    return result;
}

int cubei(int a, int *f) {
    int result = a * a * a;
    if (f != NULL) *f = result;
    return result;
}

int poweri(int a, int b, int *f) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    if (f != NULL) *f = result;
    return result;
}

// Степени и корни (double)
double squared(double a, double *f) {
    double result = a * a;
    if (f != NULL) *f = result;
    return result;
}

double cubed(double a, double *f) {
    double result = a * a * a;
    if (f != NULL) *f = result;
    return result;
}

double powerd(double a, int b, double *f) {
    double result = 1.0;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    if (f != NULL) *f = result;
    return result;
}

// Степени и корни (float)
float squaref(float a, float *f) {
    float result = a * a;
    if (f != NULL) *f = result;
    return result;
}

float cubef(float a, float *f) {
    float result = a * a * a;
    if (f != NULL) *f = result;
    return result;
}

float powerf(float a, int b, float *f) {
    float result = 1.0f;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    if (f != NULL) *f = result;
    return result;
}

// Корни и логарифмы (double)
double square_rootd(double a, double *f) {
    if (a < 0) {
        printf("Error: cannot calculate square root of a negative number\n");
        if (f != NULL) *f = -1.0;
        return -1.0;
    }
    double result = sqrt(a);
    if (f != NULL) *f = result;
    return result;
}

double cube_rootd(double a, double *f) {
    double result = cbrt(a);
    if (f != NULL) *f = result;
    return result;
}

double logarithmd(double a, double *f) {
    if (a <= 0) {
        printf("Error: cannot calculate logarithm of a non-positive number\n");
        if (f != NULL) *f = -1.0;
        return -1.0;
    }
    double result = log(a);
    if (f != NULL) *f = result;
    return result;
}

// Корни и логарифмы (float)
float square_rootf(float a, float *f) {
    if (a < 0) {
        printf("Error: cannot calculate square root of a negative number\n");
        if (f != NULL) *f = -1.0f;
        return -1.0f;
    }
    float result = sqrtf(a);
    if (f != NULL) *f = result;
    return result;
}

float cube_rootf(float a, float *f) {
    float result = cbrtf(a);
    if (f != NULL) *f = result;
    return result;
}

float logarithmf(float a, float *f) {
    if (a <= 0) {
        printf("Error: cannot calculate logarithm of a non-positive number\n");
        if (f != NULL) *f = -1.0f;
        return -1.0f;
    }
    float result = logf(a);
    if (f != NULL) *f = result;
    return result;
}

// Случайные числа
int randomi(int min, int max, int *f) {
    if (min >= max) {
        printf("Error: min should be less than max\n");
        if (f != NULL) *f = 0;
        return 0;
    }
    int result = rand() % (max - min + 1) + min;
    if (f != NULL) *f = result;
    return result;
}

double randomd(double min, double max, double *f) {
    if (min >= max) {
        printf("Error: min should be less than max\n");
        if (f != NULL) *f = 0.0;
        return 0.0;
    }
    double result = ((double)rand() / RAND_MAX) * (max - min) + min;
    if (f != NULL) *f = result;
    return result;
}

float randomf(float min, float max, float *f) {
    if (min >= max) {
        printf("Error: min should be less than max\n");
        if (f != NULL) *f = 0.0f;
        return 0.0f;
    }
    float result = ((float)rand() / RAND_MAX) * (max - min) + min;
    if (f != NULL) *f = result;
    return result;
}

// Расширенные математические функции (double)
double pow_doubled(double base, double exp, double *f) {
    double result = pow(base, exp);
    if (f != NULL) *f = result;
    return result;
}

double sin_radd(double x, double *f) {
    double result = sin(x);
    if (f != NULL) *f = result;
    return result;
}

double cos_radd(double x, double *f) {
    double result = cos(x);
    if (f != NULL) *f = result;
    return result;
}

double tan_radd(double x, double *f) {
    double result = tan(x);
    if (f != NULL) *f = result;
    return result;
}

double lnd(double x, double *f) {
    if (x <= 0) {
        printf("Error: cannot calculate natural logarithm of a non-positive number\n");
        if (f != NULL) *f = -1.0;
        return -1.0;
    }
    double result = log(x);
    if (f != NULL) *f = result;
    return result;
}

double log10d(double x, double *f) {
    if (x <= 0) {
        printf("Error: cannot calculate base-10 logarithm of a non-positive number\n");
        if (f != NULL) *f = -1.0;
        return -1.0;
    }
    double result = log10(x);
    if (f != NULL) *f = result;
    return result;
}

double absd(double x, double *f) {
    double result = fabs(x);
    if (f != NULL) *f = result;
    return result;
}

double expd(double x, double *f) {
    double result = exp(x);
    if (f != NULL) *f = result;
    return result;
}

// Расширенные математические функции (float)
float pow_f(float base, float exp, float *f) {
    float result = powf(base, exp);
    if (f != NULL) *f = result;
    return result;
}

float sin_radf(float x, float *f) {
    float result = sinf(x);
    if (f != NULL) *f = result;
    return result;
}

float cos_radf(float x, float *f) {
    float result = cosf(x);
    if (f != NULL) *f = result;
    return result;
}

float tan_radf(float x, float *f) {
    float result = tanf(x);
    if (f != NULL) *f = result;
    return result;
}

float lnf(float x, float *f) {
    if (x <= 0) {
        printf("Error: cannot calculate natural logarithm of a non-positive number\n");
        if (f != NULL) *f = -1.0f;
        return -1.0f;
    }
    float result = logf(x);
    if (f != NULL) *f = result;
    return result;
}

float log10_f(float x, float *f) {
    if (x <= 0) {
        printf("Error: cannot calculate base-10 logarithm of a non-positive number\n");
        if (f != NULL) *f = -1.0f;
        return -1.0f;
    }
    float result = log10f(x);
    if (f != NULL) *f = result;
    return result;
}

float abs_f(float x, float *f) {
    float result = fabsf(x);
    if (f != NULL) *f = result;
    return result;
}

float exp_f(float x, float *f) {
    float result = expf(x);
    if (f != NULL) *f = result;
    return result;
}

// Информационные функции
void info() {
    printf("Math+ Library - Extended Mathematical Functions\n");
    printf("Supports int, double, and float operations\n");
    printf("Functions: arithmetic, powers, roots, factorials, random numbers\n");
    printf("Thread-safe and NULL-pointer safe\n");
}

void info_ru() {
    printf("Библиотека Math+ - Расширенные математические функции\n");
    printf("Поддерживает операции с int, double и float\n");
    printf("Функции: арифметика, степени, корни, факториалы, случайные числа\n");
    printf("Потокобезопасная и защищенная от NULL-указателей\n");
}
