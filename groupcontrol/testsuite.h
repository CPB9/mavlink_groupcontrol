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


static void mavlink_test_man_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MAN_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_man_status_t packet_in = {
        17235,139,206,17,84
    };
    mavlink_man_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.nextWaypointId = packet_in.nextWaypointId;
        packet1.scriptMode = packet_in.scriptMode;
        packet1.flyingMode = packet_in.flyingMode;
        packet1.groupId = packet_in.groupId;
        packet1.devicesCount = packet_in.devicesCount;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MAN_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MAN_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_man_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_status_pack(system_id, component_id, &msg , packet1.scriptMode , packet1.flyingMode , packet1.groupId , packet1.devicesCount , packet1.nextWaypointId );
    mavlink_msg_man_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.scriptMode , packet1.flyingMode , packet1.groupId , packet1.devicesCount , packet1.nextWaypointId );
    mavlink_msg_man_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_man_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_status_send(MAVLINK_COMM_1 , packet1.scriptMode , packet1.flyingMode , packet1.groupId , packet1.devicesCount , packet1.nextWaypointId );
    mavlink_msg_man_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_man_set_flying_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MAN_SET_FLYING_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_man_set_flying_mode_t packet_in = {
        5
    };
    mavlink_man_set_flying_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.flyingMode = packet_in.flyingMode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_flying_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_man_set_flying_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_flying_mode_pack(system_id, component_id, &msg , packet1.flyingMode );
    mavlink_msg_man_set_flying_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_flying_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.flyingMode );
    mavlink_msg_man_set_flying_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_man_set_flying_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_flying_mode_send(MAVLINK_COMM_1 , packet1.flyingMode );
    mavlink_msg_man_set_flying_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_man_set_script_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MAN_SET_SCRIPT_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_man_set_script_mode_t packet_in = {
        5
    };
    mavlink_man_set_script_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.scriptMode = packet_in.scriptMode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MAN_SET_SCRIPT_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MAN_SET_SCRIPT_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_script_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_man_set_script_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_script_mode_pack(system_id, component_id, &msg , packet1.scriptMode );
    mavlink_msg_man_set_script_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_script_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.scriptMode );
    mavlink_msg_man_set_script_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_man_set_script_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_script_mode_send(MAVLINK_COMM_1 , packet1.scriptMode );
    mavlink_msg_man_set_script_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_man_set_waypoint_flying_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MAN_SET_WAYPOINT_FLYING_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_man_set_waypoint_flying_mode_t packet_in = {
        17235,139
    };
    mavlink_man_set_waypoint_flying_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.waypointId = packet_in.waypointId;
        packet1.flyingMode = packet_in.flyingMode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MAN_SET_WAYPOINT_FLYING_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MAN_SET_WAYPOINT_FLYING_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_waypoint_flying_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_man_set_waypoint_flying_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_waypoint_flying_mode_pack(system_id, component_id, &msg , packet1.waypointId , packet1.flyingMode );
    mavlink_msg_man_set_waypoint_flying_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_waypoint_flying_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.waypointId , packet1.flyingMode );
    mavlink_msg_man_set_waypoint_flying_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_man_set_waypoint_flying_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_set_waypoint_flying_mode_send(MAVLINK_COMM_1 , packet1.waypointId , packet1.flyingMode );
    mavlink_msg_man_set_waypoint_flying_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_man_reset_flying_mode_params(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MAN_RESET_FLYING_MODE_PARAMS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_man_reset_flying_mode_params_t packet_in = {
        5
    };
    mavlink_man_reset_flying_mode_params_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.flyingMode = packet_in.flyingMode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MAN_RESET_FLYING_MODE_PARAMS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MAN_RESET_FLYING_MODE_PARAMS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_reset_flying_mode_params_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_man_reset_flying_mode_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_reset_flying_mode_params_pack(system_id, component_id, &msg , packet1.flyingMode );
    mavlink_msg_man_reset_flying_mode_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_reset_flying_mode_params_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.flyingMode );
    mavlink_msg_man_reset_flying_mode_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_man_reset_flying_mode_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_man_reset_flying_mode_params_send(MAVLINK_COMM_1 , packet1.flyingMode );
    mavlink_msg_man_reset_flying_mode_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_reynolds_params(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REYNOLDS_PARAMS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_reynolds_params_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0
    };
    mavlink_reynolds_params_t packet1, packet2;
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
           memset(MAVLINK_MSG_ID_REYNOLDS_PARAMS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REYNOLDS_PARAMS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reynolds_params_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_reynolds_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reynolds_params_pack(system_id, component_id, &msg , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_reynolds_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reynolds_params_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_reynolds_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_reynolds_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reynolds_params_send(MAVLINK_COMM_1 , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_reynolds_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_reynolds_params(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_REYNOLDS_PARAMS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_reynolds_params_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0
    };
    mavlink_set_reynolds_params_t packet1, packet2;
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
           memset(MAVLINK_MSG_ID_SET_REYNOLDS_PARAMS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_REYNOLDS_PARAMS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_reynolds_params_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_reynolds_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_reynolds_params_pack(system_id, component_id, &msg , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_set_reynolds_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_reynolds_params_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_set_reynolds_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_reynolds_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_reynolds_params_send(MAVLINK_COMM_1 , packet1.kc , packet1.ks , packet1.ka , packet1.kp , packet1.km , packet1.kh , packet1.vmax , packet1.rn , packet1.rs , packet1.rm , packet1.rmb );
    mavlink_msg_set_reynolds_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_formation_params(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FORMATION_PARAMS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_formation_params_t packet_in = {
        17.0,45.0
    };
    mavlink_formation_params_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param1 = packet_in.param1;
        packet1.param2 = packet_in.param2;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FORMATION_PARAMS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FORMATION_PARAMS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_formation_params_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_formation_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_formation_params_pack(system_id, component_id, &msg , packet1.param1 , packet1.param2 );
    mavlink_msg_formation_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_formation_params_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.param1 , packet1.param2 );
    mavlink_msg_formation_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_formation_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_formation_params_send(MAVLINK_COMM_1 , packet1.param1 , packet1.param2 );
    mavlink_msg_formation_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_formation_params(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_FORMATION_PARAMS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_formation_params_t packet_in = {
        17.0,45.0
    };
    mavlink_set_formation_params_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param1 = packet_in.param1;
        packet1.param2 = packet_in.param2;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_FORMATION_PARAMS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_FORMATION_PARAMS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_formation_params_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_formation_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_formation_params_pack(system_id, component_id, &msg , packet1.param1 , packet1.param2 );
    mavlink_msg_set_formation_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_formation_params_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.param1 , packet1.param2 );
    mavlink_msg_set_formation_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_formation_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_formation_params_send(MAVLINK_COMM_1 , packet1.param1 , packet1.param2 );
    mavlink_msg_set_formation_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_groupcontrol(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_man_status(system_id, component_id, last_msg);
    mavlink_test_man_set_flying_mode(system_id, component_id, last_msg);
    mavlink_test_man_set_script_mode(system_id, component_id, last_msg);
    mavlink_test_man_set_waypoint_flying_mode(system_id, component_id, last_msg);
    mavlink_test_man_reset_flying_mode_params(system_id, component_id, last_msg);
    mavlink_test_reynolds_params(system_id, component_id, last_msg);
    mavlink_test_set_reynolds_params(system_id, component_id, last_msg);
    mavlink_test_formation_params(system_id, component_id, last_msg);
    mavlink_test_set_formation_params(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // GROUPCONTROL_TESTSUITE_H
