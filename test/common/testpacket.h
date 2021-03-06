/*************************************************************************** 

    Copyright (C) 2019 NextEPC Inc. All rights reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

***************************************************************************/


#ifndef __TESTS1AP_H__
#define __TESTS1AP_H__

#include "core_network.h"
#include "core_pkbuf.h"

#include "s1ap/s1ap_message.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

CORE_DECLARE(status_t) testpacket_init();
CORE_DECLARE(status_t) testpacket_final();

CORE_DECLARE(status_t) tests1ap_enb_connect(sock_id *new);
CORE_DECLARE(status_t) tests1ap_enb_close(sock_id id);
CORE_DECLARE(status_t) tests1ap_enb_send(sock_id id, pkbuf_t *sendbuf);
CORE_DECLARE(status_t) tests1ap_enb_read(sock_id id, pkbuf_t *recvbuf);

CORE_DECLARE(status_t) tests1ap_build_setup_req(
        pkbuf_t **pkbuf, S1AP_ENB_ID_PR present, c_uint32_t enb_id);
CORE_DECLARE(status_t) tests1ap_build_initial_ue_msg(pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_identity_response(pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_authentication_response(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_authentication_failure(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_security_mode_complete(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_esm_information_response(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_ue_capability_info_indication(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_initial_context_setup_response(
        pkbuf_t **pkbuf, 
        c_uint32_t mme_ue_s1ap_id, c_uint32_t enb_ue_s1ap_id,
        c_uint8_t ebi, c_uint32_t teid);
CORE_DECLARE(status_t) tests1ap_build_initial_context_setup_failure(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_attach_complete(pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_emm_status(pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_detach_request(pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_ue_context_release_request(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_ue_context_release_complete(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_service_request(pkbuf_t **pkbuf,
        c_uint32_t enb_ue_s1ap_id, c_uint8_t seq,
        c_uint16_t mac, c_uint32_t m_tmsi);
CORE_DECLARE(status_t) tests1ap_build_tau_request(pkbuf_t **pkbuf, int i,
    c_uint32_t mme_ue_s1ap_id, c_uint32_t enb_ue_s1ap_id, c_uint8_t active_flag,
    c_uint32_t m_tmsi, c_uint8_t seq, c_uint32_t mac, c_uint8_t *knas_int);
CORE_DECLARE(status_t) tests1ap_build_pdn_connectivity_request(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_pdn_disconnectivity_request(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_e_rab_setup_response(
        pkbuf_t **pkbuf, 
        c_uint32_t mme_ue_s1ap_id, c_uint32_t enb_ue_s1ap_id,
        c_uint8_t ebi, c_uint32_t teid);
CORE_DECLARE(status_t) tests1ap_build_e_rab_modify_response(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_e_rab_release_response(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_activate_default_bearer_accept(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_activate_dedicated_bearer_accept(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_modify_bearer_accept(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_deactivate_bearer_accept(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_path_switch_request(
        pkbuf_t **pkbuf, int target, 
        c_uint32_t mme_ue_s1ap_id, c_uint32_t enb_ue_s1ap_id,
        int num_of_bearer, c_uint8_t ebi, c_uint32_t teid);
CORE_DECLARE(status_t) tests1ap_build_handover_required(pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_handover_failure(pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_handover_request_ack(
        pkbuf_t **pkbuf, int target,
        c_uint32_t mme_ue_s1ap_id, c_uint32_t enb_ue_s1ap_id,
        int num_of_bearer, c_uint8_t ebi, c_uint32_t teid);
CORE_DECLARE(status_t) tests1ap_build_handover_request_ack_static(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_enb_status_transfer(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_enb_configuration_transfer(
        pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_handover_notify(pkbuf_t **pkbuf, int i);
CORE_DECLARE(status_t) tests1ap_build_handover_cancel(pkbuf_t **pkbuf, int i);

CORE_DECLARE(status_t) tests1ap_build_s1_reset(pkbuf_t **pkbuf, int i);

CORE_DECLARE(status_t) testgtpu_enb_connect(sock_id *new);
CORE_DECLARE(status_t) testgtpu_enb2_connect(sock_id *new);
CORE_DECLARE(status_t) testgtpu_enb_close(sock_id sock);
CORE_DECLARE(status_t) testgtpu_enb_read(sock_id sock, pkbuf_t *recvbuf);
CORE_DECLARE(status_t) testgtpu_enb_send(pkbuf_t *sendbuf);

CORE_DECLARE(status_t) testgtpu_build_ping(pkbuf_t **sendbuf,
        const char *src_ip, const char *dst_ip);
CORE_DECLARE(status_t) testgtpu_build_slacc_rs(pkbuf_t **sendbuf, int i);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __TESTS1AP_H__ */
