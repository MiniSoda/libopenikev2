/***************************************************************************
*   Copyright (C) 2005 by                                                 *
*   Pedro J. Fernandez Ruiz    pedroj@um.es                               *
*   Alejandro Perez Mendez     alex@um.es                                 *
*                                                                         *
*   This software may be modified and distributed under the terms         *
*   of the Apache license.  See the LICENSE file for details.             *
***************************************************************************/
#ifndef NOTIFYCONTROLLER_HTTP_CERT_LOOKUP_SUPPORTED_H
#define NOTIFYCONTROLLER_HTTP_CERT_LOOKUP_SUPPORTED_H

#include "notifycontroller.h"

namespace openikev2 {

    /**
        This class represents an HTTP_CERT_LOOKUP_SUPPORTED notify controller
        @author Pedro J. Fernandez Ruiz, Alejandro Perez Mendez <pedroj@um.es, alex@um.es>
    */
    class NotifyController_HTTP_CERT_LOOKUP_SUPPORTED : public NotifyController {

            /****************************** METHODS ******************************/
        public:
            /**
             * Creates a new NotifyController_HTTP_CERT_LOOKUP_SUPPORTED
             */
            NotifyController_HTTP_CERT_LOOKUP_SUPPORTED();

            virtual IkeSa::NOTIFY_ACTION processNotify( Payload_NOTIFY& notify, Message& message, IkeSa& ike_sa, ChildSa* child_sa );

            virtual ~NotifyController_HTTP_CERT_LOOKUP_SUPPORTED();
    };
}
#endif
