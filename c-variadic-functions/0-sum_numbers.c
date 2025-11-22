#include <stdarg.h>
#include <unistd.h>


void print_string(const char *s)
{
    if (!s)
        s = "(null)";
    while (*s)
    {
        write(1, s, 1);
        s++;
    }
}


void print_int(int n)
{
    char buffer[12];
    int i = 0, sign = 0;
    unsigned int num;

    if (n < 0)
    {
        sign = 1;
        num = -n;
    }
    else
    {
        num = n;
    }

   
    do {
        buffer[i++] = (num % 10) + '0';
        num /= 10;
    } while (num > 0);

    if (sign)
        buffer[i++] = '-';

    
    while (i--)
        write(1, &buffer[i], 1);
}

void _printf(const char *format, ...)
{
    va_list args;
    int i = 0;

    if (!format)
        return;

    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                {
                    char c = (char)va_arg(args, int);
                    write(1, &c, 1);
                    break;
                }
                case 'i':
                case 'd':
                    print_int(va_arg(args, int));
                    break;

                case 's':
                    print_string(va_arg(args, char *));
                    break;

                default:
                 
                    write(1, &format[i], 1);
            }
        }
        else
        {
            write(1, &format[i], 1);
        }
        i++;
    }

    va_end(args);
}

