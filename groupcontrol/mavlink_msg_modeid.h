#pragma once
// MESSAGE ModeId PACKING

#define MAVLINK_MSG_ID_ModeId 202

MAVPACKED(
typedef struct __mavlink_modeid_t {
 uint32_t modeId; /*< ModeiD*/
}) mavlink_modeid_t;

#define MAVLINK_MSG_ID_ModeId_LEN 4
#define MAVLINK_MSG_ID_ModeId_MIN_LEN 4
#define MAVLINK_MSG_ID_202_LEN 4
#define MAVLINK_MSG_ID_202_MIN_LEN 4

#define MAVLINK_MSG_ID_ModeId_CRC 52
#define MAVLINK_MSG_ID_202_CRC 52



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ModeId { \
    202, \
    "ModeId", \
    1, \
    {  { "modeId", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_modeid_t, modeId) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ModeId { \
    "ModeId", \
    1, \
    {  { "modeId", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_modeid_t, modeId) }, \
         } \
}
#endif

/**
 * @brief Pack a modeid message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param modeId ModeiD
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_modeid_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t modeId)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ModeId_LEN];
    _mav_put_uint32_t(buf, 0, modeId);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ModeId_LEN);
#else
    mavlink_modeid_t packet;
    packet.modeId = modeId;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ModeId_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ModeId;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ModeId_MIN_LEN, MAVLINK_MSG_ID_ModeId_LEN, MAVLINK_MSG_ID_ModeId_CRC);
}

/**
 * @brief Pack a modeid message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param modeId ModeiD
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_modeid_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t modeId)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ModeId_LEN];
    _mav_put_uint32_t(buf, 0, modeId);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ModeId_LEN);
#else
    mavlink_modeid_t packet;
    packet.modeId = modeId;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ModeId_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ModeId;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ModeId_MIN_LEN, MAVLINK_MSG_ID_ModeId_LEN, MAVLINK_MSG_ID_ModeId_CRC);
}

/**
 * @brief Encode a modeid struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param modeid C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_modeid_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_modeid_t* modeid)
{
    return mavlink_msg_modeid_pack(system_id, component_id, msg, modeid->modeId);
}

/**
 * @brief Encode a modeid struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param modeid C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_modeid_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_modeid_t* modeid)
{
    return mavlink_msg_modeid_pack_chan(system_id, component_id, chan, msg, modeid->modeId);
}

/**
 * @brief Send a modeid message
 * @param chan MAVLink channel to send the message
 *
 * @param modeId ModeiD
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_modeid_send(mavlink_channel_t chan, uint32_t modeId)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ModeId_LEN];
    _mav_put_uint32_t(buf, 0, modeId);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ModeId, buf, MAVLINK_MSG_ID_ModeId_MIN_LEN, MAVLINK_MSG_ID_ModeId_LEN, MAVLINK_MSG_ID_ModeId_CRC);
#else
    mavlink_modeid_t packet;
    packet.modeId = modeId;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ModeId, (const char *)&packet, MAVLINK_MSG_ID_ModeId_MIN_LEN, MAVLINK_MSG_ID_ModeId_LEN, MAVLINK_MSG_ID_ModeId_CRC);
#endif
}

/**
 * @brief Send a modeid message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_modeid_send_struct(mavlink_channel_t chan, const mavlink_modeid_t* modeid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_modeid_send(chan, modeid->modeId);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ModeId, (const char *)modeid, MAVLINK_MSG_ID_ModeId_MIN_LEN, MAVLINK_MSG_ID_ModeId_LEN, MAVLINK_MSG_ID_ModeId_CRC);
#endif
}

#if MAVLINK_MSG_ID_ModeId_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_modeid_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t modeId)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, modeId);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ModeId, buf, MAVLINK_MSG_ID_ModeId_MIN_LEN, MAVLINK_MSG_ID_ModeId_LEN, MAVLINK_MSG_ID_ModeId_CRC);
#else
    mavlink_modeid_t *packet = (mavlink_modeid_t *)msgbuf;
    packet->modeId = modeId;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ModeId, (const char *)packet, MAVLINK_MSG_ID_ModeId_MIN_LEN, MAVLINK_MSG_ID_ModeId_LEN, MAVLINK_MSG_ID_ModeId_CRC);
#endif
}
#endif

#endif

// MESSAGE ModeId UNPACKING


/**
 * @brief Get field modeId from modeid message
 *
 * @return ModeiD
 */
static inline uint32_t mavlink_msg_modeid_get_modeId(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a modeid message into a struct
 *
 * @param msg The message to decode
 * @param modeid C-struct to decode the message contents into
 */
static inline void mavlink_msg_modeid_decode(const mavlink_message_t* msg, mavlink_modeid_t* modeid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    modeid->modeId = mavlink_msg_modeid_get_modeId(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ModeId_LEN? msg->len : MAVLINK_MSG_ID_ModeId_LEN;
        memset(modeid, 0, MAVLINK_MSG_ID_ModeId_LEN);
    memcpy(modeid, _MAV_PAYLOAD(msg), len);
#endif
}
