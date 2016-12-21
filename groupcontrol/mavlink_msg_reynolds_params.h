#pragma once
// MESSAGE REYNOLDS_PARAMS PACKING

#define MAVLINK_MSG_ID_REYNOLDS_PARAMS 210

MAVPACKED(
typedef struct __mavlink_reynolds_params_t {
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
}) mavlink_reynolds_params_t;

#define MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN 44
#define MAVLINK_MSG_ID_REYNOLDS_PARAMS_MIN_LEN 44
#define MAVLINK_MSG_ID_210_LEN 44
#define MAVLINK_MSG_ID_210_MIN_LEN 44

#define MAVLINK_MSG_ID_REYNOLDS_PARAMS_CRC 106
#define MAVLINK_MSG_ID_210_CRC 106



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_REYNOLDS_PARAMS { \
    210, \
    "REYNOLDS_PARAMS", \
    11, \
    {  { "kc", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_reynolds_params_t, kc) }, \
         { "ks", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_reynolds_params_t, ks) }, \
         { "ka", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_reynolds_params_t, ka) }, \
         { "kp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_reynolds_params_t, kp) }, \
         { "km", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_reynolds_params_t, km) }, \
         { "kh", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_reynolds_params_t, kh) }, \
         { "vmax", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_reynolds_params_t, vmax) }, \
         { "rn", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_reynolds_params_t, rn) }, \
         { "rs", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_reynolds_params_t, rs) }, \
         { "rm", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_reynolds_params_t, rm) }, \
         { "rmb", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_reynolds_params_t, rmb) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_REYNOLDS_PARAMS { \
    "REYNOLDS_PARAMS", \
    11, \
    {  { "kc", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_reynolds_params_t, kc) }, \
         { "ks", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_reynolds_params_t, ks) }, \
         { "ka", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_reynolds_params_t, ka) }, \
         { "kp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_reynolds_params_t, kp) }, \
         { "km", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_reynolds_params_t, km) }, \
         { "kh", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_reynolds_params_t, kh) }, \
         { "vmax", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_reynolds_params_t, vmax) }, \
         { "rn", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_reynolds_params_t, rn) }, \
         { "rs", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_reynolds_params_t, rs) }, \
         { "rm", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_reynolds_params_t, rm) }, \
         { "rmb", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_reynolds_params_t, rmb) }, \
         } \
}
#endif

/**
 * @brief Pack a reynolds_params message
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
static inline uint16_t mavlink_msg_reynolds_params_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float kc, float ks, float ka, float kp, float km, float kh, float vmax, float rn, float rs, float rm, float rmb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN];
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN);
#else
    mavlink_reynolds_params_t packet;
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REYNOLDS_PARAMS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_REYNOLDS_PARAMS_MIN_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_CRC);
}

/**
 * @brief Pack a reynolds_params message on a channel
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
static inline uint16_t mavlink_msg_reynolds_params_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float kc,float ks,float ka,float kp,float km,float kh,float vmax,float rn,float rs,float rm,float rmb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN];
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN);
#else
    mavlink_reynolds_params_t packet;
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REYNOLDS_PARAMS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_REYNOLDS_PARAMS_MIN_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_CRC);
}

/**
 * @brief Encode a reynolds_params struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param reynolds_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_reynolds_params_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_reynolds_params_t* reynolds_params)
{
    return mavlink_msg_reynolds_params_pack(system_id, component_id, msg, reynolds_params->kc, reynolds_params->ks, reynolds_params->ka, reynolds_params->kp, reynolds_params->km, reynolds_params->kh, reynolds_params->vmax, reynolds_params->rn, reynolds_params->rs, reynolds_params->rm, reynolds_params->rmb);
}

/**
 * @brief Encode a reynolds_params struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param reynolds_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_reynolds_params_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_reynolds_params_t* reynolds_params)
{
    return mavlink_msg_reynolds_params_pack_chan(system_id, component_id, chan, msg, reynolds_params->kc, reynolds_params->ks, reynolds_params->ka, reynolds_params->kp, reynolds_params->km, reynolds_params->kh, reynolds_params->vmax, reynolds_params->rn, reynolds_params->rs, reynolds_params->rm, reynolds_params->rmb);
}

/**
 * @brief Send a reynolds_params message
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

static inline void mavlink_msg_reynolds_params_send(mavlink_channel_t chan, float kc, float ks, float ka, float kp, float km, float kh, float vmax, float rn, float rs, float rm, float rmb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN];
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REYNOLDS_PARAMS, buf, MAVLINK_MSG_ID_REYNOLDS_PARAMS_MIN_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_CRC);
#else
    mavlink_reynolds_params_t packet;
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REYNOLDS_PARAMS, (const char *)&packet, MAVLINK_MSG_ID_REYNOLDS_PARAMS_MIN_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_CRC);
#endif
}

/**
 * @brief Send a reynolds_params message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_reynolds_params_send_struct(mavlink_channel_t chan, const mavlink_reynolds_params_t* reynolds_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_reynolds_params_send(chan, reynolds_params->kc, reynolds_params->ks, reynolds_params->ka, reynolds_params->kp, reynolds_params->km, reynolds_params->kh, reynolds_params->vmax, reynolds_params->rn, reynolds_params->rs, reynolds_params->rm, reynolds_params->rmb);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REYNOLDS_PARAMS, (const char *)reynolds_params, MAVLINK_MSG_ID_REYNOLDS_PARAMS_MIN_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_CRC);
#endif
}

#if MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_reynolds_params_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float kc, float ks, float ka, float kp, float km, float kh, float vmax, float rn, float rs, float rm, float rmb)
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REYNOLDS_PARAMS, buf, MAVLINK_MSG_ID_REYNOLDS_PARAMS_MIN_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_CRC);
#else
    mavlink_reynolds_params_t *packet = (mavlink_reynolds_params_t *)msgbuf;
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REYNOLDS_PARAMS, (const char *)packet, MAVLINK_MSG_ID_REYNOLDS_PARAMS_MIN_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN, MAVLINK_MSG_ID_REYNOLDS_PARAMS_CRC);
#endif
}
#endif

#endif

// MESSAGE REYNOLDS_PARAMS UNPACKING


/**
 * @brief Get field kc from reynolds_params message
 *
 * @return gravity coeff
 */
static inline float mavlink_msg_reynolds_params_get_kc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field ks from reynolds_params message
 *
 * @return repulsive coeff
 */
static inline float mavlink_msg_reynolds_params_get_ks(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field ka from reynolds_params message
 *
 * @return speed alignment coeff
 */
static inline float mavlink_msg_reynolds_params_get_ka(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field kp from reynolds_params message
 *
 * @return chasing coeff
 */
static inline float mavlink_msg_reynolds_params_get_kp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field km from reynolds_params message
 *
 * @return waypoint gravity coeff
 */
static inline float mavlink_msg_reynolds_params_get_km(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field kh from reynolds_params message
 *
 * @return rotate speed coeff
 */
static inline float mavlink_msg_reynolds_params_get_kh(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vmax from reynolds_params message
 *
 * @return max autopilot velocity
 */
static inline float mavlink_msg_reynolds_params_get_vmax(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field rn from reynolds_params message
 *
 * @return search radius of groupmate 
 */
static inline float mavlink_msg_reynolds_params_get_rn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field rs from reynolds_params message
 *
 * @return repulsiveOn radius
 */
static inline float mavlink_msg_reynolds_params_get_rs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field rm from reynolds_params message
 *
 * @return getting waypoint radius
 */
static inline float mavlink_msg_reynolds_params_get_rm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field rmb from reynolds_params message
 *
 * @return change gravity law radius
 */
static inline float mavlink_msg_reynolds_params_get_rmb(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Decode a reynolds_params message into a struct
 *
 * @param msg The message to decode
 * @param reynolds_params C-struct to decode the message contents into
 */
static inline void mavlink_msg_reynolds_params_decode(const mavlink_message_t* msg, mavlink_reynolds_params_t* reynolds_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    reynolds_params->kc = mavlink_msg_reynolds_params_get_kc(msg);
    reynolds_params->ks = mavlink_msg_reynolds_params_get_ks(msg);
    reynolds_params->ka = mavlink_msg_reynolds_params_get_ka(msg);
    reynolds_params->kp = mavlink_msg_reynolds_params_get_kp(msg);
    reynolds_params->km = mavlink_msg_reynolds_params_get_km(msg);
    reynolds_params->kh = mavlink_msg_reynolds_params_get_kh(msg);
    reynolds_params->vmax = mavlink_msg_reynolds_params_get_vmax(msg);
    reynolds_params->rn = mavlink_msg_reynolds_params_get_rn(msg);
    reynolds_params->rs = mavlink_msg_reynolds_params_get_rs(msg);
    reynolds_params->rm = mavlink_msg_reynolds_params_get_rm(msg);
    reynolds_params->rmb = mavlink_msg_reynolds_params_get_rmb(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN? msg->len : MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN;
        memset(reynolds_params, 0, MAVLINK_MSG_ID_REYNOLDS_PARAMS_LEN);
    memcpy(reynolds_params, _MAV_PAYLOAD(msg), len);
#endif
}
