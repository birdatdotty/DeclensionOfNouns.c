#include <stdio.h>

#include "DeclensionOfNouns.h"

int main()
{
  DeclensionOfNouns *apple = DeclensionOfNouns_new("яблока", "яблоко", "яблок");
  printf("48 %s\n", DeclensionOfNouns_get(apple, 48));

  return 0;
}
