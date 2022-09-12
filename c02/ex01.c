int    main(void)
{
    char    *src;
    char    dest[20];

    src = "Hello World";
    printf("%s\n", src);
    strncpy(dest, src, 9);
    ft_strncpy(dest, src, 9);
}

