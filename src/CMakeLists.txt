set(sources alarm.cpp alarmable.cpp alarmcommand.cpp
	alarmcontroller.cpp alarmcontrollerimpl.cpp attribute.cpp attributemap.cpp
	authenticator.cpp autolock.cpp autovector.cpp busevent.cpp buseventchildsa.cpp
	buseventcore.cpp buseventikesa.cpp busobserver.cpp bytearray.cpp bytebuffer.cpp
	childsa.cpp childsacollection.cpp childsaconfiguration.cpp childsarequest.cpp
	cipher.cpp closeikesacommand.cpp command.cpp condition.cpp configuration.cpp
	configurationattribute.cpp cryptocontroller.cpp cryptocontrollerimpl.cpp diffiehellman.cpp
	eappacket.cpp enums.cpp eventbus.cpp exitikesacommand.cpp generalconfiguration.cpp
	id.cpp idtemplate.cpp ikesa.cpp ikesaconfiguration.cpp ikesacontroller.cpp
	ikesacontrollerimpl.cpp ipaddress.cpp ipseccontroller.cpp ipseccontrollerimpl.cpp keyring.cpp
	log.cpp logimpl.cpp message.cpp messagereceivedcommand.cpp mutex.cpp
	networkcontroller.cpp networkcontrollerimpl.cpp networkprefix.cpp notifycontroller.cpp
	notifycontroller_authentication_failed.cpp notifycontroller_cookie.cpp
	notifycontroller_http_cert_lookup_supported.cpp notifycontroller_internal_address_failure.cpp
	notifycontroller_invalid_ke.cpp notifycontroller_invalid_syntax.cpp
	notifycontroller_no_additional_sas.cpp notifycontroller_no_proposal_chosen.cpp notifycontroller_rekey_sa.cpp
	notifycontroller_single_pair_required.cpp notifycontroller_ts_unacceptable.cpp
	notifycontroller_unsupported_critical_payload.cpp notifycontroller_use_transport_mode.cpp payload.cpp payload_auth.cpp
	payload_cert.cpp payload_cert_req.cpp payload_conf.cpp payload_del.cpp payload_eap.cpp
	payload_id.cpp payload_idi.cpp payload_idr.cpp payload_ke.cpp payload_nonce.cpp
	payload_notify.cpp payload_sa.cpp payload_sk.cpp payload_ts.cpp payload_tsi.cpp
	payload_tsr.cpp payload_vendor.cpp payloadfactory.cpp peerconfiguration.cpp
	printable.cpp proposal.cpp pseudorandomfunction.cpp random.cpp semaphore.cpp
	senddeletechildsareqcommand.cpp senddeleteikesareqcommand.cpp sendeapcontinuereqcommand.cpp
	sendeapfinishreqcommand.cpp sendikeauthreqcommand.cpp sendikesainitreqcommand.cpp
	sendinformationalreqcommand.cpp sendnewchildsareqcommand.cpp sendrekeychildsareqcommand.cpp
	sendrekeyikesareqcommand.cpp socketaddress.cpp threadcontroller.cpp threadcontrollerimpl.cpp
	trafficselector.cpp transform.cpp transformattribute.cpp utils.cpp
	aaasender.cpp  aaacontroller.cpp  aaacontrollerimpl.cpp
    boolattribute.cpp stringattribute.cpp int32attribute.cpp radiusattribute.cpp)

add_library(openikev2 SHARED ${sources})