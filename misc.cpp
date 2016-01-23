#include <string>
#include <vector>
#include "bmlrp.h"
#include "misc.h"

string Binary(Addr a, char n, bool format) {
    Addr bit = (Addr(-1) >> 1) + 1;

    string res;
    for (char i = 0; i < n; ++i) {
        if (format && (i != 0) && (i % 4 == 0)) {
            res += ' ';
        }
        if (a & bit) {
            res += '1';
        } else {
            res += '0';
        }

        a <<= 1;
    }

    return res;
}