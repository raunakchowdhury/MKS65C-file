# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

int main() {
  int readfile = open("./sample.txt", O_RDWR);
  printf("Read file: %d\n", readfile);

  char* to_write = "Atom is the best religion";
  write(readfile, to_write, 25);

  int closed = close(readfile);
  printf("File closed. Status: %d\n", closed );

  readfile = open("./sample.txt", O_RDONLY);
  char text[40];
  read(readfile, text, 39);
  printf("Printing text: %s\n", text);

  return 0;
}
