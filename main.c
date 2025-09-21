#include <stdio.h>

int main(int argc, char *argv[]) 
{ 
    if (argc < 2)
    {
        printf("%s Needs a filename as argument\n", argv[0]);
        return 1;
    }
    return 0; 
}
