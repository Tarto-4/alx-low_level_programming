#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    int file;
    ssize_t read_status, write_status;
    char *buffer;

    if (filename == NULL)
        return (0);

    file = open(filename, O_RDONLY);
    if (file == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL) {
        close(file);
        return (0);
    }

    read_status = read(file, buffer, letters);
    if (read_status == -1) {
        free(buffer);
        close(file);
        return (0);
    }

    write_status = write(STDOUT_FILENO, buffer, read_status);
    if (write_status == -1 || write_status != read_status) {
        free(buffer);
        close(file);
        return (0);
    }

    free(buffer);
    close(file);

    return (write_status);
}