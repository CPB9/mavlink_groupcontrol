/** @file
 *    @brief MAVLink comm protocol testsuite generated from groupcontrol.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef GROUPCONTROL_TESTSUITE_H
#define GROUPCONTROL_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_groupcontrol(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_groupcontrol(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_modeid(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ModeId >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_modeid_t packet_in = {
        963497464
    };
    mavlink_modeid_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.modeId = packet_in.modeId;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ModeId_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ModeId_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_modeid_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_modeid_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_modeid_pack(system_id, component_id, &msg , packet1.modeId );
    mavlink_msg_modeid_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_modeid_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.modeId );
    mavlink_msg_modeid_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_modeid_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_modeid_send(MAVLINK_COMM_1 , packet1.modeId );
    mavlink_msg_modeid_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_reynoldsparams(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ReynoldsParams >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_reynoldsparams_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0
    };
    mavlink_reynoldsparams_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.kc = packet_in.kc;
        packet1.ks = packet_in.ks;
        packet1.ka = packet_in.ka;
        packet1.kp = packet_in.kp;
        packet1.km = packet_in.km;
        packet1.kh = packet_in.kh;
        packet1.vmax = packet_in.vmax;
        packet1.rn = packet_in.rn;
        packet1.rs = packet_in.rs;
        packet1.rm = packet_in.rm;
        packet1.rmb = packet_in.rmb;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ReynoldsParams_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ReynoldsParams_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reynoldsparams_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_reynoldsparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reynoldsparams_pack(system_id, component_id, &msg , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_reynoldsparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reynoldsparams_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_reynoldsparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_reynoldsparams_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reynoldsparams_send(MAVLINK_COMM_1 , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_reynoldsparams_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_setreynoldsparams(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SetReynoldsParams >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_setreynoldsparams_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0
    };
    mavlink_setreynoldsparams_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.kc = packet_in.kc;
        packet1.ks = packet_in.ks;
        packet1.ka = packet_in.ka;
        packet1.kp = packet_in.kp;
        packet1.km = packet_in.km;
        packet1.kh = packet_in.kh;
        packet1.vmax = packet_in.vmax;
        packet1.rn = packet_in.rn;
        packet1.rs = packet_in.rs;
        packet1.rm = packet_in.rm;
        packet1.rmb = packet_in.rmb;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SetReynoldsParams_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SetReynoldsParams_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_setreynoldsparams_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_setreynoldsparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_setreynoldsparams_pack(system_id, component_id, &msg , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_setreynoldsparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_setreynoldsparams_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_setreynoldsparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_setreynoldsparams_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_setreynoldsparams_send(MAVLINK_COMM_1 , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_setreynoldsparams_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_formationparams(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FormationParams >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_formationparams_t packet_in = {
        17.0,45.0
    };
    mavlink_formationparams_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param1 = packet_in.param1;
        packet1.param2 = packet_in.param2;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FormationParams_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FormationParams_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_formationparams_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_formationparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_formationparams_pack(system_id, component_id, &msg , packet1.param1 , packet1.param2 );
    mavlink_msg_formationparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_formationparams_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.param1 , packet1.param2 );
    mavlink_msg_formationparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_formationparams_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_formationparams_send(MAVLINK_COMM_1 , packet1.param1 , packet1.param2 );
    mavlink_msg_formationparams_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_setformationparams(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SetFormationParams >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_setformationparams_t packet_in = {
        17.0,45.0
    };
    mavlink_setformationparams_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param1 = packet_in.param1;
        packet1.param2 = packet_in.param2;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SetFormationParams_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SetFormationParams_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_setformationparams_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_setformationparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_setformationparams_pack(system_id, component_id, &msg , packet1.param1 , packet1.param2 );
    mavlink_msg_setformationparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_setformationparams_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.param1 , packet1.param2 );
    mavlink_msg_setformationparams_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_setformationparams_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_setformationparams_send(MAVLINK_COMM_1 , packet1.param1 , packet1.param2 );
    mavlink_msg_setformationparams_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_groupcontrol(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_modeid(system_id, component_id, last_msg);
    mavlink_test_reynoldsparams(system_id, component_id, last_msg);
    mavlink_test_setreynoldsparams(system_id, component_id, last_msg);
    mavlink_test_formationparams(system_id, component_id, last_msg);
    mavlink_test_setformationparams(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // GROUPCONTROL_TESTSUITE_H
