int     count_xdigits(unsigned int dec)
{
        int     counter;

        counter = 0;
        while (dec)
        {
                dec /= 16;
                counter++;
        }
        return (counter);
}
int     ft_printf_heX(unsigned int dec)
{
        char    *hex_num;
        int     temp;
        int     digits;

        digits = count_xdigits(dec);
        hex_num = malloc(sizeof(char) * (digits + 1));
        if (!hex_num)
                return (0);
        hex_num[digits] = '\0';
        while (dec)
        {
                temp = dec % 16;
                if (temp < 10)
                        hex_num[--digits] = temp + '0';
                else
                        hex_num[--digits] = temp + 55;
                dec /= 16;
        }
        ft_putstr_fd(hex_num, 1);
        free(hex_num);
        return (digits);
}

int     main(void)
{
        ft_printf_hex(12312);
}
