/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:08:41 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/21 16:25:10 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <sstream>
#include <float.h>
#include "ScalarConverter.hpp"
#include "utils.hpp"


void    nan_converter( void );
void    char_converter( const std::string& input );
void    int_converter( const int& val );
void    float_converter( const std::string& input );
void    double_converter( const std::string& input );

#endif