# Get Next Line

```
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 07:22:13 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/28 13:22:42 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```
## About

This project contains a function that will read a File Descriptor and return a line of text ending with `\n`. When calling this function in loop, it will return the full text in fd.

## How to execute

- This is the function prototype:

```
char *get_next_line(int fd);
```
File descriptor is the only required argument


- You need to compile this function defining your buffer size.

```
// Example:

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
```

## Function workflow

<img src="https://user-images.githubusercontent.com/76733221/136621919-c8d6f1e1-3ee7-4d80-9d2d-1e7266a854db.jpg" alt="Get Next Line explained" />




