/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:48:36 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/21 14:22:37 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void    nan_converter( void )
{
    std::cout << "char: " << IMPOSSIBLE_CONVERTION << std::endl;
    std::cout << "int: " << IMPOSSIBLE_CONVERTION << std::endl;
    std::cout << "float: " << NOT_A_FLOAT << std::endl;
    std::cout << "double: " << NOT_A_DOUBLE << std::endl;
}

void    char_converter( const std::string& input )
{
    char val = input[0];
    
    if (val >= 32 && val <= 126)
        std::cout << "char: " << val << std::endl;
    else
        std::cout << "char: " << NON_DISP_CHAR << std::endl;

    std::cout << "int: " << static_cast<int>(val) << std::endl;
    std::cout << "float: " << static_cast<float>(val) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(val) << ".0" << std::endl;
}

void    int_converter( const int& val )
{
    if (val >= 32 && val <= 126)
        std::cout << "char: " << static_cast<char>(val) << std::endl;
    else
        std::cout << "char: " << NON_DISP_CHAR << std::endl;

    std::cout << "int: " << val << std::endl;
    std::cout << "float: " << static_cast<float>(val) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(val) << ".0" << std::endl;
}

void    float_converter( const std::string& input )
{
    if (input == NOT_A_FLOAT || input == NEG_NOT_A_FLOAT || input == POS_NOT_A_FLOAT)
    {
        nan_converter();
    }
    else if (input == FLOAT_MIN)
    {
        std::cout << "char: " << IMPOSSIBLE_CONVERTION << std::endl;
        std::cout << "int: " << IMPOSSIBLE_CONVERTION << std::endl;
        std::cout << "float: " << FLOAT_MIN << std::endl;
        std::cout << "double: " << DOUBLE_MIN << std::endl;
    }
    else if (input == FLOAT_MAX || input == SIGNED_FLOAT_MAX)
    {
        std::cout << "char: " << IMPOSSIBLE_CONVERTION << std::endl;
        std::cout << "int: " << IMPOSSIBLE_CONVERTION << std::endl;
        std::cout << "float: " << FLOAT_MAX << std::endl;
        std::cout << "double: " << DOUBLE_MAX << std::endl;
    }
    else
    {
        float   val;
        std::ostringstream strm;
        
        try
        {
            val = std::stof(input);
        }
        catch(const std::out_of_range& e)
        {
            nan_converter();
        }

        if (val >= 32 && val <= 126)
            std::cout << "char: " << static_cast<char>(val) << std::endl;
        else
            std::cout << "char: " << NON_DISP_CHAR << std::endl;

        if (val <= 2147483647 && val >= -2147483648)
            std::cout << "int: " << static_cast<int>(val) << std::endl;
        else
            std::cout << "int: " << NON_DISP_CHAR << std::endl;

        strm << val;
        
        if (strm.str().find('.') == std::string::npos)
        {
            std::cout << "float: " << val << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(val) << ".0" << std::endl;       
        }
        else
        {
            std::cout << "float: " << val << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(val) << std::endl;    
        }
    }
}

void    double_converter( const std::string& input )
{
    if (input == NOT_A_DOUBLE || input == NEG_NOT_A_DOUBLE || input == POS_NOT_A_DOUBLE)
    {
        nan_converter();
    }
    else if (input == DOUBLE_MIN)
    {
        std::cout << "char: " << IMPOSSIBLE_CONVERTION << std::endl;
        std::cout << "int: " << IMPOSSIBLE_CONVERTION << std::endl;
        std::cout << "float: " << FLOAT_MIN << std::endl;
        std::cout << "double: " << DOUBLE_MIN << std::endl;
    }
    else if (input == DOUBLE_MAX || input == SIGNED_DOUBLE_MAX)
    {
        std::cout << "char: " << IMPOSSIBLE_CONVERTION << std::endl;
        std::cout << "int: " << IMPOSSIBLE_CONVERTION << std::endl;
        std::cout << "float: " << FLOAT_MAX << std::endl;
        std::cout << "double: " << DOUBLE_MAX << std::endl;
    }
    else
    {
        double val;
        std::ostringstream strm;

        try
        {
            val = std::stod(input);
        }
        catch(const std::out_of_range& e)
        {
            nan_converter();
        }

        if (val >= 32 && val <= 126)
            std::cout << "char: " << static_cast<char>(val) << std::endl;
        else
            std::cout << "char: " << NON_DISP_CHAR << std::endl;

        if (val <= 2147483647 && val >= -2147483648) //have to replace this with macros
            std::cout << "int: " << static_cast<int>(val) << std::endl;
        else
            std::cout << "int: " << NON_DISP_CHAR << std::endl;

        if (strm.str().find('.') == std::string::npos)
        {
            std::cout << "float: " << static_cast<float>(val) << ".0f" << std::endl;
            std::cout << "double: " << val << ".0" << std::endl;
        }
        else
        {
            std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
            std::cout << "double: " << val << std::endl;
        }
    }
}
