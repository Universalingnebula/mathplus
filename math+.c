#include "math+.h"

int plusi(int a, int b, int *f) {
    *f = (a + b);
    return *f;
}
int minusi(int a, int b, int *f) {
    *f = (a - b);
    return *f;
}
int multiplyi(int a, int b, int *f) {
    *f = (a * b);
    return *f;
}
int dividei(int a, int b, int *f) {
    if (b == 0) {
        printf("Error: cannot divide null\n");
        *f = 0;
        return 0; // Возвращаем 0 или можно использовать другой подход для обработки ошибки
    }
    *f = (a / b);
    return *f;
}
int fibonaccii(int n, int *f) {
    if (n <= 0) {
        *f = 0;
        return 0; // Возвращаем 0 для n <= 0
    } else if (n == 1) {
        *f = 1;
        return 1; // Возвращаем 1 для n == 1
    } else {
        int a = 0, b = 1;
        for (int i = 2; i <= n; i++) {
            *f = a + b;
            a = b;
            b = *f;
        }
        return *f; // Возвращаем n-ое число Фибоначчи
    }
}
int factoriali(int n, int *f) {
    if (n < 0) {
        printf("Error: cannot calculate factorial of a negative number\n");
        *f = -1;
        return -1; // Возвращаем -1 для отрицательных чисел
    }
    *f = 1;
    for (int i = 1; i <= n; i++) {
        *f *= i;
    }
    return *f; // Возвращаем факториал числа n
}
int squarei(int a, int *f) {
    *f = a * a;
    return *f; // Возвращаем квадрат числа a
}
int cubei(int a, int *f) {
    *f = a * a * a;
    return *f; // Возвращаем куб числа a
}
int poweri(int a, int b, int *f) {
    *f = 1;
    for (int i = 0; i < b; i++) {
        *f *= a;
    }
    return *f; // Возвращаем a в степени b
}
int randomi(int min, int max, int *f) {
    if (min >= max) {
        printf("Error: min should be less than max\n");
        *f = 0;
        return 0; // Возвращаем 0 при некорректных границах
    }
    *f = rand() % (max - min + 1) + min; // Генерируем случайное число в диапазоне [min, max]
    return *f; // Возвращаем сгенерированное случайное число
}
double square_rootd(double a, double *f) {
    if (a < 0) {
        printf("Error: cannot calculate square root of a negative number\n");
        *f = -1;
        return -1; // Возвращаем -1 для отрицательных чисел
    }
    *f = sqrt(a);
    return *f; // Возвращаем квадратный корень числа a
}
double cube_rootd(double a, double *f) {
    if (a < 0) {
        printf("Error: cannot calculate cube root of a negative number\n");
        *f = -1;
        return -1; // Возвращаем -1 для отрицательных чисел
    }
    *f = cbrt(a);
    return *f; // Возвращаем кубический корень числа a
}
double logarithmd(double a, double *f) {
    if (a <= 0) {
        printf("Error: cannot calculate logarithm of a non-positive number\n");
        *f = -1;
        return -1; // Возвращаем -1 для нулей и отрицательных чисел
    }
    *f = log(a);
    return *f; // Возвращаем натуральный логарифм числа a
}
double randomd(double min, double max, double *f) {
    if (min >= max) {
        printf("Error: min should be less than max\n");
        *f = 0.0;
        return 0.0; // Возвращаем 0.0 при некорректных границах
    }
    *f = ((double)rand() / RAND_MAX) * (max - min) + min; // Генерируем случайное число в диапазоне [min, max]
    return *f; // Возвращаем сгенерированное случайное число
}
// Базовые арифметические операции (double)
double plusd(double a, double b, double *f) {
    *f = (a + b);
    return *f;
}
double minusd(double a, double b, double *f) {
    *f = (a - b);
    return *f;
}
double multiplyd(double a, double b, double *f) {
    *f = (a * b);
    return *f;
}
double divided(double a, double b, double *f) {
    if (b == 0.0) {
        printf("Error: cannot divide by zero\n");
        *f = 0.0;
        return 0.0;
    }
    *f = (a / b);
    return *f;
}

// Базовые арифметические операции (float)
float plusf(float a, float b, float *f) {
    *f = (a + b);
    return *f;
}
float minusf(float a, float b, float *f) {
    *f = (a - b);
    return *f;
}
float multiplyf(float a, float b, float *f) {
    *f = (a * b);
    return *f;
}
float dividef(float a, float b, float *f) {
    if (b == 0.0f) {
        printf("Error: cannot divide by zero\n");
        *f = 0.0f;
        return 0.0f;
    }
    *f = (a / b);
    return *f;
}
float randomf(float min, float max, float *f) {
    if (min >= max) {
        printf("Error: min should be less than max\n");
        *f = 0.0f;
        return 0.0f; // Возвращаем 0.0 при некорректных границах
    }
    *f = ((float)rand() / RAND_MAX) * (max - min) + min; // Генерируем случайное число в диапазоне [min, max]
    return *f; // Возвращаем сгенерированное случайное число
}
double sin_radd(double x, double *f) {
    *f = sin(x);
    return *f;
}

double cos_radd(double x, double *f) {
    *f = cos(x);
    return *f;
}

double tan_radd(double x, double *f) {
    *f = tan(x);
    return *f;
}

double lnd(double x, double *f) {
    if (x <= 0) {
        printf("Error: ln(x) for x <= 0\n");
        *f = -1;
        return -1;
    }
    *f = log(x);
    return *f;
}

double log10d(double x, double *f) {
    if (x <= 0) {
        printf("Error: log10(x) for x <= 0\n");
        *f = -1;
        return -1;
    }
    *f = log10(x);
    return *f;
}

double absd(double x, double *f) {
    *f = fabs(x);
    return *f;
}

double expd(double x, double *f) {
    *f = exp(x);
    return *f;
}

// Специальные последовательности и факториалы (double)
double fibonaccid(int n, double *f) {
    if (n <= 0) {
        *f = 0.0;
        return 0.0;
    } else if (n == 1) {
        *f = 1.0;
        return 1.0;
    } else {
        double a = 0.0, b = 1.0;
        for (int i = 2; i <= n; i++) {
            *f = a + b;
            a = b;
            b = *f;
        }
        return *f;
    }
}

double factoriald(int n, double *f) {
    if (n < 0) {
        printf("Error: cannot calculate factorial of a negative number\n");
        *f = -1.0;
        return -1.0;
    }
    *f = 1.0;
    for (int i = 1; i <= n; i++) {
        *f *= i;
    }
    return *f;
}

// Степени и корни (double)
double squared(double a, double *f) {
    *f = a * a;
    return *f;
}

double cubed(double a, double *f) {
    *f = a * a * a;
    return *f;
}

double powerd(double a, int b, double *f) {
    *f = 1.0;
    for (int i = 0; i < b; i++) {
        *f *= a;
    }
    return *f;
}

// Специальные последовательности и факториалы (float)
float fibonaccif(int n, float *f) {
    if (n <= 0) {
        *f = 0.0f;
        return 0.0f;
    } else if (n == 1) {
        *f = 1.0f;
        return 1.0f;
    } else {
        float a = 0.0f, b = 1.0f;
        for (int i = 2; i <= n; i++) {
            *f = a + b;
            a = b;
            b = *f;
        }
        return *f;
    }
}

float factorialf(int n, float *f) {
    if (n < 0) {
        printf("Error: cannot calculate factorial of a negative number\n");
        *f = -1.0f;
        return -1.0f;
    }
    *f = 1.0f;
    for (int i = 1; i <= n; i++) {
        *f *= i;
    }
    return *f;
}

// Дополнительные функции pow для double
double pow_doubled(double base, double exp, double *f) {
    *f = pow(base, exp);
    return *f;
}

// Корни и логарифмы (float)
float square_rootf(float a, float *f) {
    if (a < 0.0f) {
        printf("Error: cannot calculate square root of a negative number\n");
        *f = -1.0f;
        return -1.0f;
    }
    *f = sqrtf(a);
    return *f;
}

float cube_rootf(float a, float *f) {
    if (a < 0.0f) {
        printf("Error: cannot calculate cube root of a negative number\n");
        *f = -1.0f;
        return -1.0f;
    }
    *f = cbrtf(a);
    return *f;
}

float logarithmf(float a, float *f) {
    if (a <= 0.0f) {
        printf("Error: cannot calculate logarithm of a non-positive number\n");
        *f = -1.0f;
        return -1.0f;
    }
    *f = logf(a);
    return *f;
}

// Расширенные математические функции (float)
float pow_f(float base, float exp, float *f) {
    *f = powf(base, exp);
    return *f;
}

float sin_radf(float x, float *f) {
    *f = sinf(x);
    return *f;
}

float cos_radf(float x, float *f) {
    *f = cosf(x);
    return *f;
}

float tan_radf(float x, float *f) {
    *f = tanf(x);
    return *f;
}

float lnf(float x, float *f) {
    if (x <= 0.0f) {
        printf("Error: ln(x) for x <= 0\n");
        *f = -1.0f;
        return -1.0f;
    }
    *f = logf(x);
    return *f;
}

float log10_f(float x, float *f) {
    if (x <= 0.0f) {
        printf("Error: log10(x) for x <= 0\n");
        *f = -1.0f;
        return -1.0f;
    }
    *f = log10f(x);
    return *f;
}

float abs_f(float x, float *f) {
    *f = fabsf(x);
    return *f;
}

float exp_f(float x, float *f) {
    *f = expf(x);
    return *f;
}
void info() {
    printf("This is a math library with basic arithmetic operations, Fibonacci, factorial, powers, roots, logarithms, and trigonometric functions.\n");
    printf("Functions include:\n");
    printf("1. plus(a, b, *f)\n");
    printf("2. minus(a, b, *f)\n");
    printf("3. multiply(a, b, *f)\n");
    printf("4. divide(a, b, *f)\n");
    printf("5. fibonacci(n, *f)\n");
    printf("6. factorial(n, *f)\n");
    printf("7. square(a, *f)\n");
    printf("8. cube(a, *f)\n");
    printf("9. power(a, b, *f)\n");
    printf("10. square_root(a, *f)\n");
    printf("11. cube_root(a, *f)\n");
    printf("12. logarithm(a, *f)\n");
    printf("13. random(min, max, *f)\n");
    printf("For each data type (int, double, float) there are specific commands.\n");
    printf("To use int variables, append 'i' to the command (e.g., plusi(a, b, f))\n");
    printf("To use double variables, append 'd' to the command (e.g., plusd(a, b, f))\n");
    printf("To use float variables, append 'f' to the command (e.g., plusf(a, b, f))\n");
}
void info_ru() {
    printf("Это математическая библиотека с базовыми арифметическими операциями, Фибоначчи, факториалом, степенями, корнями, логарифмами и тригонометрическими функциями.\n");
    printf("Функции включают:\n");
    printf("1. plus(a, b, *f)\n");
    printf("2. minus(a, b, *f)\n");
    printf("3. multiply(a, b, *f)\n");
    printf("4. divide(a, b, *f)\n");
    printf("5. fibonacci(n, *f)\n");
    printf("6. factorial(n, *f)\n");
    printf("7. square(a, *f)\n");
    printf("8. cube(a, *f)\n");
    printf("9. power(a, b, *f)\n");
    printf("10. square_root(a, *f)\n");
    printf("11. cube_root(a, *f)\n");
    printf("12. logarithm(a, *f)\n");
    printf("13. random(min, max, *f)\n");
    printf("Для каждого типа данных (int, double, float) есть свои команды.\n");
    printf("Для использования int переменных пишите в конце команды i (пример - plusi(a, b, f))\n");
    printf("Для использования double переменных пишите в конце команды d (пример - plusd(a, b, f))\n");
    printf("Для использования float переменных пишите в конце команды f (пример - plusf(a, b, f))\n");
}

