#include <iostream>
#include <string.h>
using namespace std;

char* stringReplace(const char* haystack, const char* needle, const char* replace) {
    int needle_len = strlen(needle);
    int replace_len = strlen(replace);
    int haystack_len = strlen(haystack);
    int newtext_len = 0;
    int count = 0;
    for (int i = 0; i <= haystack_len - needle_len; i++) {
        if (strncmp(haystack + i, needle, needle_len) == 0) {
            count++;
            newtext_len += replace_len - needle_len;
            i += needle_len - 1;
        }
    }
    newtext_len += haystack_len;
    char* newtext = new char[newtext_len + 1];
    int j = 0;
    for (int i = 0; i < haystack_len; i++) {
        if (strncmp(haystack + i, needle, needle_len) == 0) {
            for (int k = 0; k < replace_len; k++) {
                newtext[j++] = replace[k];
            }
            i += needle_len - 1;
        }
        else {
            newtext[j++] = haystack[i];
        }
    }
    newtext[newtext_len] = '\0';
    return newtext;
}

int main() {
    char c1[100];
    char ndl[] = " ";
    char rpl[] = "<SPACE>";
    cin.getline(c1, 100);
    char* result = stringReplace(c1, ndl, rpl);
    cout << result << endl;
    delete[] result;
    return 0;
}