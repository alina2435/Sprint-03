void mx_printchar(char c);

void mx_str_separate(const char *str, char del){
    int n = 0;
    while (str[n] != '\0')
    {
        if (str[n] == del && str[n - 1] != del)
            mx_printchar('\n');
        else if (str[n] == del && str[n - 1] == del)
            mx_printchar('\0');
        else
            mx_printchar(str[n]);
        n++;
    }
}
