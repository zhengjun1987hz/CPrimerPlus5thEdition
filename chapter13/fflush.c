//  Author:Zheng Jun
//  Date:2018/2/10 22:03
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

int ff() {
    FILE *output = fopen("fflush", "wb");
//    FILE *read = fopen("words", "r");
//    int i;
//    while ((i = getc(read)) != 'C')
//        putc(i, output);
//    if (read != NULL && output != NULL) {
//        puts("flush!");
//        fflush(read);
//    }
//    fclose(read);
//    fflush(output);
    char cs[128];
    for (int i = 0; i < 128; ++i) {
        cs[i]=(char)i;
    }
    fwrite(cs, sizeof(char),128,output);
    fclose(output);
    puts("Done!");
    return 0;
}
// 
//
// !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~