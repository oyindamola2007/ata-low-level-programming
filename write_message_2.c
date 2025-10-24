#include <unistd.h>   
#include <fcntl.h>    
#include <string.h>   
#include <stdlib.h>   

int main() {
    const char *message = "Coding in C is powerful!\n";

       if (write(STDOUT_FILENO, message, strlen(message)) == -1) {
        perror("write to stdout failed");
        exit(1);
    }

    
    int fd = open("write.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open failed");
        exit(1);
    }

    
    if (write(fd, message, strlen(message)) == -1) {
        perror("write to file failed");
        close(fd);
        exit(1);
    }

    
    close(fd);

    return 0;
}
