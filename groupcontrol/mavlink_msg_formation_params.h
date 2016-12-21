#pragma once
// MESSAGE FORMATION_PARAMS PACKING

#define MAVLINK_MSG_ID_FORMATION_PARAMS 209

MAVPACKED(
typedef struct __mavlink_formation_params_t {
 float param1; /*< some param*/
 float param2; /*< some param*/
}) mavlink_formation_params_t;

#define MAVLINK_MSG_ID_FORMATION_PARAMS_LEN 8
#define MAVLINK_MSG_ID_FORMATION_PARAMS_MIN_LEN 8
#define MAVLINK_MSG_ID_209_LEN 8
#define MAVLINK_MSG_ID_209_MIN_LEN 8

#define MAVLINK_MSG_ID_FORMATION_PARAMS_CRC 17
#define MAVLINK_MSG_ID_209_CRC 17



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FORMATION_PARAMS { \
    209, \
    "FORMATION_PARAMS", \
    2, \
    {  { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_formation_params_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_formation_params_t, param2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FORMATION_PARAMS { \
    "FORMATION_PARAMS", \
    2, \
    {  { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_formation_params_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_formation_params_t, param2) }, \
         } \
}
#endif

/**
 * @brief Pack a formation_params message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param param1 some param
 * @param param2 some param
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_formation_params_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float param1, float param2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FORMATION_PARAMS_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN);
#else
    mavlink_formation_params_t packet;
    packet.param1 = param1;
    packet.param2 = param2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FORMATION_PARAMS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FORMATION_PARAMS_MIN_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_CRC);
}

/**
 * @brief Pack a formation_params message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param1 some param
 * @param param2 some param
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_formation_params_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float param1,float param2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FORMATION_PARAMS_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN);
#else
    mavlink_formation_params_t packet;
    packet.param1 = param1;
    packet.param2 = param2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FORMATION_PARAMS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FORMATION_PARAMS_MIN_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_CRC);
}

/**
 * @brief Encode a formation_params struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param formation_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_formation_params_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_formation_params_t* formation_params)
{
    return mavlink_msg_formation_params_pack(system_id, component_id, msg, formation_params->param1, formation_params->param2);
}

/**
 * @brief Encode a formation_params struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param formation_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_formation_params_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_formation_params_t* formation_params)
{
    return mavlink_msg_formation_params_pack_chan(system_id, component_id, chan, msg, formation_params->param1, formation_params->param2);
}

/**
 * @brief Send a formation_params message
 * @param chan MAVLink channel to send the message
 *
 * @param param1 some param
 * @param param2 some param
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_formation_params_send(mavlink_channel_t chan, float param1, float param2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FORMATION_PARAMS_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FORMATION_PARAMS, buf, MAVLINK_MSG_ID_FORMATION_PARAMS_MIN_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_CRC);
#else
    mavlink_formation_params_t packet;
    packet.param1 = param1;
    packet.param2 = param2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FORMATION_PARAMS, (const char *)&packet, MAVLINK_MSG_ID_FORMATION_PARAMS_MIN_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_CRC);
#endif
}

/**
 * @brief Send a formation_params message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_formation_params_send_struct(mavlink_channel_t chan, const mavlink_formation_params_t* formation_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_formation_params_send(chan, formation_params->param1, formation_params->param2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FORMATION_PARAMS, (const char *)formation_params, MAVLINK_MSG_ID_FORMATION_PARAMS_MIN_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_CRC);
#endif
}

#if MAVLINK_MSG_ID_FORMATION_PARAMS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_formation_params_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float param1, float param2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FORMATION_PARAMS, buf, MAVLINK_MSG_ID_FORMATION_PARAMS_MIN_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_CRC);
#else
    mavlink_formation_params_t *packet = (mavlink_formation_params_t *)msgbuf;
    packet->param1 = param1;
    packet->param2 = param2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FORMATION_PARAMS, (const char *)packet, MAVLINK_MSG_ID_FORMATION_PARAMS_MIN_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN, MAVLINK_MSG_ID_FORMATION_PARAMS_CRC);
#endif
}
#endif

#endif

// MESSAGE FORMATION_PARAMS UNPACKING


/**
 * @brief Get field param1 from formation_params message
 *
 * @return some param
 */
static inline float mavlink_msg_formation_params_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param2 from formation_params message
 *
 * @return some param
 */
static inline float mavlink_msg_formation_params_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a formation_params message into a struct
 *
 * @param msg The message to decode
 * @param formation_params C-struct to decode the message contents into
 */
static inline void mavlink_msg_formation_params_decode(const mavlink_message_t* msg, mavlink_formation_params_t* formation_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    formation_params->param1 = mavlink_msg_formation_params_get_param1(msg);
    formation_params->param2 = mavlink_msg_formation_params_get_param2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FORMATION_PARAMS_LEN? msg->len : MAVLINK_MSG_ID_FORMATION_PARAMS_LEN;
        memset(formation_params, 0, MAVLINK_MSG_ID_FORMATION_PARAMS_LEN);
    memcpy(formation_params, _MAV_PAYLOAD(msg), len);
#endif
}
