/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:12:46 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/08 05:22:52 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <limits.h>
#include <string>

#define FLOAT_MIN "-inff"
#define SIGNED_FLOAT_MAX "+inff"
#define FLOAT_MAX "inff" // this is not max it s inf
#define NOT_A_FLOAT "nanf"
#define POS_NOT_A_FLOAT "+nanf"
#define NEG_NOT_A_FLOAT "-nanf"

#define DOUBLE_MIN "-inf"
#define DOUBLE_MAX "inf"
#define SIGNED_DOUBLE_MAX "+inf"
#define NOT_A_DOUBLE "nan"
#define POS_NOT_A_DOUBLE "+nan"
#define NEG_NOT_A_DOUBLE "-nan"

#define IMPOSSIBLE_CONVERTION "impossible"

#define NON_DISP_CHAR "Non displayable"

std::string identify_type( const std::string& input );

#endif