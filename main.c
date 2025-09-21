#include <stdio.h>

int main(int argc, char *argv[]) 
{ 
    if (argc < 2)
    {
        printf("%s Needs a filename as argument\n", argv[0]);
        return 1;
    }
    FILE *file = fopen("data.bin", "rb");
    if (file == NULL) 
    {
        printf("Could not open data.bin for reading.\n");
        return 1;
    }
    fclose(file);
    return 0; 
}