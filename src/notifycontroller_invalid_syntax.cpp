/***************************************************************************
*   Copyright (C) 2005 by                                                 *
*   Pedro J. Fernandez Ruiz    pedroj@um.es                               *
*   Alejandro Perez Mendez     alex@um.es                                 *
*                                                                         *
*   This software may be modified and distributed under the terms         *
*   of the Apache license.  See the LICENSE file for details.             *
***************************************************************************/
#include "notifycontroller_invalid_syntax.h"
#include "eventbus.h"
#include "buseventikesa.h"
#include "log.h"

namespace openikev2 {

    NotifyController_INVALID_SYNTAX::NotifyController_INVALID_SYNTAX() {}

    NotifyController_INVALID_SYNTAX::~NotifyController_INVALID_SYNTAX() {}

    IkeSa::NOTIFY_ACTION NotifyController_INVALID_SYNTAX::processNotify( Payload_NOTIFY& notify, Message& message, IkeSa& ike_sa, ChildSa* child_sa ) {
        assert( notify.notification_type == Payload_NOTIFY::INVALID_SYNTAX );

        // If is a request
        if ( message.message_type == Message::REQUEST ) {
            Log::writeLockedMessage( ike_sa.getLogId(), "INVALID_SYNTAX notify in a request.", Log::LOG_ERRO, true );
            ike_sa.sendNotifyResponse( message.exchange_type, Payload_NOTIFY::INVALID_SYNTAX);
            return IkeSa::NOTIFY_ACTION_ERROR;
        }

        // Check notify field correction
        if ( notify.protocol_id > Enums::PROTO_IKE || notify.spi_value.get() != NULL || notify.notification_data.get() != NULL ){
            Log::writeLockedMessage( ike_sa.getLogId(), "INVALID SYNTTAX in INVALID_SYNTAX notify", Log::LOG_ERRO, true );
            return IkeSa::NOTIFY_ACTION_ERROR;
        }

        Log::writeLockedMessage( ike_sa.getLogId(), "Peer reject request due to invalid syntax.", Log::LOG_ERRO, true );
        return IkeSa::NOTIFY_ACTION_ERROR;
    }
}
