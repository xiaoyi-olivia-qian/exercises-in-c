#include <stdio.h>

void detab(int tabstop);
void entab(int tabstop);


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

// E1.20
    // detab(4);

// E1.21
    // entab(8);

// E1.22
    fold(20, 8);
return 0;
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
        s[lim-1] = '\n';
    }
    s[i] = '\0';
    return i;
}

// E1.17
// printout lines > 80 chars
void printline(char s[], int lim)
{
    int i, length;
    length = getline(s, lim);
    if (length > 80) {
        for (i = 0; i < length; i++) {
            putchar(s[i]);
        }
    }
}

// E1.18
// removetrailing: remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
int removetrailing(char s[], int len) 
{
    int i = len - 1;

    if (i >= 0 && s[i] == '\n') {
        i--;
    }
    while (i >= 0 && s[i] == ' ' || s[i] == '\t') {
        i--;
    }
    s[i+1] = '\0';
    return i+1;
}

// E1.19
// reverses: reverse character string s
void reverses(char s[]) 
{
    int i = 0, j = 0;
    char tmp;
    
    while (s[j] != '\0') {
        j++;
    }
    j--;
    if (j >= 0 && s[j] == '\n') {
        j--;
    }

    while (i < j) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
}

// E1.20
// program that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
void detab(int tabstop)
{
    int c;
    int col = 0;

    while ((c=getchar()) != EOF) {
        if(c == '\t') {
            int spaces = tabstop - (col % tabstop);
            while(spaces > 0) {
                putchar(' ');
                col++;
                spaces--;
            }
        } else if(c == '\n') {
            putchar('\n');
            col = 0;
        } else {
            putchar(c);
            col++;
        }
    }
}

//  E1.21
void entab(int tabstop) 
{
    int c;
    int col = 0;
    int nspaces = 0;
    
    while ((c=getchar()) != EOF) {
        if (c == ' ') {
            nspaces++;
            col++;

            if (col % tabstop == 0) {
                putchar('\t');
                nspaces = 0;
            }
        } else {
            while (nspaces > 0) {
                putchar(' ');
                nspaces--;
            }
            putchar(c);
            
            if (c == '\n') {
                col = 0;
            } else if (c == '\t') {
                col = col + tabstop - (col % tabstop);
            } else {
                col++;
            }
        }
    }

    while (nspaces > 0) {
        putchar(' ');
    }
}

// E1.22
void fold(int n, int tabstop)
{
    int c = 0;
    int col = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n') {
            putchar('\n');
            col = 0;
        } else if(c == '\t') {
            int nxt = col + tabstop - (col%tabstop);
            if (nxt > n) {
                putchar('\n');
                col = 0;
            } else {
                putchar('\t');
                col = col + tabstop - (col%tabstop);
            }
        } else if (c == ' ') {
            if (col >= n){
                putchar('\n');
                col = 0;
            } else {
                putchar(' ');
                col++;
            }
        } else {
            if (col >= n) {
                putchar('\n');
                col = 0;
            } else {
                col++;
            }
            putchar(c);
        }
        
    }
}