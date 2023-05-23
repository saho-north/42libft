/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:53:02 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/23 20:34:13 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_putchar_fd
[# 注意]
　Unicodeに対応することは、義務ではありません。対応しなくても機械判定は通ります。
「通常の文字（1byte文字）の範囲内でのみ対応する仕様」として実装するのも、十分に妥当性のある実装です。
　Unicodeに対応することで、後続の課題ftprintfで問題が発生するケースがあります。やるなら注意して実装しましょう。
　Unicodeに対応する場合は、レビュイーとしての説明責任を果たす義務がある点に注意しましょう。「このページに書いてあった」は説明としては不十分です。

[# 説明]
　普通にファイルディスクリプター（fd）に putchar．

[# 機械判定]
 Unicode に対応しなくても機械判定は通る．

[# Unicode 対応解説その２]
 Unicodeは文字集合に順番に番号をつけたもの（コードポイントという）で，
 そのコードポイントをどのようなビットパターンに変換するか？というのが符号化方式で（utf8だとか、utf16だとかいくつかある）
 asciiの範囲(`0-127[U+0000
		- U+007F]`)ではコードポイントとビットパターンが一致しているので97 → 'a'でそのままwriteして良いのですが、
 その範囲を超える場合(`128[U+0080-]`)ルールに従ってビットパターンを変える必要がある（添付画像）
 128以上のcharの範囲であれば、`[U+0080 - U+00FF]`なので添付画像で言うと2バイト文字の範囲なので，
 2進数で表したときの合計8ビットを上位バイトの2ビット分（表の2バイトの2進数表記の左のピンク以外の5ビットの一番右2ビット分）
 下位バイトの6ビット分（表の2バイトの2進数表記の緑色以外の6ビット）に振り分けて2バイト分writeしてあげる必要があるって感じです。

Parameters
c:  The character to output.
fd:  The file descriptor on which to write.

Description
Outputs the character ’c’ to the given file
descriptor.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*buf;

// 	buf = "Hello, world!\n";
// 	fd = open("file.txt", O_WRONLY | O_CREAT, 0644);
// 	if (fd == -1)
// 		return (1);
// 	while (*buf)
// 		ft_putchar_fd(*buf++, fd);
// 	close(fd);
// 	return (0);
// }
