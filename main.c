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

    // Skip the first 40 bytes (preamble)
    fseek(file, 40, SEEK_SET);

    // Read the first record: Name[7B], id[2B], grade[1B]
    char name[7];
    unsigned char id[2];
    unsigned char grade;

    fread(name, 1, 7, file); // skip name
    fread(id, 1, 2, file);   // read id
    fread(&grade, 1, 1, file); // read grade

    // Print id and grade
    printf("%u %u\n", (id[0] << 8) | id[1], grade);

    fclose(file);
    return 0;
}