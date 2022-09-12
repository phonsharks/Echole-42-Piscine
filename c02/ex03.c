
int    main(void)
{
    char    numeric[] = "0123456789";
    char    *p_num;

    p_num = numeric;

    char    special[] = "0123456789_A";
    char    *p_spe;

    p_spe = special;
    printf("%d" ,ft_str_is_numeric(p_num));
    return (0);
}
