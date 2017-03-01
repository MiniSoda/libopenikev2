/***************************************************************************
 *   Copyright (C) 2005 by                                                 *
 *   Pedro J. Fernandez Ruiz    pedroj.fernandez@dif.um.es                 *
 *   Alejandro Perez Mendez     alejandro_perez@dif.um.es                  *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the Free Software   *
 *   Foundation, Inc., 51 Franklin St, Fifth Floor,                        *
 *   Boston, MA  02110-1301  USA                                           *
 ***************************************************************************/
#include "utils.h"
#include <stdio.h>

namespace openikev2 {

//**** PRINTING UTILS *************************************************
    string intToString( uint32_t integer ) {
        string str;
        char temp[20];
        snprintf( temp, 20, "%u", integer );
        str += temp;
        return str;
    }

    string intToString( int32_t integer ) {
        string str;
        char temp[20];
        snprintf( temp, 20, "%d", integer );
        str += temp;
        return str;
    }

    string intToString( uint64_t integer ) {
        string str;
        char temp[20];
        snprintf( temp, 20, "%lu", integer );
        str += temp;
        return str;
    }

    string intToString( int64_t integer ) {
        string str;
        char temp[20];
        snprintf( temp, 20, "%li", integer );
        str += temp;
        return str;
    }

    string boolToString( bool boolean ) {
        string str;
        if ( boolean )
            return "YES";
        return "NO";
    }

    string floatToString( float floating ) {
        string str;
        char temp[200];
        snprintf( temp, 200, "%f", floating );
        str += temp;
        return str;
    }

}


//*********************************************************************








