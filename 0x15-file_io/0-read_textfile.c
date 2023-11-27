#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return 0;

    FILE *file = fopen(filename, "r");
    if (file == NULL)
        return 0;

    char *buffer = malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL)
    {
        fclose(file);
        return 0;
    }

    ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);
    if (bytes_read == -1)
    {
        fclose(file);
        free(buffer);
        return 0;
    }

    ssize_t bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
    if (bytes_written != bytes_read)
    {
        fclose(file);
        free(buffer);
        return 0;
    }

    fclose(file);
    free(buffer);

    return bytes_written;
}
