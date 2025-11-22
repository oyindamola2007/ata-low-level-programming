#include <stdarg.h>
#include <unistd.h>


static void print_char(char c)
{
    write(1, &c, 1);
}


static void print_string(const char *s)
{
    int i = 0;

    if (s == NULL)
        s = "(null)";

    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}


static void print_int(int n)
{
    char buffer[12];
    int i = 0, neg = 0;
    long num = n;

    if (num == 0)
    {
        print_char('0');
        return;
    }

    if (num < 0)
    {
        neg = 1;
        num = -num;
    }

    while (num > 0)
    {
        buffer[i++] = (num % 10) + '0';
        num /= 10;
    }

    if (neg)
        buffer[i++] = '-';

    while (--i >= 0)
        print_char(buffer[i]);
}


void _printf(const char *format, ...)
{
    va_list args;
    int i = 0;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
                print_char((char)va_arg(args, int));
            else if (format[i] == 'i')
                print_int(va_arg(args, int));
            else if (format[i] == 's')
                print_string(va_arg(args, char *));
            else
            {
                print_char('%');
                print_char(format[i]);
            }
        }
        else
        {
            print_char(format[i]);
        }
        i++;
    }

    va_end(args);
}

