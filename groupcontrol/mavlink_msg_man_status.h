#pragma once
// MESSAGE MAN_STATUS PACKING

#define MAVLINK_MSG_ID_MAN_STATUS 200

MAVPACKED(
typedef struct __mavlink_man_status_t {
 uint16_t nextWaypointId; /*< Next waypoint id*/
 uint8_t scriptMode; /*< Current Script Mode*/
 uint8_t flyingMode; /*< Current Flying Mode*/
 uint8_t groupId; /*< Devices Group Id*/
 uint8_t devicesCount; /*< Devices Count in Current Group*/
}) mavlink_man_status_t;

#define MAVLINK_MSG_ID_MAN_STATUS_LEN 6
#define MAVLINK_MSG_ID_MAN_STATUS_MIN_LEN 6
#define MAVLINK_MSG_ID_200_LEN 6
#define MAVLINK_MSG_ID_200_MIN_LEN 6

#define MAVLINK_MSG_ID_MAN_STATUS_CRC 221
#define MAVLINK_MSG_ID_200_CRC 221



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MAN_STATUS { \
    200, \
    "MAN_STATUS", \
    5, \
    {  { "nextWaypointId", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_man_status_t, nextWaypointId) }, \
         { "scriptMode", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_man_status_t, scriptMode) }, \
         { "flyingMode", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_man_status_t, flyingMode) }, \
         { "groupId", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_man_status_t, groupId) }, \
         { "devicesCount", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_man_status_t, devicesCount) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MAN_STATUS { \
    "MAN_STATUS", \
    5, \
    {  { "nextWaypointId", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_man_status_t, nextWaypointId) }, \
         { "scriptMode", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_man_status_t, scriptMode) }, \
         { "flyingMode", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_man_status_t, flyingMode) }, \
         { "groupId", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_man_status_t, groupId) }, \
         { "devicesCount", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_man_status_t, devicesCount) }, \
         } \
}
#endif

/**
 * @brief Pack a man_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param scriptMode Current Script Mode
 * @param flyingMode Current Flying Mode
 * @param groupId Devices Group Id
 * @param devicesCount Devices Count in Current Group
 * @param nextWaypointId Next waypoint id
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_man_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t scriptMode, uint8_t flyingMode, uint8_t groupId, uint8_t devicesCount, uint16_t nextWaypointId)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAN_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, nextWaypointId);
    _mav_put_uint8_t(buf, 2, scriptMode);
    _mav_put_uint8_t(buf, 3, flyingMode);
    _mav_put_uint8_t(buf, 4, groupId);
    _mav_put_uint8_t(buf, 5, devicesCount);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAN_STATUS_LEN);
#else
    mavlink_man_status_t packet;
    packet.nextWaypointId = nextWaypointId;
    packet.scriptMode = scriptMode;
    packet.flyingMode = flyingMode;
    packet.groupId = groupId;
    packet.devicesCount = devicesCount;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAN_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAN_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_MAN_STATUS_LEN, MAVLINK_MSG_ID_MAN_STATUS_CRC);
}

/**
 * @brief Pack a man_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param scriptMode Current Script Mode
 * @param flyingMode Current Flying Mode
 * @param groupId Devices Group Id
 * @param devicesCount Devices Count in Current Group
 * @param nextWaypointId Next waypoint id
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_man_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t scriptMode,uint8_t flyingMode,uint8_t groupId,uint8_t devicesCount,uint16_t nextWaypointId)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAN_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, nextWaypointId);
    _mav_put_uint8_t(buf, 2, scriptMode);
    _mav_put_uint8_t(buf, 3, flyingMode);
    _mav_put_uint8_t(buf, 4, groupId);
    _mav_put_uint8_t(buf, 5, devicesCount);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAN_STATUS_LEN);
#else
    mavlink_man_status_t packet;
    packet.nextWaypointId = nextWaypointId;
    packet.scriptMode = scriptMode;
    packet.flyingMode = flyingMode;
    packet.groupId = groupId;
    packet.devicesCount = devicesCount;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAN_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAN_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_MAN_STATUS_LEN, MAVLINK_MSG_ID_MAN_STATUS_CRC);
}

/**
 * @brief Encode a man_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param man_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_man_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_man_status_t* man_status)
{
    return mavlink_msg_man_status_pack(system_id, component_id, msg, man_status->scriptMode, man_status->flyingMode, man_status->groupId, man_status->devicesCount, man_status->nextWaypointId);
}

/**
 * @brief Encode a man_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param man_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_man_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_man_status_t* man_status)
{
    return mavlink_msg_man_status_pack_chan(system_id, component_id, chan, msg, man_status->scriptMode, man_status->flyingMode, man_status->groupId, man_status->devicesCount, man_status->nextWaypointId);
}

/**
 * @brief Send a man_status message
 * @param chan MAVLink channel to send the message
 *
 * @param scriptMode Current Script Mode
 * @param flyingMode Current Flying Mode
 * @param groupId Devices Group Id
 * @param devicesCount Devices Count in Current Group
 * @param nextWaypointId Next waypoint id
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_man_status_send(mavlink_channel_t chan, uint8_t scriptMode, uint8_t flyingMode, uint8_t groupId, uint8_t devicesCount, uint16_t nextWaypointId)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAN_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, nextWaypointId);
    _mav_put_uint8_t(buf, 2, scriptMode);
    _mav_put_uint8_t(buf, 3, flyingMode);
    _mav_put_uint8_t(buf, 4, groupId);
    _mav_put_uint8_t(buf, 5, devicesCount);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAN_STATUS, buf, MAVLINK_MSG_ID_MAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_MAN_STATUS_LEN, MAVLINK_MSG_ID_MAN_STATUS_CRC);
#else
    mavlink_man_status_t packet;
    packet.nextWaypointId = nextWaypointId;
    packet.scriptMode = scriptMode;
    packet.flyingMode = flyingMode;
    packet.groupId = groupId;
    packet.devicesCount = devicesCount;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAN_STATUS, (const char *)&packet, MAVLINK_MSG_ID_MAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_MAN_STATUS_LEN, MAVLINK_MSG_ID_MAN_STATUS_CRC);
#endif
}

/**
 * @brief Send a man_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_man_status_send_struct(mavlink_channel_t chan, const mavlink_man_status_t* man_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_man_status_send(chan, man_status->scriptMode, man_status->flyingMode, man_status->groupId, man_status->devicesCount, man_status->nextWaypointId);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAN_STATUS, (const char *)man_status, MAVLINK_MSG_ID_MAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_MAN_STATUS_LEN, MAVLINK_MSG_ID_MAN_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_MAN_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_man_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t scriptMode, uint8_t flyingMode, uint8_t groupId, uint8_t devicesCount, uint16_t nextWaypointId)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, nextWaypointId);
    _mav_put_uint8_t(buf, 2, scriptMode);
    _mav_put_uint8_t(buf, 3, flyingMode);
    _mav_put_uint8_t(buf, 4, groupId);
    _mav_put_uint8_t(buf, 5, devicesCount);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAN_STATUS, buf, MAVLINK_MSG_ID_MAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_MAN_STATUS_LEN, MAVLINK_MSG_ID_MAN_STATUS_CRC);
#else
    mavlink_man_status_t *packet = (mavlink_man_status_t *)msgbuf;
    packet->nextWaypointId = nextWaypointId;
    packet->scriptMode = scriptMode;
    packet->flyingMode = flyingMode;
    packet->groupId = groupId;
    packet->devicesCount = devicesCount;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAN_STATUS, (const char *)packet, MAVLINK_MSG_ID_MAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_MAN_STATUS_LEN, MAVLINK_MSG_ID_MAN_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE MAN_STATUS UNPACKING


/**
 * @brief Get field scriptMode from man_status message
 *
 * @return Current Script Mode
 */
static inline uint8_t mavlink_msg_man_status_get_scriptMode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field flyingMode from man_status message
 *
 * @return Current Flying Mode
 */
static inline uint8_t mavlink_msg_man_status_get_flyingMode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field groupId from man_status message
 *
 * @return Devices Group Id
 */
static inline uint8_t mavlink_msg_man_status_get_groupId(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field devicesCount from man_status message
 *
 * @return Devices Count in Current Group
 */
static inline uint8_t mavlink_msg_man_status_get_devicesCount(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field nextWaypointId from man_status message
 *
 * @return Next waypoint id
 */
static inline uint16_t mavlink_msg_man_status_get_nextWaypointId(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a man_status message into a struct
 *
 * @param msg The message to decode
 * @param man_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_man_status_decode(const mavlink_message_t* msg, mavlink_man_status_t* man_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    man_status->nextWaypointId = mavlink_msg_man_status_get_nextWaypointId(msg);
    man_status->scriptMode = mavlink_msg_man_status_get_scriptMode(msg);
    man_status->flyingMode = mavlink_msg_man_status_get_flyingMode(msg);
    man_status->groupId = mavlink_msg_man_status_get_groupId(msg);
    man_status->devicesCount = mavlink_msg_man_status_get_devicesCount(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MAN_STATUS_LEN? msg->len : MAVLINK_MSG_ID_MAN_STATUS_LEN;
        memset(man_status, 0, MAVLINK_MSG_ID_MAN_STATUS_LEN);
    memcpy(man_status, _MAV_PAYLOAD(msg), len);
#endif
}
