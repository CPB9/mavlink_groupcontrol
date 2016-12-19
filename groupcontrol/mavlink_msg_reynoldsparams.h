#pragma once
// MESSAGE ReynoldsParams PACKING

#define MAVLINK_MSG_ID_ReynoldsParams 203

MAVPACKED(
typedef struct __mavlink_reynoldsparams_t {
 float kc; /*< gravity coeff*/
 float ks; /*< repulsive coeff*/
 float ka; /*< speed alignment coeff*/
 float kp; /*< chasing coeff*/
 float km; /*< waypoint gravity coeff*/
 float kh; /*< rotate speed coeff*/
 float vmax; /*< max autopilot velocity*/
 float rn; /*< search radius of groupmate */
 float rs; /*< repulsiveOn radius*/
 float rm; /*< getting waypoint radius*/
 float rmb; /*< change gravity law radius*/
}) mavlink_reynoldsparams_t;

#define MAVLINK_MSG_ID_ReynoldsParams_LEN 44
#define MAVLINK_MSG_ID_ReynoldsParams_MIN_LEN 44
#define MAVLINK_MSG_ID_203_LEN 44
#define MAVLINK_MSG_ID_203_MIN_LEN 44

#define MAVLINK_MSG_ID_ReynoldsParams_CRC 147
#define MAVLINK_MSG_ID_203_CRC 147



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ReynoldsParams { \
    203, \
    "ReynoldsParams", \
    11, \
    {  { "kc", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_reynoldsparams_t, kc) }, \
         { "ks", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_reynoldsparams_t, ks) }, \
         { "ka", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_reynoldsparams_t, ka) }, \
         { "kp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_reynoldsparams_t, kp) }, \
         { "km", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_reynoldsparams_t, km) }, \
         { "kh", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_reynoldsparams_t, kh) }, \
         { "vmax", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_reynoldsparams_t, vmax) }, \
         { "rn", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_reynoldsparams_t, rn) }, \
         { "rs", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_reynoldsparams_t, rs) }, \
         { "rm", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_reynoldsparams_t, rm) }, \
         { "rmb", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_reynoldsparams_t, rmb) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ReynoldsParams { \
    "ReynoldsParams", \
    11, \
    {  { "kc", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_reynoldsparams_t, kc) }, \
         { "ks", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_reynoldsparams_t, ks) }, \
         { "ka", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_reynoldsparams_t, ka) }, \
         { "kp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_reynoldsparams_t, kp) }, \
         { "km", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_reynoldsparams_t, km) }, \
         { "kh", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_reynoldsparams_t, kh) }, \
         { "vmax", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_reynoldsparams_t, vmax) }, \
         { "rn", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_reynoldsparams_t, rn) }, \
         { "rs", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_reynoldsparams_t, rs) }, \
         { "rm", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_reynoldsparams_t, rm) }, \
         { "rmb", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_reynoldsparams_t, rmb) }, \
         } \
}
#endif

/**
 * @brief Pack a reynoldsparams message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param kc gravity coeff
 * @param ks repulsive coeff
 * @param ka speed alignment coeff
 * @param kp chasing coeff
 * @param km waypoint gravity coeff
 * @param kh rotate speed coeff
 * @param vmax max autopilot velocity
 * @param rn search radius of groupmate 
 * @param rs repulsiveOn radius
 * @param rm getting waypoint radius
 * @param rmb change gravity law radius
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_reynoldsparams_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float kc, float ks, float ka, float kp, float km, float kh, float vmax, float rn, float rs, float rm, float rmb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ReynoldsParams_LEN];
    _mav_put_float(buf, 0, kc);
    _mav_put_float(buf, 4, ks);
    _mav_put_float(buf, 8, ka);
    _mav_put_float(buf, 12, kp);
    _mav_put_float(buf, 16, km);
    _mav_put_float(buf, 20, kh);
    _mav_put_float(buf, 24, vmax);
    _mav_put_float(buf, 28, rn);
    _mav_put_float(buf, 32, rs);
    _mav_put_float(buf, 36, rm);
    _mav_put_float(buf, 40, rmb);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ReynoldsParams_LEN);
#else
    mavlink_reynoldsparams_t packet;
    packet.kc = kc;
    packet.ks = ks;
    packet.ka = ka;
    packet.kp = kp;
    packet.km = km;
    packet.kh = kh;
    packet.vmax = vmax;
    packet.rn = rn;
    packet.rs = rs;
    packet.rm = rm;
    packet.rmb = rmb;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ReynoldsParams_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ReynoldsParams;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ReynoldsParams_MIN_LEN, MAVLINK_MSG_ID_ReynoldsParams_LEN, MAVLINK_MSG_ID_ReynoldsParams_CRC);
}

/**
 * @brief Pack a reynoldsparams message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kc gravity coeff
 * @param ks repulsive coeff
 * @param ka speed alignment coeff
 * @param kp chasing coeff
 * @param km waypoint gravity coeff
 * @param kh rotate speed coeff
 * @param vmax max autopilot velocity
 * @param rn search radius of groupmate 
 * @param rs repulsiveOn radius
 * @param rm getting waypoint radius
 * @param rmb change gravity law radius
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_reynoldsparams_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float kc,float ks,float ka,float kp,float km,float kh,float vmax,float rn,float rs,float rm,float rmb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ReynoldsParams_LEN];
    _mav_put_float(buf, 0, kc);
    _mav_put_float(buf, 4, ks);
    _mav_put_float(buf, 8, ka);
    _mav_put_float(buf, 12, kp);
    _mav_put_float(buf, 16, km);
    _mav_put_float(buf, 20, kh);
    _mav_put_float(buf, 24, vmax);
    _mav_put_float(buf, 28, rn);
    _mav_put_float(buf, 32, rs);
    _mav_put_float(buf, 36, rm);
    _mav_put_float(buf, 40, rmb);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ReynoldsParams_LEN);
#else
    mavlink_reynoldsparams_t packet;
    packet.kc = kc;
    packet.ks = ks;
    packet.ka = ka;
    packet.kp = kp;
    packet.km = km;
    packet.kh = kh;
    packet.vmax = vmax;
    packet.rn = rn;
    packet.rs = rs;
    packet.rm = rm;
    packet.rmb = rmb;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ReynoldsParams_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ReynoldsParams;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ReynoldsParams_MIN_LEN, MAVLINK_MSG_ID_ReynoldsParams_LEN, MAVLINK_MSG_ID_ReynoldsParams_CRC);
}

/**
 * @brief Encode a reynoldsparams struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param reynoldsparams C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_reynoldsparams_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_reynoldsparams_t* reynoldsparams)
{
    return mavlink_msg_reynoldsparams_pack(system_id, component_id, msg, reynoldsparams->kc, reynoldsparams->ks, reynoldsparams->ka, reynoldsparams->kp, reynoldsparams->km, reynoldsparams->kh, reynoldsparams->vmax, reynoldsparams->rn, reynoldsparams->rs, reynoldsparams->rm, reynoldsparams->rmb);
}

/**
 * @brief Encode a reynoldsparams struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param reynoldsparams C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_reynoldsparams_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_reynoldsparams_t* reynoldsparams)
{
    return mavlink_msg_reynoldsparams_pack_chan(system_id, component_id, chan, msg, reynoldsparams->kc, reynoldsparams->ks, reynoldsparams->ka, reynoldsparams->kp, reynoldsparams->km, reynoldsparams->kh, reynoldsparams->vmax, reynoldsparams->rn, reynoldsparams->rs, reynoldsparams->rm, reynoldsparams->rmb);
}

/**
 * @brief Send a reynoldsparams message
 * @param chan MAVLink channel to send the message
 *
 * @param kc gravity coeff
 * @param ks repulsive coeff
 * @param ka speed alignment coeff
 * @param kp chasing coeff
 * @param km waypoint gravity coeff
 * @param kh rotate speed coeff
 * @param vmax max autopilot velocity
 * @param rn search radius of groupmate 
 * @param rs repulsiveOn radius
 * @param rm getting waypoint radius
 * @param rmb change gravity law radius
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_reynoldsparams_send(mavlink_channel_t chan, float kc, float ks, float ka, float kp, float km, float kh, float vmax, float rn, float rs, float rm, float rmb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ReynoldsParams_LEN];
    _mav_put_float(buf, 0, kc);
    _mav_put_float(buf, 4, ks);
    _mav_put_float(buf, 8, ka);
    _mav_put_float(buf, 12, kp);
    _mav_put_float(buf, 16, km);
    _mav_put_float(buf, 20, kh);
    _mav_put_float(buf, 24, vmax);
    _mav_put_float(buf, 28, rn);
    _mav_put_float(buf, 32, rs);
    _mav_put_float(buf, 36, rm);
    _mav_put_float(buf, 40, rmb);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ReynoldsParams, buf, MAVLINK_MSG_ID_ReynoldsParams_MIN_LEN, MAVLINK_MSG_ID_ReynoldsParams_LEN, MAVLINK_MSG_ID_ReynoldsParams_CRC);
#else
    mavlink_reynoldsparams_t packet;
    packet.kc = kc;
    packet.ks = ks;
    packet.ka = ka;
    packet.kp = kp;
    packet.km = km;
    packet.kh = kh;
    packet.vmax = vmax;
    packet.rn = rn;
    packet.rs = rs;
    packet.rm = rm;
    packet.rmb = rmb;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ReynoldsParams, (const char *)&packet, MAVLINK_MSG_ID_ReynoldsParams_MIN_LEN, MAVLINK_MSG_ID_ReynoldsParams_LEN, MAVLINK_MSG_ID_ReynoldsParams_CRC);
#endif
}

/**
 * @brief Send a reynoldsparams message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_reynoldsparams_send_struct(mavlink_channel_t chan, const mavlink_reynoldsparams_t* reynoldsparams)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_reynoldsparams_send(chan, reynoldsparams->kc, reynoldsparams->ks, reynoldsparams->ka, reynoldsparams->kp, reynoldsparams->km, reynoldsparams->kh, reynoldsparams->vmax, reynoldsparams->rn, reynoldsparams->rs, reynoldsparams->rm, reynoldsparams->rmb);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ReynoldsParams, (const char *)reynoldsparams, MAVLINK_MSG_ID_ReynoldsParams_MIN_LEN, MAVLINK_MSG_ID_ReynoldsParams_LEN, MAVLINK_MSG_ID_ReynoldsParams_CRC);
#endif
}

#if MAVLINK_MSG_ID_ReynoldsParams_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_reynoldsparams_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float kc, float ks, float ka, float kp, float km, float kh, float vmax, float rn, float rs, float rm, float rmb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, kc);
    _mav_put_float(buf, 4, ks);
    _mav_put_float(buf, 8, ka);
    _mav_put_float(buf, 12, kp);
    _mav_put_float(buf, 16, km);
    _mav_put_float(buf, 20, kh);
    _mav_put_float(buf, 24, vmax);
    _mav_put_float(buf, 28, rn);
    _mav_put_float(buf, 32, rs);
    _mav_put_float(buf, 36, rm);
    _mav_put_float(buf, 40, rmb);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ReynoldsParams, buf, MAVLINK_MSG_ID_ReynoldsParams_MIN_LEN, MAVLINK_MSG_ID_ReynoldsParams_LEN, MAVLINK_MSG_ID_ReynoldsParams_CRC);
#else
    mavlink_reynoldsparams_t *packet = (mavlink_reynoldsparams_t *)msgbuf;
    packet->kc = kc;
    packet->ks = ks;
    packet->ka = ka;
    packet->kp = kp;
    packet->km = km;
    packet->kh = kh;
    packet->vmax = vmax;
    packet->rn = rn;
    packet->rs = rs;
    packet->rm = rm;
    packet->rmb = rmb;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ReynoldsParams, (const char *)packet, MAVLINK_MSG_ID_ReynoldsParams_MIN_LEN, MAVLINK_MSG_ID_ReynoldsParams_LEN, MAVLINK_MSG_ID_ReynoldsParams_CRC);
#endif
}
#endif

#endif

// MESSAGE ReynoldsParams UNPACKING


/**
 * @brief Get field kc from reynoldsparams message
 *
 * @return gravity coeff
 */
static inline float mavlink_msg_reynoldsparams_get_kc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field ks from reynoldsparams message
 *
 * @return repulsive coeff
 */
static inline float mavlink_msg_reynoldsparams_get_ks(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field ka from reynoldsparams message
 *
 * @return speed alignment coeff
 */
static inline float mavlink_msg_reynoldsparams_get_ka(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field kp from reynoldsparams message
 *
 * @return chasing coeff
 */
static inline float mavlink_msg_reynoldsparams_get_kp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field km from reynoldsparams message
 *
 * @return waypoint gravity coeff
 */
static inline float mavlink_msg_reynoldsparams_get_km(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field kh from reynoldsparams message
 *
 * @return rotate speed coeff
 */
static inline float mavlink_msg_reynoldsparams_get_kh(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vmax from reynoldsparams message
 *
 * @return max autopilot velocity
 */
static inline float mavlink_msg_reynoldsparams_get_vmax(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field rn from reynoldsparams message
 *
 * @return search radius of groupmate 
 */
static inline float mavlink_msg_reynoldsparams_get_rn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field rs from reynoldsparams message
 *
 * @return repulsiveOn radius
 */
static inline float mavlink_msg_reynoldsparams_get_rs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field rm from reynoldsparams message
 *
 * @return getting waypoint radius
 */
static inline float mavlink_msg_reynoldsparams_get_rm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field rmb from reynoldsparams message
 *
 * @return change gravity law radius
 */
static inline float mavlink_msg_reynoldsparams_get_rmb(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Decode a reynoldsparams message into a struct
 *
 * @param msg The message to decode
 * @param reynoldsparams C-struct to decode the message contents into
 */
static inline void mavlink_msg_reynoldsparams_decode(const mavlink_message_t* msg, mavlink_reynoldsparams_t* reynoldsparams)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    reynoldsparams->kc = mavlink_msg_reynoldsparams_get_kc(msg);
    reynoldsparams->ks = mavlink_msg_reynoldsparams_get_ks(msg);
    reynoldsparams->ka = mavlink_msg_reynoldsparams_get_ka(msg);
    reynoldsparams->kp = mavlink_msg_reynoldsparams_get_kp(msg);
    reynoldsparams->km = mavlink_msg_reynoldsparams_get_km(msg);
    reynoldsparams->kh = mavlink_msg_reynoldsparams_get_kh(msg);
    reynoldsparams->vmax = mavlink_msg_reynoldsparams_get_vmax(msg);
    reynoldsparams->rn = mavlink_msg_reynoldsparams_get_rn(msg);
    reynoldsparams->rs = mavlink_msg_reynoldsparams_get_rs(msg);
    reynoldsparams->rm = mavlink_msg_reynoldsparams_get_rm(msg);
    reynoldsparams->rmb = mavlink_msg_reynoldsparams_get_rmb(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ReynoldsParams_LEN? msg->len : MAVLINK_MSG_ID_ReynoldsParams_LEN;
        memset(reynoldsparams, 0, MAVLINK_MSG_ID_ReynoldsParams_LEN);
    memcpy(reynoldsparams, _MAV_PAYLOAD(msg), len);
#endif
}
