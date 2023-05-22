

// #include "libft.h"

// /*
// (malloc(3)で)確保し、文字列's'の各文字に関数 'f' を適用した新しい文字列を返す。

// s:  The string on which to iterate.
// f:  The function to apply to each character.

// Return value
// The string created from the successive applications of ’f’.
// Returns NULL if the allocation fails.

// Description
// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.
//  */

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// }

// int	main(int argc, char const *argv[])
// {
// 	char	*test1;

// 	(void)argc;
// 	(void)argv;
// 	test1 = "abcde";
// 	printf("ft_strmapi(%s) = %s\n", test1, ft_strmapi("abcde", &ft_toupper));
// 	return (0);
// }

// #include <stdio.h>

// char	ft_toupper(unsigned int index, char c)
// {
// 	// テスト用に文字を大文字に変換する関数
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32); // 大文字に変換
// 	else
// 		return (c); // 変換しない
// }

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	// ここに関数の実装を追加する
// }

// int	main(void)
// {
// 	char	*test1;
// 	char	*expected_output1;
// 	char	*output1;

// 	test1 = "abcde";
// 	expected_output1 = "ABCDE";
// 	output1 = ft_strmapi(test1, &ft_toupper);
// 	printf("Input: %s\n", test1);
// 	printf("Expected Output: %s\n", expected_output1);
// 	printf("Output: %s\n", output1);
// 	printf("\n");
// 	// 他のテストケースも追加可能
// 	return (0);
// }
