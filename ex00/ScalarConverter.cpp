/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:03:00 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/08 05:43:44 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "utils.hpp"

ScalarConverter::ScalarConverter( const ScalarConverter& ref ) {
    (void)ref;
}

void    ScalarConverter::convert( const std::string& input )
{
    std::string input_type = identify_type(input);
    
    if (input_type == "Int")
    {
        int val = std::stoi(input);

        if (val >= 32 && val <= 126)
            std::cout << "char: " << static_cast<char>(val) << std::endl;
        else
            std::cout << "char: " << NON_DISP_CHAR << std::endl;

        std::cout << "int: " << val << std::endl;
        std::cout << "float: " << static_cast<float>(val) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(val) << ".0" << std::endl;
    }
    else if (input_type == "Float")
    {
        if (input == NOT_A_FLOAT || input == NEG_NOT_A_FLOAT || input == POS_NOT_A_FLOAT)
        {
            std::cout << "char: " << IMPOSSIBLE_CONVERTION << std::endl;
            std::cout << "int: " << IMPOSSIBLE_CONVERTION << std::endl;
            std::cout << "float: " << NOT_A_FLOAT << std::endl;
            std::cout << "double: " << NOT_A_DOUBLE << std::endl;
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
            float val = std::stof(input);
            int   n = std::stoi(input);
            double res = val - n;

            if (val >= 32 && val <= 126)
                std::cout << "char: " << static_cast<char>(val) << std::endl;
            else
                std::cout << "char: " << NON_DISP_CHAR << std::endl;

            std::cout << "int: " << static_cast<int>(val) << std::endl;
            if (!res)
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
    else if (input_type == "Double")
    {
        if (input == NOT_A_DOUBLE || input == NEG_NOT_A_DOUBLE || input == POS_NOT_A_DOUBLE)
        {
            std::cout << "char: " << IMPOSSIBLE_CONVERTION << std::endl;
            std::cout << "int: " << IMPOSSIBLE_CONVERTION << std::endl;
            std::cout << "float: " << NOT_A_FLOAT << std::endl;
            std::cout << "double: " << NOT_A_DOUBLE << std::endl;
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
            double val = std::stod(input);
            int   n = std::stoi(input);
            double res = val - n;
            if (val >= 32 && val <= 126)
                std::cout << "char: " << static_cast<char>(val) << std::endl;
            else
                std::cout << "char: " << NON_DISP_CHAR << std::endl;

            std::cout << "int: " << static_cast<int>(val) << std::endl;
            if (!res)
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
    else if (input_type == "Char")
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
    else
    {
        std::cout << "char: " << IMPOSSIBLE_CONVERTION << std::endl;
        std::cout << "int: " << IMPOSSIBLE_CONVERTION << std::endl;
        std::cout << "float: " << NOT_A_FLOAT << std::endl;
        std::cout << "double: " << NOT_A_DOUBLE << std::endl;
    }
}