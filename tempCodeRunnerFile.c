int c, i;
    int letters[26];
    for (i = 0; i <26; ++i) {
        letters[i] = 0;
    }
    
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            letters[c - 'a']++;
        } else if(c >= 'A' && c <= 'Z') {
            letters[c - 'A']++;
        }
    }

    for (i = 0; i < 26; i++) {
        int bars = letters[i];
        for (int j = 0; j < bars; j++) {
            putchar('-');
        }
        putchar('\n');
    }