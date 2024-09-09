/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 03:32:50 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/09 04:28:43 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP


# include <iostream>
# include <string>


typedef struct Data // put this in a special file   
{
    int         raw;
    std::string str;
    float       f;
} Data ;

class Serializer{

public :

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);

private :

    Serializer( const Serializer& ref );

};


#endif