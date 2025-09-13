#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Data Type Sizes and Ranges in C\n\n");


    printf("char:\n");
    printf(" Size: %zu byte(s)\n", sizeof(char));
    printf(" Range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);


    printf("int:\n");
    printf(" Size: %zu byte(s)\n", sizeof(int));
    printf(" Range: %d to %d\n\n", INT_MIN, INT_MAX);


    printf("short:\n");
    printf(" Size: %zu byte(s)\n", sizeof(short));
    printf(" Range: %d to %d\n\n", SHRT_MIN, SHRT_MAX);


    printf("long:\n");
    printf(" Size: %zu byte(s)\n", sizeof(long));
    printf(" Range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);


    printf("float:\n");
    printf(" Size: %zu byte(s)\n", sizeof(float));
    printf(" Range: %.3e to %.3e\n\n", FLT_MIN, FLT_MAX);


    printf("double:\n");
    printf(" Size: %zu byte(s)\n", sizeof(double));
    printf(" Range: %.3e to %.3e\n\n", DBL_MIN, DBL_MAX);


    printf("long double:\n");
    printf(" Size: %zu byte(s)\n", sizeof(long double));
    printf(" Range: %.3Le to %.3Le\n\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
