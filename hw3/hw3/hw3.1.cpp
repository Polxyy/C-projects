#include <iostream>
#include <string.h>
using namespace std;

char* stringReplace(const char* haystack, const char* needle, const char* replace) {
    int n = strlen(haystack);
    int m = strlen(needle);
    int r = strlen(replace);

    // count the number of occurrences of needle in haystack
    int count = 0;
    for (int i = 0; i <= n - m; i++) {
        if (strncmp(haystack + i, needle, m) == 0) {
            count++;
        }
    }

    // allocate memory for the new string
    int len = n + count * (r - m);
    char* newtext = new char[len + 1];

    // replace all occurrences of needle in haystack
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (strncmp(haystack + i, needle, m) == 0) {
            for (int j = 0; j < r; j++) {
                newtext[k++] = replace[j];
            }
            i += m - 1;
        }
        else {
            newtext[k++] = haystack[i];
        }
    }
    newtext[k] = '\0';

    return newtext;
}

int main() {
    char c1[100];
    char ndl[] = " ";
    char rpl[] = "<space>";
    cin >> c1;
    cout << stringReplace(c1, ndl, rpl) << endl;
    return 0;
}