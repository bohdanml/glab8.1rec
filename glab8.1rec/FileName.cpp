#include <iostream>
#include <cstring>

int Count(const char* str, int i) {
    if (i < 1 || i >= strlen(str) - 1) {
        return 0;
    }

    return (str[i - 1] == 'n' && str[i + 1] == 'o') + Count(str, i + 1);
}

char* Change(const char* str, char* tmp, char* t, int i) {
    if (i >= strlen(str)) {
        return tmp;
    }

    if (i < strlen(str) - 2 && str[i] == 'n' && str[i + 1] == 'o') {
        strncat_s(t, strlen(str) * 2 + 1 - strlen(t), "**", 2);
        t += 2;
        return Change(str, tmp, t, i + 2);
    }

    *t++ = str[i];
    *t = '\0';
    return Change(str, tmp, t, i + 1);
}

int main() {
    const int maxInputSize = 100;
    char input[maxInputSize];

    std::cout << "Enter string (word): " << std::endl;
    std::cin.getline(input, maxInputSize);
    char* dest = new char[strlen(input) * 2 + 1];
    dest[0] = '\0';
    char* t = dest;
    dest = Change(input, dest, t, 0);
    std::cout << "Modified string (result): " << dest << std::endl;



    return 0;
}
