#include <stdio.h>


void print_square(int size) {
if (size <= 0) return;
for (int r = 0; r < size; ++r) {
for (int c = 0; c < size; ++c) putchar('*');
putchar('\n');
}
}


void print_right_triangle(int height) {
if (height <= 0) return;
for (int r = 1; r <= height; ++r) {
for (int c = 0; c < r; ++c) putchar('*');
putchar('\n');
}
}


void print_diamond(int half) {
/* Diamond with vertical radius `half`. Total height will be 2*half+1 */
if (half < 0) return;
/* Top half (including middle line) */
for (int r = 0; r <= half; ++r) {
for (int s = 0; s < half - r; ++s) putchar(' ');
for (int a = 0; a < 2 * r + 1; ++a) putchar('*');
putchar('\n');
}
/* Bottom half */
for (int r = half - 1; r >= 0; --r) {
for (int s = 0; s < half - r; ++s) putchar(' ');
for (int a = 0; a < 2 * r + 1; ++a) putchar('*');
putchar('\n');
}
}


int main(void) {
puts("ASCII Art - examples\n");


puts("Square (6x6):");
print_square(6);
putchar('\n');


puts("Right triangle (height 6):");
print_right_triangle(6);
putchar('\n');


puts("Diamond (half = 4):");
print_diamond(4);
putchar('\n');


return 0;
}
