/***************************************************************************
 *   Copyright (C) 2005 by                                                 *
 *   Alejandro Perez Mendez     alejandro_perez@dif.um.es                  *
 *   Pedro J. Fernandez Ruiz    pedroj.fernandez@dif.um.es                 *
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
#ifndef OPENIKEV2MESSAGERECEIVEDCOMMAND_H
#define OPENIKEV2MESSAGERECEIVEDCOMMAND_H

#include "command.h"
#include "message.h"

namespace openikev2 {

    /**
        This class represents a Message Received Command, indicating the need of process a received Message
        @author Alejandro Perez Mendez, Pedro J. Fernandez Ruiz <alejandro_perez@dif.um.es, pedroj.fernandez@dif.um.es>
    */
    class MessageReceivedCommand : public Command {

            /****************************** ATTRIBUTES ******************************/
        protected:
            auto_ptr<Message> message;                  /**< Received message */

            /****************************** METHODS ******************************/
        public:
            /**
             * Creates a new MessageReceivedCommand setting the received message
             * @param message Received message
             */
            MessageReceivedCommand( auto_ptr<Message> message );

            virtual IkeSa::IKE_SA_ACTION executeCommand( IkeSa& ike_sa );
            virtual string getCommandName() const;

            virtual ~MessageReceivedCommand();

    };

}

#endif
