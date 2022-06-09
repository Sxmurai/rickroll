#include <stdlib.h>

int main() {
    #ifdef _WIN32
        system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
        return 0;
    #endif

    system("open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    return 0;
}
