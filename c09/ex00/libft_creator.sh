# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 10:23:57 by ghwa              #+#    #+#              #
#    Updated: 2023/02/24 10:24:02 by ghwa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY_NAME="ft"

for SRC_FILE in *.c
do
  OBJ_FILE="$(basename "${SRC_FILE%.*}").o"
  gcc -Wall -Wextra -Werror -c "$SRC_FILE" -o "$OBJ_FILE"
done

ar rcs "lib$LIBRARY_NAME.a" *.o


