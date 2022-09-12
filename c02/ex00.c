int    main(void)
{
    char    *src;
    char    dest[12];

    src = "Hello World";
    printf("%s\n", src);
    strcpy(dest, src);
    printf("%s\n", dest);
    ft_strcpy(dest, src);
    return (0);
}

