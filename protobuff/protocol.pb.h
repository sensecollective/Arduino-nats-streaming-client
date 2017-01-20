/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.7 at Wed Jan 18 15:45:30 2017. */

#ifndef PB_PROTOCOL_PB_H_INCLUDED
#define PB_PROTOCOL_PB_H_INCLUDED
#include "./pb/pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _StartPosition {
    StartPosition_NewOnly = 0,
    StartPosition_LastReceived = 1,
    StartPosition_TimeDeltaStart = 2,
    StartPosition_SequenceStart = 3,
    StartPosition_First = 4
} StartPosition;
#define _StartPosition_MIN StartPosition_NewOnly
#define _StartPosition_MAX StartPosition_First
#define _StartPosition_ARRAYSIZE ((StartPosition)(StartPosition_First+1))

/* Struct definitions */
typedef struct _Ack {
    char subject[128];
    uint64_t sequence;
/* @@protoc_insertion_point(struct:Ack) */
} Ack;

typedef struct _CloseRequest {
    char clientID[128];
/* @@protoc_insertion_point(struct:CloseRequest) */
} CloseRequest;

typedef struct _CloseResponse {
    char error[128];
/* @@protoc_insertion_point(struct:CloseResponse) */
} CloseResponse;

typedef struct _ConnectRequest {
    char clientID[128];
    char heartbeatInbox[128];
/* @@protoc_insertion_point(struct:ConnectRequest) */
} ConnectRequest;

typedef struct _ConnectResponse {
    char pubPrefix[128];
    char subRequests[128];
    char unsubRequests[128];
    char closeRequests[128];
    char error[128];
    char subCloseRequests[128];
    char publicKey[128];
/* @@protoc_insertion_point(struct:ConnectResponse) */
} ConnectResponse;

typedef PB_BYTES_ARRAY_T(128) MsgProto_data_t;
typedef struct _MsgProto {
    uint64_t sequence;
    char subject[128];
    char reply[128];
    MsgProto_data_t data;
    int64_t timestamp;
    bool redelivered;
    uint32_t CRC32;
/* @@protoc_insertion_point(struct:MsgProto) */
} MsgProto;

typedef struct _PubAck {
    char guid[128];
    char error[128];
/* @@protoc_insertion_point(struct:PubAck) */
} PubAck;

typedef PB_BYTES_ARRAY_T(128) PubMsg_data_t;
typedef PB_BYTES_ARRAY_T(128) PubMsg_sha256_t;
typedef struct _PubMsg {
    char clientID[128];
    char guid[128];
    char subject[128];
    char reply[128];
    PubMsg_data_t data;
    PubMsg_sha256_t sha256;
/* @@protoc_insertion_point(struct:PubMsg) */
} PubMsg;

typedef struct _SubscriptionRequest {
    char clientID[128];
    char subject[128];
    char qGroup[128];
    char inbox[128];
    int32_t maxInFlight;
    int32_t ackWaitInSecs;
    char durableName[128];
    StartPosition startPosition;
    uint64_t startSequence;
    int64_t startTimeDelta;
/* @@protoc_insertion_point(struct:SubscriptionRequest) */
} SubscriptionRequest;

typedef struct _SubscriptionResponse {
    char ackInbox[128];
    char error[128];
/* @@protoc_insertion_point(struct:SubscriptionResponse) */
} SubscriptionResponse;

typedef struct _UnsubscribeRequest {
    char clientID[128];
    char subject[128];
    char inbox[128];
    char durableName[128];
/* @@protoc_insertion_point(struct:UnsubscribeRequest) */
} UnsubscribeRequest;

/* Default values for struct fields */

/* Initializer values for message structs */
#define PubMsg_init_default                      {"", "", "", "", {0, {0}}, {0, {0}}}
#define PubAck_init_default                      {"", ""}
#define MsgProto_init_default                    {0, "", "", {0, {0}}, 0, 0, 0}
#define Ack_init_default                         {"", 0}
#define ConnectRequest_init_default              {"", ""}
#define ConnectResponse_init_default             {"", "", "", "", "", "", ""}
#define SubscriptionRequest_init_default         {"", "", "", "", 0, 0, "", (StartPosition)0, 0, 0}
#define SubscriptionResponse_init_default        {"", ""}
#define UnsubscribeRequest_init_default          {"", "", "", ""}
#define CloseRequest_init_default                {""}
#define CloseResponse_init_default               {""}
#define PubMsg_init_zero                         {"", "", "", "", {0, {0}}, {0, {0}}}
#define PubAck_init_zero                         {"", ""}
#define MsgProto_init_zero                       {0, "", "", {0, {0}}, 0, 0, 0}
#define Ack_init_zero                            {"", 0}
#define ConnectRequest_init_zero                 {"", ""}
#define ConnectResponse_init_zero                {"", "", "", "", "", "", ""}
#define SubscriptionRequest_init_zero            {"", "", "", "", 0, 0, "", (StartPosition)0, 0, 0}
#define SubscriptionResponse_init_zero           {"", ""}
#define UnsubscribeRequest_init_zero             {"", "", "", ""}
#define CloseRequest_init_zero                   {""}
#define CloseResponse_init_zero                  {""}

/* Field tags (for use in manual encoding/decoding) */
#define Ack_subject_tag                          1
#define Ack_sequence_tag                         2
#define CloseRequest_clientID_tag                1
#define CloseResponse_error_tag                  1
#define ConnectRequest_clientID_tag              1
#define ConnectRequest_heartbeatInbox_tag        2
#define ConnectResponse_pubPrefix_tag            1
#define ConnectResponse_subRequests_tag          2
#define ConnectResponse_unsubRequests_tag        3
#define ConnectResponse_closeRequests_tag        4
#define ConnectResponse_error_tag                5
#define ConnectResponse_subCloseRequests_tag     6
#define ConnectResponse_publicKey_tag            100
#define MsgProto_sequence_tag                    1
#define MsgProto_subject_tag                     2
#define MsgProto_reply_tag                       3
#define MsgProto_data_tag                        4
#define MsgProto_timestamp_tag                   5
#define MsgProto_redelivered_tag                 6
#define MsgProto_CRC32_tag                       10
#define PubAck_guid_tag                          1
#define PubAck_error_tag                         2
#define PubMsg_clientID_tag                      1
#define PubMsg_guid_tag                          2
#define PubMsg_subject_tag                       3
#define PubMsg_reply_tag                         4
#define PubMsg_data_tag                          5
#define PubMsg_sha256_tag                        10
#define SubscriptionRequest_clientID_tag         1
#define SubscriptionRequest_subject_tag          2
#define SubscriptionRequest_qGroup_tag           3
#define SubscriptionRequest_inbox_tag            4
#define SubscriptionRequest_maxInFlight_tag      5
#define SubscriptionRequest_ackWaitInSecs_tag    6
#define SubscriptionRequest_durableName_tag      7
#define SubscriptionRequest_startPosition_tag    10
#define SubscriptionRequest_startSequence_tag    11
#define SubscriptionRequest_startTimeDelta_tag   12
#define SubscriptionResponse_ackInbox_tag        2
#define SubscriptionResponse_error_tag           3
#define UnsubscribeRequest_clientID_tag          1
#define UnsubscribeRequest_subject_tag           2
#define UnsubscribeRequest_inbox_tag             3
#define UnsubscribeRequest_durableName_tag       4

/* Struct field encoding specification for nanopb */
extern const pb_field_t PubMsg_fields[7];
extern const pb_field_t PubAck_fields[3];
extern const pb_field_t MsgProto_fields[8];
extern const pb_field_t Ack_fields[3];
extern const pb_field_t ConnectRequest_fields[3];
extern const pb_field_t ConnectResponse_fields[8];
extern const pb_field_t SubscriptionRequest_fields[11];
extern const pb_field_t SubscriptionResponse_fields[3];
extern const pb_field_t UnsubscribeRequest_fields[5];
extern const pb_field_t CloseRequest_fields[2];
extern const pb_field_t CloseResponse_fields[2];

/* Maximum encoded size of messages (where known) */
#define PubMsg_size                              786
#define PubAck_size                              262
#define MsgProto_size                            423
#define Ack_size                                 142
#define ConnectRequest_size                      262
#define ConnectResponse_size                     918
#define SubscriptionRequest_size                 701
#define SubscriptionResponse_size                262
#define UnsubscribeRequest_size                  524
#define CloseRequest_size                        131
#define CloseResponse_size                       131

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTOCOL_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
