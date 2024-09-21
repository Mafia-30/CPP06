/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:03:00 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/21 13:44:59 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter( const ScalarConverter& ref ) {
    (void)ref;
}

void    ScalarConverter::convert( const std::string& input )
{
    std::string input_type = identify_type(input);
    
    if (input_type == "Int")
    {
        try
        {
            int_converter(std::stoi(input));
        }
        catch(const std::out_of_range& e)
        {
            nan_converter();
        }
    }
    else if (input_type == "Float")
        float_converter(input);
    else if (input_type == "Double")
        double_converter(input);
    else if (input_type == "Char")
        char_converter(input);
    else
        nan_converter();
}