// from https://punbb.info/t-286.html#p577
#include "DeclensionOfNouns.h"

#include <stdlib.h>

const char *DeclensionOfNouns_get(const DeclensionOfNouns* self, int count)
{
  int rest = count % 10;
  int number = count % 100;
  if (rest == 1 && number != 11)
    return self->form2;
  if (((rest == 2) || (rest == 3) || (rest == 4)) && !((rest == 12) || (rest == 13) || (rest == 14)))
    return self->form1;

  return self->form3;
}
DeclensionOfNouns* DeclensionOfNouns_new(const char *form1,const char *form2,const char *form3)
{
  DeclensionOfNouns* self = (DeclensionOfNouns*) malloc(sizeof(DeclensionOfNouns));
  self->form1 = form1;
  self->form2 = form2;
  self->form3 = form3;
  
  return self;
}
