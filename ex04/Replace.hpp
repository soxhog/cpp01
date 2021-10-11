#ifndef REPLACE_HPP
#define REPLACE_HPP

# include <string>
# include <iostream>
# include <fstream>
# include "putErr.hpp"

typedef enum
{
	FILENAME_INDEX = 1,
	REPLACE_STR_INDEX,
	REPLACEMENT_INDEX,
	MUST_ARGS_NUM
}		e_args;

# define SAME_STR 0

class Replace
{
private:
	std::string		_fileName;
	std::string		_replacedStr;
	std::string		_strOfFileContents;
	std::string		_strOfOutput;
	std::ifstream	_inputFileStream;
public:
	Replace( void );
	~Replace( void );

  /***--------------------------------------***/
 /**				<Getter>				**/
/*------------------------------------------*/
	const std::string	getFileName( void ) const;
	const std::string	getReplacedStr( void ) const;
	const std::string	getStrOfFileContents( void ) const;
	const std::string	getStrOfOutput( void ) const;

  /***--------------------------------------***/
 /**				<Setter>				**/
/*------------------------------------------*/
	bool				setFileName( std::string &fileName );
	bool				setReplacedStr( std::string &replacedStr );
	bool				setStrOfFileContents( void );
	bool				setStrOfOutput( std::string &strOutput );

  /***--------------------------------------***/
 /**				<SetUpFile>				**/
/*------------------------------------------*/
	bool				setUpFile( std::string &filename );
	bool				openFile( void );

  /***--------------------------------------***/
 /**				<Replace>				**/
/*------------------------------------------*/
	bool				replace( std::string replaceStr, std::string replacement );

  /***--------------------------------------***/
 /**			<OutputToFile>				**/
/*------------------------------------------*/
	bool				changeFileExtension( void );
	bool				outputToFile( void );
};

#endif /* REPLACE_HPP */
