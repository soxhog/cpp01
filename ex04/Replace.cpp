/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skagiya <skagiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:15:11 by skagiya           #+#    #+#             */
/*   Updated: 2021/10/11 18:33:58 by skagiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace( void )
{
}

Replace::~Replace( void )
{
}
  /***--------------------------------------***/
 /**				<Getter>				**/
/*------------------------------------------*/

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

  /***--------------------------------------***/
 /**				<Setter>				**/
/*------------------------------------------*/

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

bool				Replace::setStrOfFileContents( void )
{
	std::string	strOfFileContents;
	std::string	readingLineBuffer;

	if (!_inputFileStream)
	{
		putErr(ERR_INPUTFILESTREAM);
		return (false);
	}
	while (std::getline(_inputFileStream, readingLineBuffer))
	{
		strOfFileContents += readingLineBuffer;
		if (!_inputFileStream.eof())
			strOfFileContents += "\n";
	}
	_inputFileStream.close();
	_strOfFileContents = strOfFileContents;
	return (true);
}

bool				Replace::setStrOfOutput( std::string &strOutput )
{
	_strOfOutput = strOutput;
	return (true);
}

  /***--------------------------------------***/
 /**				<SetUpFile>				**/
/*------------------------------------------*/

bool				Replace::setUpFile( std::string &filename )
{
	if (!setFileName(filename))
		return (false);
	if (!openFile())
		return (false);
	if (!setStrOfFileContents())
		return (false);
	return (true);
}

bool				Replace::openFile( void )
{
	std::string		filename = getFileName();

	_inputFileStream.open(filename);
	if (_inputFileStream.fail())
	{
		putErr(ERR_OPEN);
		return (false);
	}
	return (true);
}

  /***--------------------------------------***/
 /**				<Replace>				**/
/*------------------------------------------*/

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

  /***--------------------------------------***/
 /**			<OutputToFile>				**/
/*------------------------------------------*/

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

	if (!changeFileExtension())
		return (false);
	outputFilename = getFileName();
	outputFile.open(outputFilename, std::ios::out);
	if (outputFile.fail())
	{
		putErr(ERR_OPEN);
		return (false);
	}
	outputFile << strOfOutput;
	outputFile.close();
	return (true);
}
