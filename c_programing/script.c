#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

    FILE* fd;
    fd = fopen("/home/simonlopez/c_Programming/MyFile.c", "wt");
    fputs("#include <stdio.h>\n", fd);
    fputs("#include <math.h>\n", fd);
    fputs("int main(){\n", fd);
    fputs(   "int high = 20;\n", fd);
    fputs(   "int base = 10;\n", fd);
    fputs(   "int result = (high * base);\n", fd);
    fputs(   "printf(\"%i\",result);", fd);
    fputs("}", fd);
    fclose(fd);
    printf("proceso completado");
    return 0;



}
