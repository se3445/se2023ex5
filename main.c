#include <stdio.h>
#include <string.h>

int main(void) {
  char str[] = "hello";
  printf("文字列: %s\n", str);
  printf("長さ: %lu\n", strlen(str));
  return 0;
}
