#ifndef REPLACE_HPP
#define REPLACE_HPP

// INCLUDES

# include <string>
# include <iostream>
# include <fstream>
# include "putErr.hpp"

// ARGS

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
	// std::string		_replaceStr;
	// std::string		_replacement;
	std::ifstream	_inputFileStream;
public:
	Replace( void );
	~Replace( void );
	const std::string	getFileName( void ) const;
	const std::string	getReplacedStr( void ) const;
	const std::string	getStrOfFileContents( void ) const;
	const std::string	getStrOfOutput( void ) const;
	// const std::ifstream	getInputFileStream( void ) const;
	// const std::string	getReplaceStr( void ) const;
	// const std::string	getReplacement( void ) const;
	bool				setFileName( std::string &fileName );
	bool				setReplacedStr( std::string &replacedStr );
	bool				setStrOfFileContents( void );
	bool				setStrOfOutput( std::string &strOutput );
	// bool				setInputFileStream( std::ifstream &inputFileStream );
	// bool				setReplaceStr( std::string &replaceStr );
	// bool				setReplacement( std::string &replacement );
	bool				changeFileExtension( void );
	bool				openFile( void );
	bool				outputToFile( void );
	bool				replace( std::string replaceStr, std::string replacement );
};

#endif /* REPLACE_HPP */
