#include <stdio.h>

int fahtoCel(int cel) {
    return (cel * 9) / 5 + 32;
}

int main() {
// E1-6. 
// E1-7.
// EOF is neither 0 or 1 it's a neg. int most system defined it as -1
    // int c;
    // while ((c = getchar()) != EOF) {
    //     printf("\nread: %d\n", c);
    //     putchar(c);
    // }
    // printf("EOF = %d\n", c);

// E1-8.
    // int c, tab, newLine, blank;
    // tab = newLine = blank = 0;
    // while ((c = getchar()) != EOF) {
    //     if(c == ' '){
    //         blank++;
    //     } else if(c == '\n') {
    //         newLine++;
    //     } else if(c == '\t') {
    //         tab++;
    //     }
    // }
    // printf("tab: %d; newLine: %d; space: %d\n", tab, newLine, blank);

// E1-9.
    // int c;
    // int prevB;
    // while ((c = getchar()) != EOF) {
    //     if (c == ' ') {
    //         if (prevB == 0) {
    //             putchar(' ');
    //             prevB = 1;
    //         }
    //     } else {
    //         prevB = 0;
    //         putchar(c);
    //     }
    // }

// E1.10
    // int c;
    // while ((c = getchar()) != EOF) {
    //     if (c == '\\') {
    //         printf("\\\\");
    //     } else if(c == '\t') {
    //         printf("\\t");
    //     } else if (c == '\b') {
    //         printf("\\b");
    //     } else {
    //         putchar(c);
    //     }
    // }

// E1.12
    // #define IN 1
    // #define OUT 0
    // int c, state = OUT;
    
    // while ((c = getchar()) != EOF) {
    //     if (c == '\n' || c == ' ' || c == '\t'){
    //         if (state == IN) {
    //             putchar('\n');
    //         }
    //         state = OUT;
    //     } else {
    //         state = IN;
    //         putchar(c);
    //     }
    // }

// E1.13
    // #define IN 1
    // #define OUT 0
    // int c, state = OUT;
    
    // while ((c = getchar()) != EOF) {
    //     if (c == '\n' || c == ' ' || c == '\t'){
    //         if (state == IN) {
    //             putchar('\n');
    //         }
    //         state = OUT;
    //     } else {
    //         state = IN;
    //         putchar('-');
    //     }
    // }

// E1.14
 
    // int c, i;
    // int letters[26];
    // for (i = 0; i <26; ++i) {
    //     letters[i] = 0;
    // }
    
    // while ((c = getchar()) != EOF) {
    //     if (c >= 'a' && c <= 'z') {
    //         letters[c - 'a']++;
    //     } else if(c >= 'A' && c <= 'Z') {
    //         letters[c - 'A']++;
    //     }
    // }

    // for (i = 0; i < 26; i++) {
    //     int bars = letters[i]+1;
    //     for (int j = 0; j < bars; j++) {
    //         putchar('-');
    //     }
    //     putchar('\n');
    // }

// E1.15
    // int cel = fahtoCel(100);
    // printf("temp in fahr = %d\n", cel);
    // return 0;




}
// E1.16
/* getline: read a line into s, return length */
int getline(char s[],int lim)
{
    int c, i;
    i = 0;
    while ((c=getchar())!=EOF && c!='\n') {
        if (i < lim-1) {
            s[i] = c;
        }
        i++;
    }
    if (c == '\n') {
        if (i < lim-1) {
            s[i] = c;
        }
        i++;
    }
    if (i < lim) {
        s[i] = '\0';
    } else {
        s[lim]-1 = '\n';
    }
    s[i] = '\0';
    return i;
}
