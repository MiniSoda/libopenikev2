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
#include "sendinformationalreqcommand.h"

namespace openikev2 {

    SendInformationalReqCommand::SendInformationalReqCommand()
            : Command( false ) {}

    SendInformationalReqCommand::SendInformationalReqCommand( AutoVector< Payload > payloads )
            : Command( false ) {
        this->payloads = payloads;
    }

    SendInformationalReqCommand::~SendInformationalReqCommand() { }

    void SendInformationalReqCommand::addPayload( auto_ptr< Payload > payload ) {
        this->payloads->push_back( payload.release() );
    }

    IkeSa::IKE_SA_ACTION SendInformationalReqCommand::executeCommand( IkeSa& ike_sa ) {
        return ike_sa.createGenericInformationalRequest( this->payloads );
    }

    string SendInformationalReqCommand::getCommandName() const {
        return "SEND_INFORMATIONAL_REQ";
    }

}

