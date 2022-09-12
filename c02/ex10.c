
int    main(void)
{
    char src[] = "World!";
    char dest[] = "Hello ";
    printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}

