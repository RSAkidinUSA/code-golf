main(int c, char **v){
    int i, j, a = atoi(v[1]);
    for (i = 1; i <= a; i++) {
        for (j = 0; j < a + i - 1; j++)
            putchar((j >= a - i) ? '*' : ' ');
        putchar('\n');
    }
    printf("%*s*\n", a - 1, "");
}
