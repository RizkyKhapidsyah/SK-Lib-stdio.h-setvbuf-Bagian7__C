#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    char buf[1024];
    FILE* stream1, * stream2;

    if (fopen_s(&stream1, "data1", "a") == 0 && fopen_s(&stream2, "data2", "w") == 0) {
        if (setvbuf(stream1, buf, _IOFBF, sizeof(buf)) != 0) {
            printf("Incorrect type or size of buffer for stream1\n");
        } else {
            printf("'stream1' now has a buffer of 1024 bytes\n");
        }
            
        if (setvbuf(stream2, NULL, _IONBF, 0) != 0) {
            printf("Incorrect type or size of buffer for stream2\n");
        } else {
            printf("'stream2' now has no buffer\n");
        }
            
        _fcloseall();
    }

    _getch();
    return 0;
}