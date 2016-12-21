#pragma once
// MESSAGE MAN_SET_FLYING_MODE PACKING

#define MAVLINK_MSG_ID_MAN_SET_FLYING_MODE 201

MAVPACKED(
typedef struct __mavlink_man_set_flying_mode_t {
 uint8_t flyingMode; /*< */
}) mavlink_man_set_flying_mode_t;

#define MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN 1
#define MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_MIN_LEN 1
#define MAVLINK_MSG_ID_201_LEN 1
#define MAVLINK_MSG_ID_201_MIN_LEN 1

#define MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_CRC 55
#define MAVLINK_MSG_ID_201_CRC 55



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MAN_SET_FLYING_MODE { \
    201, \
    "MAN_SET_FLYING_MODE", \
    1, \
    {  { "flyingMode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_man_set_flying_mode_t, flyingMode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MAN_SET_FLYING_MODE { \
    "MAN_SET_FLYING_MODE", \
    1, \
    {  { "flyingMode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_man_set_flying_mode_t, flyingMode) }, \
         } \
}
#endif

/**
 * @brief Pack a man_set_flying_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param flyingMode 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_man_set_flying_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t flyingMode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN];
    _mav_put_uint8_t(buf, 0, flyingMode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN);
#else
    mavlink_man_set_flying_mode_t packet;
    packet.flyingMode = flyingMode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAN_SET_FLYING_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_MIN_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_CRC);
}

/**
 * @brief Pack a man_set_flying_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flyingMode 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_man_set_flying_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t flyingMode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN];
    _mav_put_uint8_t(buf, 0, flyingMode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN);
#else
    mavlink_man_set_flying_mode_t packet;
    packet.flyingMode = flyingMode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAN_SET_FLYING_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_MIN_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_CRC);
}

/**
 * @brief Encode a man_set_flying_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param man_set_flying_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_man_set_flying_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_man_set_flying_mode_t* man_set_flying_mode)
{
    return mavlink_msg_man_set_flying_mode_pack(system_id, component_id, msg, man_set_flying_mode->flyingMode);
}

/**
 * @brief Encode a man_set_flying_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param man_set_flying_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_man_set_flying_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_man_set_flying_mode_t* man_set_flying_mode)
{
    return mavlink_msg_man_set_flying_mode_pack_chan(system_id, component_id, chan, msg, man_set_flying_mode->flyingMode);
}

/**
 * @brief Send a man_set_flying_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param flyingMode 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_man_set_flying_mode_send(mavlink_channel_t chan, uint8_t flyingMode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN];
    _mav_put_uint8_t(buf, 0, flyingMode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE, buf, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_MIN_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_CRC);
#else
    mavlink_man_set_flying_mode_t packet;
    packet.flyingMode = flyingMode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE, (const char *)&packet, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_MIN_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_CRC);
#endif
}

/**
 * @brief Send a man_set_flying_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_man_set_flying_mode_send_struct(mavlink_channel_t chan, const mavlink_man_set_flying_mode_t* man_set_flying_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_man_set_flying_mode_send(chan, man_set_flying_mode->flyingMode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE, (const char *)man_set_flying_mode, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_MIN_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_man_set_flying_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t flyingMode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, flyingMode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE, buf, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_MIN_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_CRC);
#else
    mavlink_man_set_flying_mode_t *packet = (mavlink_man_set_flying_mode_t *)msgbuf;
    packet->flyingMode = flyingMode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE, (const char *)packet, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_MIN_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE MAN_SET_FLYING_MODE UNPACKING


/**
 * @brief Get field flyingMode from man_set_flying_mode message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_man_set_flying_mode_get_flyingMode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a man_set_flying_mode message into a struct
 *
 * @param msg The message to decode
 * @param man_set_flying_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_man_set_flying_mode_decode(const mavlink_message_t* msg, mavlink_man_set_flying_mode_t* man_set_flying_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    man_set_flying_mode->flyingMode = mavlink_msg_man_set_flying_mode_get_flyingMode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN? msg->len : MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN;
        memset(man_set_flying_mode, 0, MAVLINK_MSG_ID_MAN_SET_FLYING_MODE_LEN);
    memcpy(man_set_flying_mode, _MAV_PAYLOAD(msg), len);
#endif
}
