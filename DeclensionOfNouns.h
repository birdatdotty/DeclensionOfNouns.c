// from https://punbb.info/t-286.html#p577

typedef struct DeclensionOfNouns_struct
{
  const char *form1, *form2, *form3;
} DeclensionOfNouns;

const char *DeclensionOfNouns_get(const DeclensionOfNouns* self, int count);
DeclensionOfNouns* DeclensionOfNouns_new(const char *form1,const char *form2,const char *form3);
