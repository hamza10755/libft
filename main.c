#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include "libft.h"

// Helper function for ft_striteri
void add_index_to_char(unsigned int i, char *c) {
    *c += i;
}

// Helper function for ft_strmapi
char add_index_to_char_mapi(unsigned int i, char c) {
    return c + i;
}

int main(void)
{
    // Testing ft_isalpha
    printf("Testing ft_isalpha:\n");
    printf("isalpha('A') = %d\n", isalpha('A'));
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("isalpha('1') = %d\n", isalpha('1'));
    printf("ft_isalpha('1') = %d\n\n", ft_isalpha('1'));

    // Testing ft_isalnum
    printf("Testing ft_isalnum:\n");
    printf("isalnum('A') = %d\n", isalnum('A'));
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));
    printf("isalnum('1') = %d\n", isalnum('1'));
    printf("ft_isalnum('1') = %d\n", ft_isalnum('1'));
    printf("isalnum('$') = %d\n", isalnum('$'));
    printf("ft_isalnum('$') = %d\n\n", ft_isalnum('$'));

    // Testing ft_isascii
    printf("Testing ft_isascii:\n");
    printf("isascii('A') = %d\n", isascii('A'));
    printf("ft_isascii('A') = %d\n", ft_isascii('A'));
    printf("isascii(128) = %d\n", isascii(128));
    printf("ft_isascii(128) = %d\n\n", ft_isascii(128));

    // Testing ft_isdigit
    printf("Testing ft_isdigit:\n");
    printf("isdigit('3') = %d\n", isdigit('3'));
    printf("ft_isdigit('3') = %d\n", ft_isdigit('3'));
    printf("isdigit('A') = %d\n", isdigit('A'));
    printf("ft_isdigit('A') = %d\n\n", ft_isdigit('A'));

    // Testing ft_isprint
    printf("Testing ft_isprint:\n");
    printf("isprint(' ') = %d\n", isprint(' '));
    printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
    printf("isprint('\n') = %d\n", isprint('\n'));
    printf("ft_isprint('\n') = %d\n\n", ft_isprint('\n'));

    // Testing ft_strlen
    printf("Testing ft_strlen:\n");
    printf("strlen(\"Hello\") = %zu\n", strlen("Hello"));
    printf("ft_strlen(\"Hello\") = %zu\n\n", ft_strlen("Hello"));

    // Testing ft_memset
    printf("Testing ft_memset:\n");
    char str1[] = "Hello World";
    memset(str1, 'x', 5);
    printf("memset(str1, 'x', 5) = %s\n", str1);
    ft_memset(str1, 'o', 5);
    printf("ft_memset(str1, 'o', 5) = %s\n\n", str1);

    // Testing ft_strchr
    printf("Testing ft_strchr:\n");
    printf("strchr(\"Hello\", 'o') = %s\n", strchr("Hello", 'o'));
    printf("ft_strchr(\"Hello\", 'o') = %s\n\n", ft_strchr("Hello", 'o'));

    // Testing ft_atoi
    printf("Testing ft_atoi:\n");
    printf("atoi(\"42\") = %d\n", atoi("42"));
    printf("ft_atoi(\"42\") = %d\n\n", ft_atoi("42"));

    // Testing ft_toupper
    printf("Testing ft_toupper:\n");
    printf("toupper('a') = %c\n", toupper('a'));
    printf("ft_toupper('a') = %c\n\n", ft_toupper('a'));

    // Testing ft_tolower
    printf("Testing ft_tolower:\n");
    printf("tolower('A') = %c\n", tolower('A'));
    printf("ft_tolower('A') = %c\n\n", ft_tolower('A'));

    // Testing ft_bzero
    printf("Testing ft_bzero:\n");
    char str2[] = "Hello World";
    bzero(str2, 5);
    printf("bzero(str2, 5) = %s\n", str2);
    ft_bzero(str2, 5);
    printf("ft_bzero(str2, 5) = %s\n\n", str2);

    // Testing ft_strlcpy
    printf("Testing ft_strlcpy:\n");
    char dst1[20];
    char src1[] = "Hello World";
    printf("strlcpy(dst1, \"Hello World\", 6) = %zu\n", strlcpy(dst1, src1, sizeof(dst1)));
    printf("dst1 = %s\n", dst1);
    printf("ft_strlcpy(dst1, \"Hello World\", 6) = %zu\n", ft_strlcpy(dst1, src1, sizeof(dst1)));
    printf("dst1 = %s\n\n", dst1);

    // Testing ft_strlcat
    printf("Testing ft_strlcat:\n");
    char dst2[20] = "Hello";
    char src2[] = " World";
    printf("strlcat(dst2, \" World\", 20) = %zu\n", strlcat(dst2, src2, sizeof(dst2)));
    printf("dst2 = %s\n", dst2);
    printf("ft_strlcat(dst2, \" World\", 20) = %zu\n", ft_strlcat(dst2, src2, sizeof(dst2)));
    printf("dst2 = %s\n\n", dst2);

    // Testing ft_strrchr
    printf("Testing ft_strrchr:\n");
    printf("strrchr(\"Hello World\", 'o') = %s\n", strrchr("Hello World", 'o'));
    printf("ft_strrchr(\"Hello World\", 'o') = %s\n\n", ft_strrchr("Hello World", 'o'));

    // Testing ft_strncmp
    printf("Testing ft_strncmp:\n");
    printf("strncmp(\"Hello\", \"Hello\", 5) = %d\n", strncmp("Hello", "Hello", 5));
    printf("ft_strncmp(\"Hello\", \"Hello\", 5) = %d\n", ft_strncmp("Hello", "Hello", 5));
    printf("strncmp(\"Hello\", \"Hellz\", 5) = %d\n", strncmp("Hello", "Hellz", 5));
    printf("ft_strncmp(\"Hello\", \"Hellz\", 5) = %d\n\n", ft_strncmp("Hello", "Hellz", 5));

    // Testing ft_memcpy
    printf("Testing ft_memcpy:\n");
    char dst3[20];
    char src3[] = "Copy this";
    memcpy(dst3, src3, 9);
    dst3[9] = '\0';
    printf("memcpy(dst3, src3, 9) = %s\n", dst3);
    ft_memcpy(dst3, src3, 9);
    dst3[9] = '\0';
    printf("ft_memcpy(dst3, src3, 9) = %s\n\n", dst3);

    // Testing ft_memchr
    printf("Testing ft_memchr:\n");
    char *chr1 = memchr("Hello", 'l', 5);
    char *chr2 = ft_memchr("Hello", 'l', 5);
    printf("memchr(\"Hello\", 'l', 5) = %s\n", chr1 ? chr1 : "NULL");
    printf("ft_memchr(\"Hello\", 'l', 5) = %s\n\n", chr2 ? chr2 : "NULL");

    // Testing ft_memcmp
    printf("Testing ft_memcmp:\n");
    printf("memcmp(\"Hello\", \"Hellx\", 5) = %d\n", memcmp("Hello", "Hellx", 5));
    printf("ft_memcmp(\"Hello\", \"Hellx\", 5) = %d\n", ft_memcmp("Hello", "Hellx", 5));
    printf("memcmp(\"Hello\", \"Hello\", 5) = %d\n", memcmp("Hello", "Hello", 5));
    printf("ft_memcmp(\"Hello\", \"Hello\", 5) = %d\n\n", ft_memcmp("Hello", "Hello", 5));

    // Testing ft_strdup
    printf("Testing ft_strdup:\n");
    char *dup1 = strdup("Hello");
    char *dup2 = ft_strdup("Hello");
    printf("strdup(\"Hello\") = %s\n", dup1);
    printf("ft_strdup(\"Hello\") = %s\n", dup2);
    free(dup1);
    free(dup2);
    
    // Testing ft_calloc
    printf("Testing ft_calloc:\n");
    char *calloc1 = (char *)calloc(10, sizeof(char));
    char *calloc2 = (char *)ft_calloc(10, sizeof(char));
    printf("calloc(10, sizeof(char)) = %p\n", (void *)calloc1);
    printf("ft_calloc(10, sizeof(char)) = %p\n", (void *)calloc2);
    free(calloc1);
    free(calloc2);

    // Testing ft_strnstr
    printf("Testing ft_strnstr:\n");
    printf("strnstr(\"Hello World\", \"World\", 11) = %s\n", strnstr("Hello World", "World", 11));
    printf("ft_strnstr(\"Hello World\", \"World\", 11) = %s\n\n", ft_strnstr("Hello World", "World", 11));

    // Testing ft_substr
    printf("Testing ft_substr:\n");
    char *sub1 = ft_substr("Hello World", 6, 5);
    printf("ft_substr(\"Hello World\", 6, 5) = %s\n", sub1);
    free(sub1);

    // Testing ft_strjoin
    printf("Testing ft_strjoin:\n");
    char *join1 = ft_strjoin("Hello", " World");
    printf("ft_strjoin(\"Hello\", \" World\") = %s\n", join1);
    free(join1);

    // Testing ft_strtrim
    printf("Testing ft_strtrim:\n");
    char *trimmed1 = ft_strtrim("   Hello World   ", " ");
    printf("ft_strtrim(\"   Hello World   \", \" \") = %s\n", trimmed1);
    free(trimmed1);

    // Testing ft_itoa
    printf("Testing ft_itoa:\n");
    char *itoa1 = ft_itoa(12345);
    printf("ft_itoa(12345) = %s\n", itoa1);
    free(itoa1);

    // Testing ft_strmapi
    printf("Testing ft_strmapi:\n");
    char *mapped1 = ft_strmapi("abcd", add_index_to_char_mapi);
    printf("ft_strmapi(\"abcd\", lambda) = %s\n", mapped1);
    free(mapped1);

    // Testing ft_striteri
    printf("Testing ft_striteri:\n");
    char str7[] = "abcdef";
    ft_striteri(str7, add_index_to_char);
    printf("ft_striteri(\"abcdef\", lambda) = %s\n", str7);

    // Testing ft_split
    printf("Testing ft_split:\n");
    char **split = ft_split("hello world split", ' ');
    for (size_t i = 0; split[i]; i++) {
        printf("split[%zu] = %s\n", i, split[i]);
        free(split[i]);
    }
    free(split);

    return 0;
}
