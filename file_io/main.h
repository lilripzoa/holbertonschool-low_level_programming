#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
void copy_file(const char *file_from, const char *file_to);
void print_error(char *message, int exit_code);

#endif
