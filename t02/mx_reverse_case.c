#include <stdbool.h>

int mx_tolower(int c);
int mx_toupper(int c);
bool mx_islower(int c);
bool mx_isupper(int c);

void mx_reverse_case(char *c) {
    if (!c) return;

    while (*c) {
        if (mx_islower(*c)) {
            *c = mx_toupper(*c);
        } else if (mx_isupper(*c)) {
            *c = mx_tolower(*c);
        }
        c++;
    }
}
