//  Author:Zheng Jun
//  Date:2018/2/5
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <memory.h>

#define M1 "How are ya,Sweetie?"

void e11_12_02();

void e11_12_03();

void e11_12_04();

char *pr(char *string);

void e11_12_05();

void e11_12_07();

void e11_12_08();

char *func1(char *string, int i);

void e11_13_01();

int e11() {
//    e11_12_02();
//    e11_12_03();
//    e11_12_04();
//    e11_12_05();
//    e11_12_07();
//    e11_12_08();

//    e11_13_01();


    return 0;
}

void e11_13_01() {
    char * ptr = func1("两个黄鹂鸣翠柳一行白鹭上青天", 17);
    puts(ptr);
//    两个黄鹂鸣翠柳一行白鹭上青天
//    �W��        �W��
//
//    Process finished with exit code 0


}

char *func1(char *string, int i) {
    puts(string);
    char arr[i+1];
    for (int j = 0; j < i; ++j) {
        arr[j] = *(string+j);
    }
    arr[i]='\0';
    return arr;
}

void e11_12_08() {
    char str1[]="gawsie";
    char str2[]="bletonism";
    char *ps;
    for ( ps = str1; *ps != '\0'; ++ps) {
        if (*ps =='a'|| *ps =='e')
            putchar(*ps);
        else
            (*ps)--;
        putchar(*ps);
    }
    putchar('\n');

    int i = 0;
    while (str2[i]!='\0'){
        printf("%c",i%3?str2[i]:'*');
        ++i;
    }
//    faavrhee
//    *le*on*sm
//    Process finished with exit code 0
}

void e11_12_07() {
    char words[80];
    printf(M1);
    puts(M1);
//    How are ya,Sweetie?How are ya,Sweetie?
    const char *M2 = "Beat the clock";
    puts(M2);
    puts(M2+1);
//    Beat the clock
//    eat the clock
    strcpy(words,M2);
    strcat(words,"Win a toy");
    puts(words);
//    Beat the clockWin a toy
    words[4]='\0';
    puts(words);
//    Beat
    char *M3 = "chat";
    while (*M3) {
        puts(M3++);
    }
//    chat
//    hat
//    at
//    t
    puts(--M3);
    puts(--M3);
//    t
//    at
    M3=M1;
    puts(M3);
//    How are ya,Sweetie?
//    Process finished with exit code 0
}

void e11_12_05() {
    char *x = pr("Ho Ho Ho! ");
    puts(x);
//    Ho Ho Ho!  !oH oH oH
//    Ho Ho Ho!
//
//            Process finished with exit code 0
}

char *pr(char *string) {
    char *pc = string;
    while (*pc)
        putchar(*pc++);
    do {
        putchar(*--pc);
    } while (pc - string);
    putchar('\n');
    return pc;
}

void e11_12_04() {
    char goldwyn[40] = "art of it all ";
    char samuel[40] = "I read p";
    char *quote = "the way through";
    strcat(goldwyn, quote);
    strcat(samuel, goldwyn);
    puts(samuel);
//    I read part of it all the way through
//
//    Process finished with exit code 0
}

void e11_12_03() {
    char food[] = "Yummy!";
    char *ptr;
    ptr = food + strlen(food);
    while (--ptr >= food)
        putchar(*ptr);
//    !ymmuY
//    Process finished with exit code 0
}

void e11_12_02() {
    char note[] = "See you at the snack bar.";
    char *ptr;
    ptr = note;
    puts(ptr);
    puts(++ptr);
    note[7] = '\0';
    puts(note);
    puts(++ptr);
//    See you at the snack bar.
//            ee you at the snack bar.
//            See you
//    e you
//
//    Process finished with exit code 0
}