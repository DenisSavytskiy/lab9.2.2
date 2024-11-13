#include <stdio.h>
#include <conio.h>
#include <stdarg.h>

// Макроси для перевірки властивостей чисел
#define IS_EVEN(x) ((x) % 2 == 0)
#define IS_POSITIVE(x) ((x) > 0)

// Макроси для виведення повідомлень
#define PRINT_EVEN_STATUS(x) printf("number %d %s\n", x, IS_EVEN(x) ? "even" : "odd")
#define PRINT_POSITIVE_STATUS(x) printf("number %d %s\n", x, IS_POSITIVE(x) ? "positive" : "not positive")

// Визначення для умовної компіляції
#define CHECK_EVEN 1
#define CHECK_POSITIVE 0'

float checkNumbers(int first, ...);

int main(void) {
    puts("Checking numbers for parity and positivity");

    // Виклик з 3 числами
    printf("\nChecking the numbers (2, 3, 4, -1):\n");
    checkNumbers(2, 3, 4, -1);

    // Виклик з 4 числами
    printf("\nChecking the numbers (5, 7, 9, 12, -1):\n");
    checkNumbers(5, 7, 9, 12, -1);

    // Виклик тільки з термінатором
    printf("\nChecking the numbers (-1):\n");
    checkNumbers(-1);

    while (!_kbhit());
    return 0;
}

float checkNumbers(int first, ...) {
    va_list marker;
    va_start(marker, first);

    int i = first;

    while (i != -1) {
#if CHECK_EVEN
        PRINT_EVEN_STATUS(i);
#endif

#if CHECK_POSITIVE
        PRINT_POSITIVE_STATUS(i);
#endif

        i = va_arg(marker, int);
    }

    va_end(marker);
    return 0;
}