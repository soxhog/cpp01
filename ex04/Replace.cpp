/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:15:11 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/10 21:53:27 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace( void )
{
}

Replace::~Replace( void )
{
}

const std::string	Replace::getFileName( void ) const
{
	return (_fileName);
}

const std::string	Replace::getReplacedStr( void ) const
{
	return (_replacedStr);
}

const std::string	Replace::getStrOfFileContents( void ) const
{
	return (_strOfFileContents);
}

const std::string	Replace::getStrOfOutput( void ) const
{
	return (_strOfOutput);
}

// const std::string	Replace::getReplaceStr( void ) const
// {
// 	return (_replaceStr);
// }

// const std::string	Replace::getReplacement( void ) const
// {
// 	return (_replacement);
// }

bool				Replace::setFileName( std::string &fileName )
{
	if (fileName.empty())
	{
		putErr(ERR_FILE_EMPTY);
		return (false);
	}
	_fileName = fileName;
	return (true);
}

bool				Replace::setReplacedStr( std::string &replacedStr )
{
	_replacedStr = replacedStr;
	return (true);
}

// bool				Replace::setInputFileStream( std::ifstream &inputFileStream )
// {
// 	_inputFileStream = inputFileStream;
// 	return (true);
// }

bool				Replace::setStrOfFileContents( void )
{
	if (!_inputFileStream)
	{
		putErr(ERR_INPUTFILESTREAM);
		return (false);
	}
	while (std::getline(_inputFileStream, _strOfFileContents))
		;
	std::cout << "setStrOfFileContents: " << _strOfFileContents << std::endl;
	_inputFileStream.close();
	return (true);
}

bool				Replace::setStrOfOutput( std::string &strOutput )
{
	_strOfOutput = strOutput;
	return (true);
}

// bool				Replace::setReplaceStr( std::string &replaceStr )
// {
// 	if (replaceStr.empty())
// 	{
// 		putErr(ERR_REPLACE_STR_EMPTY);
// 		return (false);
// 	}
// 	_replaceStr = replaceStr;
// 	return (true);
// }

// bool				Replace::setReplacement( std::string &replacement )
// {
// 	if (replacement.empty())
// 	{
// 		putErr(ERR_REPLACEMENT_EMPTY);
// 		return (false);
// 	}
// 	_replacement = replacement;
// 	return (true);
// }

bool				Replace::openFile( void )
{
	std::ifstream	inputFileStream;

	inputFileStream.open(getFileName());
	if (inputFileStream.fail())
	{
		putErr(ERR_OPEN);
		return (false);
	}
	
	return (true);
}

static bool			is_empty(std::string &str)
{
	return (str.empty());
}

bool				Replace::replace( std::string replaceStr, std::string replacement )
{
	std::string	tmpStrOutput;
	size_t		replaceLen = replaceStr.length();

	if (is_empty(replaceStr) || is_empty(replacement))
	{
		putErr(ERR_STR_EMPTY);
		return (false);
	}
	tmpStrOutput = getStrOfFileContents();
	std::cout << tmpStrOutput << std::endl;
	for (size_t len = 0; len < tmpStrOutput.length(); len++)
	{
		if (tmpStrOutput.compare(len, replaceLen, replaceStr) == SAME_STR)
		{
			tmpStrOutput.erase(len, replaceLen);
			tmpStrOutput.insert(len, replacement);
		}
	}
	setStrOfOutput(tmpStrOutput);
	return (true);
}

bool				Replace::changeFileExtension( void )
{
	std::string	tmpFilename = getFileName();
	std::string	extention = ".replace";
	size_t		filenameLen = tmpFilename.length();
	size_t		lastLetterPos = filenameLen - 1;
	size_t		extensionPos = tmpFilename.find_last_of('.');

	if (tmpFilename.empty())
	{
		putErr(ERR_FILE_EMPTY);
		return (false);
	}
	if (extensionPos != std::string::npos)
	{
		tmpFilename.erase(extensionPos, lastLetterPos);
		tmpFilename.insert(extensionPos, extention);
	}
	else
		tmpFilename += extention;
	setFileName(tmpFilename);
	return (true);
}

bool				Replace::outputToFile( void )
{
	std::string		outputFilename;
	std::ofstream	outputFile;
	std::string		strOfOutput = getStrOfOutput();

	changeFileExtension();
	outputFilename = getFileName();
	outputFile.open(outputFilename, std::ios::out);
	std::cout << strOfOutput << std::endl;
	outputFile << strOfOutput;
	outputFile.close();
	return (true);
}
