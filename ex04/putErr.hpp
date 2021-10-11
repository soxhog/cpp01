#ifndef PUTERR_HPP
#define PUTERR_HPP

# include <string>
# include <iostream>

#define RESET ("\033[0m")
#define RED ("\033[31m")

typedef	enum
{
	ERROR = 1,
	ERR_ARGS_NUM,
	ERR_REPLACE_STR_EMPTY,
	ERR_REPLACEMENT_EMPTY,
	ERR_STR_EMPTY,
	ERR_FILE_EMPTY,
	ERR_OPEN,
	ERR_INPUTFILESTREAM
}		e_err;

void	putErr( int errNum );

#endif /* PUTERR_HPP */