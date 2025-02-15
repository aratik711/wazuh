/* Copyright (C) 2015-2019, Wazuh Inc.
 * Copyright (C) 2009 Trend Micro Inc.
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

#ifndef _ERROR_MESSAGES__H
#define _ERROR_MESSAGES__H

/***  Error messages - English ***/

/* SYSTEM ERRORS */
#define FORK_ERROR    "(1101): Could not fork due to [(%d)-(%s)]."
#define MEM_ERROR     "(1102): Could not acquire memory due to [(%d)-(%s)]."
#define FOPEN_ERROR   "(1103): Could not open file '%s' due to [(%d)-(%s)]."
#define SIZE_ERROR    "(1104): Maximum string size reached for: %s."
#define NULL_ERROR    "(1105): Attempted to use null string. "
#define FORMAT_ERROR  "(1106): String not correctly formatted."
#define MKDIR_ERROR   "(1107): Could not create directory '%s' due to [(%d)-(%s)]."
//#define PERM_ERROR    "%s(1108): ERROR: Permission error. Operation not completed."
#define THREAD_ERROR  "(1109): Unable to create new pthread."
//#define READ_ERROR    "%s(1110): ERROR: Unable to read from socket."
#define WAITPID_ERROR "(1111): Error during waitpid()-call due to [(%d)-(%s)]."
#define SETSID_ERROR  "(1112): Error during setsid()-call due to [(%d)-(%s)]."
#define MUTEX_ERROR   "(1113): Unable to set pthread mutex."
#define SELECT_ERROR  "(1114): Error during select()-call due to [(%d)-(%s)]."
#define FREAD_ERROR   "(1115): Could not read from file '%s' due to [(%d)-(%s)]."
#define FSEEK_ERROR   "(1116): Could not set position in file '%s' due to [(%d)-(%s)]."
#define FILE_ERROR    "(1117): Error handling file '%s' (date)."
#define FSTAT_ERROR   "(1117): Could not retrieve informations of file '%s' due to [(%d)-(%s)]."
#define FGETS_ERROR   "(1119): Invalid line on file '%s': %s."
//#define PIPE_ERROR    "%s(1120): ERROR: Pipe error."
#define GLOB_ERROR    "(1121): Glob error. Invalid pattern: '%s'."
#define GLOB_NFOUND   "(1122): No file found by pattern: '%s'."
#define UNLINK_ERROR  "(1123): Unable to delete file: '%s' due to [(%d)-(%s)]."
#define RENAME_ERROR  "(1124): Could not rename file '%s' to '%s' due to [(%d)-(%s)]."
//#define INT_ERROR     "%s(1125): ERROR: Internal error (undefined)."
#define OPEN_ERROR    "(1126): Unable to open file '%s' due to [(%d)-(%s)]."
#define CHMOD_ERROR   "(1127): Could not chmod object '%s' due to [(%d)-(%s)]."
#define MKSTEMP_ERROR "(1128): Could not create temporary file '%s' due to [(%d)-(%s)]."
#define DELETE_ERROR  "(1129): Could not unlink file '%s' due to [(%d)-(%s)]."
#define SETGID_ERROR  "(1130): Unable to switch to group '%s' due to [(%d)-(%s)]."
#define SETUID_ERROR  "(1131): Unable to switch to user '%s' due to [(%d)-(%s)]."
#define CHROOT_ERROR  "(1132): Unable to chroot to directory '%s' due to [(%d)-(%s)]."
#define CHDIR_ERROR   "(1133): Unable to chdir to directory '%s' due to [(%d)-(%s)]."
#define LINK_ERROR    "(1134): Unable to link from '%s' to '%s' due to [(%d)-(%s)]."
#define CHOWN_ERROR   "(1135): Could not chown object '%s' due to [(%d)-(%s)]."
#define EPOLL_ERROR   "(1136): Could not handle epoll descriptor."
#define LOST_ERROR   "(1137): Lost connection with manager. Setting lock."
#define KQUEUE_ERROR   "(1138): Could not handle kqueue descriptor."
#define FTELL_ERROR     "(1139): Could not get position from file '%s' due to [(%d)-(%s)]."
#define FCLOSE_ERROR  "(1140): Could not close file '%s' due to [(%d)-(%s)]."
#define GLOB_ERROR_WIN "(1141): Glob error. Invalid pattern: '%s' or no files found."

/* COMMON ERRORS */
#define CONN_ERROR      "(1201): No remote connection configured."
#define CONFIG_ERROR    "(1202): Configuration error at '%s'."
#define USER_ERROR      "(1203): Invalid user '%s' or group '%s' given."
#define CONNTYPE_ERROR  "(1204): Invalid connection type: '%s'."
#define PORT_ERROR      "(1205): Invalid port number: '%d'."
#define BIND_ERROR      "(1206): Unable to Bind port '%d' due to [(%d)-(%s)]"
#define RCONFIG_ERROR   "(1207): %s remote configuration in '%s' is corrupted."
#define QUEUE_ERROR     "(1210): Queue '%s' not accessible: '%s'."
#define QUEUE_FATAL     "(1211): Unable to access queue: '%s'. Giving up.."
#define PID_ERROR       "(1212): Unable to create PID file."
#define DENYIP_WARN     "(1213): Message from '%s' not allowed."
#define MSG_ERROR       "(1214): Problem receiving message from '%s'."
#define CLIENT_ERROR    "(1215): No client configured. Exiting."
#define CONNS_ERROR     "(1216): Unable to connect to '%s': '%s'."
#define UNABLE_CONN     "(1242): Unable to connect to server. Exhausted all options."
#define SEC_ERROR       "(1217): Error creating encrypted message."
#define SEND_ERROR      "(1218): Unable to send message to '%s': %s"
#define RULESLOAD_ERROR "(1219): Unable to access the rules directory."
#define RULES_ERROR     "(1220): Error loading the rules: '%s'."
#define LISTS_ERROR     "(1221): Error loading the list: '%s'."
#define QUEUE_SEND      "(1224): Error sending message to queue."
#define SIGNAL_RECV     "(1225): SIGNAL [(%d)-(%s)] Received. Exit Cleaning..."
#define XML_ERROR       "(1226): Error reading XML file '%s': %s (line %d)."
#define XML_ERROR_VAR   "(1227): Error applying XML variables '%s': %s."
#define XML_NO_ELEM     "(1228): Element '%s' without any option."
#define XML_INVALID     "(1229): Invalid element '%s' on the '%s' config."
#define XML_INVELEM     "(1230): Invalid element in the configuration: '%s'."
#define XML_INVATTR     "(1243): Invalid attribute '%s' in the configuration: '%s'."
#define XML_ELEMNULL    "(1231): Invalid NULL element in the configuration."
#define XML_READ_ERROR  "(1232): Error reading XML. Unknown cause."
#define XML_VALUENULL   "(1234): Invalid NULL content for element: %s."
#define XML_VALUEERR    "(1235): Invalid value for element '%s': %s."
#define XML_MAXREACHED  "(1236): Maximum number of elements reached for: %s."
#define INVALID_IP      "(1237): Invalid ip address: '%s'."
#define INVALID_ELEMENT "(1238): Invalid value for element '%s': %s"
#define NO_CONFIG       "(1239): Configuration file not found: '%s'."
#define INVALID_TIME    "(1240): Invalid time format: '%s'."
#define INVALID_DAY     "(1241): Invalid day format: '%s'."
#define ACCEPT_ERROR    "(1242): Couldn't accept TCP connections."
#define RECV_ERROR      "(1243): Couldn't receive message from peer."
#define DUP_SECURE      "(1244): Can't add more than one secure connection."
#define SEND_DISCON     "(1245): Sending message to disconnected agent '%s'."
#define SHARED_ERROR    "(1246): Unable to send file '%s' to agent ID '%s'."
#define TCP_NOT_SUPPORT "(1247): TCP not supported for this operating system."
#define TCP_EPIPE       "(1248): Unable to send message. Connection has been closed by remote server."

#define MAILQ_ERROR     "(1221): No Mail queue at %s"
#define IMSG_ERROR      "(1222): Invalid msg: %s"
#define SNDMAIL_ERROR   "(1223): Error Sending email to %s (smtp server)"
#define XML_INV_GRAN_MAIL "(1224): Invalid 'email_alerts' config (missing parameters)."
#define CHLDWAIT_ERROR  "(1261): Waiting for child process. (status: %d)."
#define TOOMANY_WAIT_ERROR "(1262): Too many errors waiting for child process(es)."

/* rootcheck */
#define MAX_RK_MSG        "(1250): Maximum number of global files reached: %d"
#define INVALID_RKCL_NAME  "(1251): Invalid rk configuration name: '%s'."
#define INVALID_RKCL_VALUE "(1252): Invalid rk configuration value: '%s'."
#define INVALID_ROOTDIR    "(1253): Invalid rootdir (unable to retrieve)."
#define INVALID_RKCL_VAR   "(1254): Invalid rk variable: '%s'."

/* syscheck */
#define SK_INV_REG      "(1757): Invalid syscheck registry entry: '%s'."
#define SK_REG_OPEN     "(1758): Unable to open registry key: '%s'."

/* analysisd */
#define FTS_LIST_ERROR          "(1260): Error initiating FTS list"
#define CRAFTED_IP              "(1271): Invalid IP Address '%s'. Possible logging attack."
#define CRAFTED_USER            "(1272): Invalid username '%s'. Possible logging attack."
#define INVALID_CAT             "(1273): Invalid category '%s' chosen."
#define INVALID_CONFIG          "(1274): Invalid configuration. Element '%s': %s."
#define INVALID_HOSTNAME        "(1275): Invalid hostname in syslog message: '%s'."
#define INVALID_GEOIP_DB        "(1276): Cannot open GeoIP database: '%s'."
#define FIM_INVALID_MESSAGE     "(1277): Invalid syscheck message received."

/* logcollector */
#define SYSTEM_ERROR     "(1600): Internal error. Exiting.."

/* remoted */
#define NO_REM_CONN     "(1750): No remote connection configured. Exiting."
#define NO_CLIENT_KEYS  "(1751): File client.keys not found or empty."

/* 1760 - 1769 -- reserved for maild */

/* Active Response */
#define AR_CMD_MISS     "(1280): Missing command options. " \
                        "You must specify a 'name' and 'executable'."
#define AR_MISS         "(1281): Missing options in the active response " \
                        "configuration. "
#define ARQ_ERROR       "(1301): Unable to connect to active response queue."
#define AR_INV_LOC      "(1302): Invalid active response location: '%s'."
#define AR_INV_CMD      "(1303): Invalid command '%s' in the active response."
#define AR_DEF_AGENT    "(1304): No agent defined for response."
#define AR_NO_TIMEOUT   "(1305): Timeout not allowed for command: '%s'."

#define EXECD_INV_MSG   "(1310): Invalid active response (execd) message '%s'."
#define EXEC_INV_NAME   "(1311): Invalid command name '%s' provided."
#define EXEC_CMDERROR   "(1312): Error executing '%s': %s"
#define EXEC_INV_CONF   "(1313): Invalid active response config: '%s'."
#define EXEC_DISABLED   "(1350): Active response disabled."
#define EXEC_SHUTDOWN   "(1314): Shutdown received. Deleting responses."

#define AR_NOAGENT_ERROR    "(1320): Agent '%s' not found."

/* List operations */
#define LIST_ERROR      "(1290): Unable to create a new list (calloc)."
#define LIST_ADD_ERROR  "(1291): Error adding nodes to list."
#define LIST_SIZE_ERROR "(1292): Error setting error size."
#define LIST_FREE_ERROR "(1293): Error setting data free pointer."

/* Log collector messages */
#define MISS_LOG_FORMAT "(1901): Missing 'log_format' element."
#define MISS_FILE       "(1902): Missing 'location' element."
#define INV_EVTLOG      "(1903): Invalid event log: '%s'."
#define NSTD_EVTLOG     "(1907): Non-standard event log set: '%s'."
#define LOGC_FILE_ERROR "(1904): File not available, ignoring it: '%s'."
#define NO_FILE         "(1905): No file configured to monitor."
#define PARSE_ERROR     "(1906): Error parsing file: '%s'."
#define READING_FILE    "(1950): Analyzing file: '%s'."
#define READING_EVTLOG  "(1951): Analyzing event log: '%s'."
#define VAR_LOG_MON     "(1952): Monitoring variable log file: '%s'."
#define INV_MULTILOG    "(1953): Invalid DJB multilog file: '%s'."
#define MISS_SOCK_NAME  "(1954): Missing field 'name' for socket."
#define MISS_SOCK_LOC   "(1955): Missing field 'location' for socket."
#define REM_ERROR       "(1956): Error removing '%s' file."
#define NEW_GLOB_FILE   "(1957): New file that matches the '%s' pattern: '%s'."
#define DUP_FILE        "(1958): Log file '%s' is duplicated."
#define FORGET_FILE     "(1959): File '%s' no longer exists."
#ifndef WIN32
#define FILE_LIMIT      "(1960): File limit has been reached (%d). Please reduce the number of files or increase \"logcollector.max_files\"."
#else
#define FILE_LIMIT      "(1960): File limit has been reached (%d)."
#endif
#define CURRENT_FILES   "(1961): Files being monitored: %i/%i."
#define OPEN_ATTEMPT    "(1962): Unable to open file '%s'. Remaining attempts: %d"
#define OPEN_UNABLE     "(1963): Unable to open file '%s'."
#define NON_TEXT_FILE   "(1964): File '%s' is not ASCII or UTF-8 encoded."
#define EXCLUDE_FILE    "(1965): File excluded: '%s'."

/* Encryption/auth errors */
#define INVALID_KEY     "(1401): Error reading authentication key: '%s'."
#define NO_AUTHFILE     "(1402): Authentication key file '%s' not found."
#define ENCFORMAT_ERROR "(1403): Incorrectly formatted message from agent '%s' (host '%s')."
#define ENCKEY_ERROR    "(1404): Authentication error. Wrong key from '%s'."
#define ENCSIZE_ERROR   "(1405): Message size not valid: '%64s'."
#define ENCSUM_ERROR    "(1406): Checksum mismatch on message from '%s'."
#define ENCTIME_ERROR   "(1407): Duplicated counter for '%s'."
#define ENC_IP_ERROR    "(1408): Invalid ID %s for the source ip: '%s' (name '%s')."
#define ENCFILE_CHANGED "(1409): Authentication file changed. Updating."
#define ENC_READ        "(1410): Reading authentication keys file."

/* Regex errors */
#define REGEX_COMPILE   "(1450): Syntax error on regex: '%s': %d."
#define REGEX_SUBS      "(1451): Missing sub_strings on regex: '%s'."

/* Mail errors */
#define INVALID_SMTP    "(1501): Invalid SMTP Server: %s"
#define INVALID_MAIL    "(1502): Invalid Email Address: %s"

/* Decoders */
#define PPLUGIN_INV     "(2101): Parent decoder name invalid: '%s'."
#define PDUP_INV        "(2102): Duplicated decoder with prematch: '%s'."
#define PDUPFTS_INV     "(2103): Duplicated decoder with fts set: '%s'."
#define DUP_INV         "(2104): Invalid duplicated decoder: '%s'."
#define DEC_PLUGIN_ERR  "(2105): Error loading decoder options."
#define DECODER_ERROR   "(2106): Error adding decoder plugin."
#define DEC_REGEX_ERROR "(2107): Decoder configuration error: '%s'."
#define DECODE_NOPRE    "(2108): No 'prematch' found in decoder: '%s'."
#define DUP_REGEX       "(2109): Duplicated offsets for same regex: '%s'."
#define INV_DECOPTION   "(2110): Invalid decoder argument for %s: '%s'."
#define DECODE_ADD      "(2111): Additional data to plugin decoder: '%s'."

#define INV_OFFSET      "(2120): Invalid offset value: '%s'"
#define INV_ATTR        "(2121): Invalid decoder attribute: '%s'"

/* os_zlib */
#define COMPRESS_ERR    "(2201): Error compressing string: '%s'."
#define UNCOMPRESS_ERR  "(2202): Error uncompressing string."

/* read defines */
#define DEF_NOT_FOUND   "(2301): Definition not found for: '%s.%s'."
#define INV_DEF         "(2302): Invalid definition for %s.%s: '%s'."

/* Agent errors */
#define AG_WAIT_SERVER  "(4101): Waiting for server reply (not started). Tried: '%s'."
#define AG_CONNECTED    "(4102): Connected to the server (%s:%d/%s)."
#define AG_USINGIP      "(4103): Server IP address already set. Trying that before the hostname."
#define AG_INV_HOST     "(4104): Invalid hostname: '%s'."
#define AG_INV_IP       "(4105): No valid server IP found."
#define EVTLOG_OPEN     "(4106): Unable to open event log: '%s'."
#define EVTLOG_GETLAST  "(4107): Unable to query last event log from: '%s'."
#define EVTLOG_DUP      "(4108): Duplicated event log entry: '%s'."
#define AG_NOKEYS_EXIT  "(4109): Unable to start without auth keys. Exiting."
#define AG_MAX_ERROR    "(4110): Maximum number of agents '%d' reached."
#define AG_AX_AGENTS    "(4111): Maximum number of agents allowed: '%d'."

/* Rules reading errors */
#define RL_INV_ROOT     "(5101): Invalid root element: '%s'."
#define RL_INV_RULE     "(5102): Invalid rule element: '%s'."
#define RL_INV_ENTRY    "(5103): Invalid rule on '%s'. Missing id/level."
#define RL_EMPTY_ATTR   "(5104): Rule attribute '%s' empty."
#define RL_INV_ATTR     "(5105): Invalid rule attributes inside file: '%s'."
#define RL_NO_OPT       "(5106): Rule '%d' without any options. "\
                        "It may lead to false positives. Exiting. "

/* Syslog output */
#define XML_INV_CSYSLOG "(5301): Invalid client-syslog configuration."

/* Integrator daemon */
#define XML_INV_INTEGRATOR "(5302): Invalid integratord configuration."

/* Agentless */
#define XML_INV_AGENTLESS   "(7101): Invalid agentless configuration."
#define XML_INV_MISSFREQ    "(7102): Frequency not set for the periodic option."
#define XML_INV_MISSOPTS    "(7103): Missing agentless options."

/* Database messages */
#define DBINIT_ERROR    "(5201): Error initializing database handler."
#define DBCONN_ERROR    "(5202): Error connecting to database '%s'(%s): ERROR: %s."
#define DBQUERY_ERROR   "(5203): Error executing query '%s'. Error: '%s'."
#define DB_GENERROR     "(5204): Database error. Unable to run query."
#define DB_MISS_CONFIG  "(5205): Missing database configuration. "\
                        "It requires host, user, pass and database."
#define DB_CONFIGERR    "(5206): Database configuration error."
#define DB_COMPILED     "(5207): OSSEC not compiled with support for '%s'."
#define DB_MAINERROR    "(5208): Multiple database errors. Exiting."
#define DB_CLOSING      "(5209): Closing connection to database."
#define DB_ATTEMPT      "(5210): Attempting to reconnect to database."

/* vulnerability-detector messages*/
#define VU_FETCH_ERROR              "(5400): %s database could not be fetched."
#define VU_OPEN_FILE_ERROR          "(5401): Could not open %s."
#define VU_LOAD_CVE_ERROR           "(5402): Could not load the CVE OVAL for %s. %s"
#define VU_INVALID_AT_VALUE         "(5403): Invalid '%s' value for '%s' attribute in node '%s'."
#define VU_PACKAGE_NAME_ERROR       "(5404): The package name could not be obtained."
#define VU_SQL_ERROR                "(5405): SQL error: %s"
#define VU_CHECK_DB_ERROR           "(5406): Database check failed."
#define VU_QUERY_ERROR              "(5407): The query could not be formed."
#define VU_OS_VERSION_ERROR         "(5408): Invalid OS version."
#define VU_REFRESH_DB_ERROR         "(5409): Could not refresh the %s DB."
#define VU_GET_SOFTWARE_ERROR       "(5410): The software of the agent '%s' could not be obtained."
#define VU_AG_CHECK_ERR             "(5411): Agent vulnerabilities could not be checked."
#define VU_TABLE_ERROR              "(5412): Table %s is not available."
#define VU_PACKAGE_TABLE_ERROR      "(5414): The packages table for agent %s could not be created."
#define VU_DB_TIMESTAMP_OVAL_ERROR  "(5417): Stored timestamp could not be compared. %s OVAL will continue updating."
#define VU_SSL_LIBRARY_ERROR        "(5418): Could not initialize the OpenSSL library."
#define VU_SSL_CREATE_ERROR         "(5419): The SSL structure could not be created."
#define VU_SSL_CONTEXT_ERROR        "(5420): Unable to create a new SSL context."
#define VU_SSL_CONNECT_ERROR        "(5421): Could not build a SSL session to %s OVAL."
#define VU_SSL_LINK_ERROR           "(5422): SSL configuration could not be linked to the socket."
#define VU_CVE_ID_FETCH_ERROR       "(5423): It is not possible to obtain the identifier of the CVE whose title is: '%s'."
#define VU_INVALID_OPERATOR         "(5424): Invalid operator %s."
#define VU_MAX_ACC_EXC              "(5425): Exceeded the maximum number of attempts to access the DB."
#define VU_OVAL_UPDATE_ERROR        "(5426): CVE database could not be updated."
#define VU_CREATE_DB_ERROR          "(5427): The database could not be checked or created."
#define VU_SOFTWARE_REQUEST_ERROR   "(5428): Agent %s software could not be requested."
#define VU_NO_AGENT_ERROR           "(5429): The agents information could not be processed."
#define VU_CREATE_HASH_ERRO         "(5430): The agents hash table could not be created."
#define VU_SYSC_SCAN_REQUEST_ERROR  "(5431): Last Syscollector scan from the agent %s could not be requested."
#define VU_HTTP_HEADER_ERROR        "(5432): Invalid HTTP header."
#define VU_PACKAGE_RECOG_ERROR      "(5433): The package could not be recognized in '%s'."
#define VU_NO_SYSC_SCANS            "(5434): No package inventory found for agent %s, so their vulnerabilities will not be checked."
#define VU_GLOBALDB_OPEN_ERROR      "(5435): Could not open global_db."
#define VU_REPORT_ERROR             "(5436): The agent %s vulnerabilities could not be reported."
#define VU_UPDATE_RETRY             "(5437): Failed when updating %s %s database. Retrying in %lu seconds..."
#define VU_API_REQ_INV              "(5489): There was no valid response to '%s' after %d attempts."
#define VU_PARSED_FEED_ERROR        "(5491): The %s feed couldn't be parsed."
#define VU_VER_EXTRACT_ERROR        "(5493): The version of '%s' could not be extracted."
#define VU_GLOBALDB_ERROR           "(5496): Could not connect to global DB."
#define VU_NULL_AGENT_ID            "(5497): The agent database returned a null agent ID. Skipping agent."
#define VU_NULL_AGENT_IP            "(5498): The agent database returned a null registration IP address. Skipping agent %s."
#define VU_API_REQ_INV_NEW          "(5499): There was no valid response to '%s' after %d attempts. Trying the next page..."
#define VU_UNC_SEVERITY             "(5500): Uncontrolled severity has been found: '%s'."
#define VU_FEED_NODE_NULL_ELM       "(5506): Null elements needing value have been found in a node of the feed. The update will not continue."


/* File integrity monitoring error messages*/
#define FIM_ERROR_ADD_FILE                          "(6600): Unable to add file to db: '%s'"
#define FIM_ERROR_ACCESING                          "(6601): Error accessing '%s': '%s' (%d)"
#define FIM_ERROR_EXTRACT_PERM                      "(6602): It was not possible to extract the permissions of '%s'. Error: '%d'."
#define FIM_ERROR_WHODATA_SUM_MAX                   "(6603): The whodata sum for '%s' file could not be included in the alert as it is too large."
#define FIM_ERROR_NOTHING_TOCKECK                   "(6604): No directories to check."
#define FIM_ERROR_CHECK_THREAD                      "(6605): Could not create the Whodata check thread."
#define FIM_ERROR_SELECT                            "(6606): Select failed (for real time file integrity monitoring)."

#define FIM_ERROR_INOTIFY_INITIALIZE                "(6607): Unable to initialize inotify."
#define FIM_ERROR_NFS_INOTIFY                       "(6608): '%s' NFS Directories do not support iNotify."
#define FIM_ERROR_INOTIFY_ADD_WATCH                 "(6609): Unable to add inotify watch to real time monitoring: '%s'. '%d' '%d'"
#define FIM_ERROR_REALTIME_WAITSINGLE_OBJECT        "(6610): WaitForSingleObjectEx failed (for real time file integrity monitoring)."
#define FIM_ERROR_REALTIME_ADDDIR_FAILED            "(6611): 'realtime_adddir' failed, the directory '%s'could't be added to real time mode."
#define FIM_ERROR_REALTIME_READ_BUFFER              "(6612): Unable to read from real time buffer."
#define FIM_ERROR_REALTIME_WINDOWS_CALLBACK         "(6613): Real time Windows callback process: '%s' (%lx)."
#define FIM_ERROR_REALTIME_WINDOWS_CALLBACK_EMPTY   "(6614): Real time call back called, but hash is empty."
#define FIM_ERROR_REALTIME_DIRECTORYCHANGES         "(6615): Unable to set 'ReadDirectoryChangesW' for directory: '%s'"
#define FIM_ERROR_REALTIME_MAXNUM_WATCHES           "(6616): Unable to add directory to real time monitoring: '%s' - Maximum size permitted."
#define FIM_ERROR_REALTIME_ADD                      "(6617): Unable to add directory to real time monitoring: '%s'."
#define FIM_ERROR_REALTIME_INITIALIZE               "(6618): Unable to initialize real time file monitoring."

#define FIM_ERROR_WHODATA_ADD_DIRECTORY             "(6619): Unable to add directory to whodata real time monitoring: '%s'."
#define FIM_ERROR_WHODATA_AUDIT_SUPPORT             "(6620): Audit support not built. Whodata is not available."
#define FIM_ERROR_WHODATA_EVENTCHANNEL              "(6621): Event Channel subscription could not be made. Whodata scan is disabled."
#define FIM_ERROR_WHODATA_RESTORE_POLICIES          "(6622): There is no backup of audit policies. Policies will not be restored."
#define FIM_ERROR_WHODATA_RENDER_EVENT              "(6623): Error rendering the event. Error %lu."
#define FIM_ERROR_WHODATA_RENDER_PARAM              "(6624): Invalid number of rendered parameters."
#define FIM_ERROR_WHODATA_NOTFIND_DIRPOS            "(6625): The '%s' file does not have an associated directory."
#define FIM_ERROR_WHODATA_HANDLER_REMOVE            "(6626): The handler '%s' could not be removed from the whodata hash table."
#define FIM_ERROR_WHODATA_HANDLER_EVENT             "(6627): Could not get the time of the event whose handler is '%llu'."
#define FIM_ERROR_WHODATA_EVENTID                   "(6628): Invalid EventID. The whodata cannot be extracted."
#define FIM_ERROR_WHODATA_CREATION_DATE             "(6629): The creation date for '%s' could not be extracted."
#define FIM_ERROR_WHODATA_EVENTADD_DUP              "(6630): The event could not be added to the '%s' hash table because it is duplicated. Target: '%s'."
#define FIM_ERROR_WHODATA_EVENTADD                  "(6631): The event could not be added to the '%s' hash table. Target: '%s'."
#define FIM_ERROR_WHODATA_GET_SID                   "(6632): Could not obtain the sid of Everyone. Error '%lu'."
#define FIM_ERROR_WHODATA_GET_ACE                   "(6633): Could not extract the ACE information. Error: '%lu'."
#define FIM_ERROR_WHODATA_TOKENPRIVILEGES           "(6634): AdjustTokenPrivileges() failed. Error: '%lu'"
#define FIM_ERROR_WHODATA_AUDITPOL                  "(6635): Auditpol backup error: '%s'."
#define FIM_ERROR_WHODATA_SOCKET_CONNECT            "(6636): Cannot connect to socket '%s'."
#define FIM_ERROR_WHODATA_READ_RULE                 "(6637): Could not read audit loaded rules."
#define FIM_ERROR_WHODATA_ADD_RULE                  "(6638): Error adding audit rule for directory (%i): '%s'."
#define FIM_ERROR_WHODATA_CHECK_RULE                "(6639): Error checking Audit rules list."
#define FIM_ERROR_WHODATA_MAXNUM_WATCHES            "(6640): Unable to monitor who-data for directory: '%s' - Maximum size permitted (%d)."
#define FIM_ERROR_WHODATA_COMPILE_REGEX             "(6641): Cannot compile '%s' regular expression."
#define FIM_ERROR_WHODATA_HEALTHCHECK_START         "(6642): Audit health check couldn't be completed correctly."
#define FIM_ERROR_WHODATA_EVENT_TOOLONG             "(6643): Caching Audit message: event too long."
#define FIM_ERROR_WHODATA_GETID                     "(6644): Couldn't get event ID from Audit message. Line: '%s'."
#define FIM_ERROR_WHODATA_CONTEXT                   "(6645): Error creating the whodata context. Error %lu."

#define FIM_ERROR_SACL_ACE_DELETE                   "(6646): DeleteAce() failed restoring the SACLs. Error '%ld'"
#define FIM_ERROR_SACL_FIND_PRIVILEGE               "(6647): Could not find the '%s' privilege. Error: %lu"
#define FIM_ERROR_SACL_OPENPROCESSTOKEN             "(6648): OpenProcessToken() failed. Error '%lu'."
#define FIM_ERROR_SACL_SET_PRIVILEGE                "(6649): Fail to set privileges. Error: '%ld'."
#define FIM_ERROR_SACL_GETSECURITYINFO              "(6650): GetNamedSecurityInfo() failed. Error '%ld'"
#define FIM_ERROR_SACL_GETSIZE                      "(6651): The size of the '%s' SACL could not be obtained."
#define FIM_ERROR_SACL_NOMEMORY                     "(6652): No memory could be reserved for the new SACL of '%s'."
#define FIM_ERROR_SACL_CREATE                       "(6653): The new SACL for '%s' could not be created."
#define FIM_ERROR_SACL_ACE_GET                      "(6654): The ACE number %i for '%s' could not be obtained."
#define FIM_ERROR_SACL_ACE_CPY                      "(6655): The ACE number %i of '%s' could not be copied to the new ACL."
#define FIM_ERROR_SACL_ACE_NOMEMORY                 "(6656): No memory could be reserved for the new ACE of '%s'."
#define FIM_ERROR_SACL_ACE_ADD                      "(6657): The new ACE could not be added to '%s'."
#define FIM_ERROR_SACL_SETSECURITYINFO              "(6658): SetNamedSecurityInfo() failed. Error: '%lu'."
#define FIM_ERROR_SACL_ELEVATE_PRIVILEGE            "(6659): The privilege could not be activated. Error: '%ld'."
#define FIM_ERROR_WPOL_BACKUP_FILE_REMOVE           "(6660): '%s' could not be removed: '%s' (%d)."
#define FIM_ERROR_WPOL_BACKUP_FILE_OPEN             "(6661): '%s' could not be opened: '%s' (%d)."

#define FIM_ERROR_LIBMAGIC_START                    "(6662): Can't init libmagic: '%s'"
#define FIM_ERROR_LIBMAGIC_LOAD                     "(6663): Can't load magic file: '%s'"
#define FIM_ERROR_LIBMAGIC_BUFFER                   "(6664): magic_buffer: '%s'"
#define FIM_ERROR_GENDIFF_OPEN                      "(6665): Unable to generate diff alert (fopen)."
#define FIM_ERROR_GENDIFF_READ                      "(6666): Unable to generate diff alert (fread)."
#define FIM_ERROR_GENDIFF_SECONDLINE_MISSING        "(6667): Unable to find second line of alert string."
#define FIM_ERROR_GENDIFF_WRITING_DATA              "(6668): Unable to write data on file '%s'"
#define FIM_ERROR_GENDIFF_INVALID_PATH              "(6669): Invalid path name: '%s'"
#define FIM_ERROR_GENDIFF_CREATE_SNAPSHOT           "(6670): Unable to create snapshot for '%s'"
#define FIM_ERROR_GENDIFF_OPEN_FILE                 "(6671): Unable to open file for writing '%s'"
#define FIM_ERROR_GENDIFF_COMMAND                   "(6672): Unable to run diff command '%s'"

#define FIM_ERROR_SYSCOM_BIND_SOCKET                "(6672): Unable to bind to socket '%s': (%d) '%s'."
#define FIM_ERROR_SYSCOM_ACCEPT                     "(6673): In accept(): '%s'"
#define FIM_ERROR_SYSCOM_RECV                       "(6674): In OS_RecvSecureTCP(): '%s'"
#define FIM_ERROR_SYSCOM_RECV_TOOLONG               "(6675): In OS_RecvSecureTCP(): response size is bigger than expected"
#define FIM_ERROR_SYSCOM_RECV_MAXLEN                "(6676): The received message exeed maximum permited > '%i'"

#define FIM_NO_OPTIONS                              "(6677): No option provided for directories: '%s', ignoring it."
#define FIM_DIRECTORY_NOPROVIDED                    "(6678): No directory provided for syscheck to monitor."
#define FIM_INVALID_ATTRIBUTE                       "(6679): Invalid attribute '%s' for directory option."
#define FIM_INVALID_OPTION                          "(6680): Invalid option '%s' for attribute '%s'"
#define FIM_WHODATA_PARAMETER                       "(6681): Invalid parameter type (%ld) for '%s'."
#define FIM_ERROR_WHODATA_WIN_ARCH                  "(6682): Error reading 'Architecture' from Windows registry. (Error %u)"
#define FIM_ERROR_WHODATA_WIN_SIDERROR              "(6683): Could not obtain the sid of Everyone. Error '%lu'."
#define FIM_ERROR_WHODATA_OPEN_TOKEN                "(6684): OpenProcessToken() failed. Error '%lu'."
#define FIM_ERROR_WHODATA_ACTIVATE_PRIV             "(6685): The privilege could not be activated. Error: '%ld'."
#define FIM_ERROR_WHODATA_GETNAMEDSECURITY          "(6686): GetNamedSecurityInfo() failed. Error '%ld'"
#define FIM_ERROR_WHODATA_SACL_SIZE                 "(6687): The size of the '%s' SACL could not be obtained."
#define FIM_ERROR_WHODATA_SACL_MEMORY               "(6688): No memory could be reserved for the new SACL of '%s'."
#define FIM_ERROR_WHODATA_SACL_NOCREATE             "(6689): The new SACL for '%s' could not be created. Error: '%ld'."
#define FIM_ERROR_WHODATA_ACE_MEMORY                "(6690): No memory could be reserved for the new ACE of '%s'. Error: '%ld'."
#define FIM_ERROR_WHODATA_COPY_SID                  "(6691): Could not copy the everyone SID for '%s'. Error: '%d-%ld'."
#define FIM_ERROR_WHODATA_ACE_NOOBTAIN              "(6692): The ACE number %i for '%s' could not be obtained."
#define FIM_ERROR_WHODATA_ACE_NUMBER                "(6693): The ACE number %i of '%s' could not be copied to the new ACL."
#define FIM_ERROR_WHODATA_ACE_NOADDED               "(6694): The new ACE could not be added to '%s'. Error: '%ld'."
#define FIM_ERROR_WHODATA_SETNAMEDSECURITY          "(6695): SetNamedSecurityInfo() failed. Error: '%lu'"

#define FIM_CRITICAL_ERROR_DB                       "(6696): Unable to create syscheck database. Exiting."
#define FIM_CRITICAL_ERROR_OUT_MEM                  "(6697): Out of memory. Exiting."
#define FIM_CRITICAL_ERROR_HASH_CREATE              "(6698): At '%s': OSHash_Create() failed '%s'. Exiting."
#define FIM_CRITICAL_ERROR_SELECT                   "(6699): At '%s': select(): %s. Exiting."


/* Verbose messages */
#define STARTUP_MSG "Started (pid: %d)."
#define PRIVSEP_MSG "Chrooted to directory: %s, using user: %s"
#define MSG_SOCKET_SIZE "(unix_domain) Maximum send buffer set to: '%d'."

#define NO_SYSLOG       "(1501): IP or network must be present in syslog" \
                        " access list (allowed-ips). Syslog server disabled."
#define CONN_TO     "Connected to '%s' (%s queue)"
#define MAIL_DIS    "E-Mail notification disabled. Clean Exit."

/* Debug Messages */
#define STARTED_MSG "Starting ..."
#define FOUND_USER  "Found user/group ..."
#define ASINIT      "Active response initialized ..."
#define READ_CONFIG "Read configuration ..."

/* Wait operations */
#define WAITING_MSG     "Process locked due to agent is offline. Waiting for connection..."
#define WAITING_FREE    "Agent is now online. Process unlocked, continuing..."
#define SERVER_UNAV     "Server unavailable. Setting lock."
#define SERVER_UP       "Server responded. Releasing lock."
#define LOCK_RES        "Agent auto-restart locked for %d seconds."

/* Buffer alerts */
#define DISABLED_BUFFER "Agent buffer disabled."
#define WARN_BUFFER     "Agent buffer at %d %%."
#define FULL_BUFFER     "Agent buffer is full: Events may be lost."
#define FLOODED_BUFFER  "Agent buffer is flooded: Producing too many events."
#define NORMAL_BUFFER   "Agent buffer is under %d %%. Working properly again."
#define TOLERANCE_TIME  "Tolerance time set to Zero, defined flooding condition when buffer is full."

/* OSSEC alert messages */
#define OS_AD_STARTED   "ossec: Ossec started."
#define OS_AG_STARTED   "ossec: Agent started: '%s->%s'."
#define OS_AG_DISCON    "ossec: Agent disconnected: '%s'."
#define OS_AG_REMOVED   "ossec: Agent removed: '%s'."

#define OS_NORMAL_BUFFER  "wazuh: Agent buffer: 'normal'."
#define OS_WARN_BUFFER  "wazuh: Agent buffer: '%d%%'."
#define OS_FULL_BUFFER  "wazuh: Agent buffer: 'full'."
#define OS_FLOOD_BUFFER "wazuh: Agent buffer: 'flooded'."

/* WIN32 errors */
#define CONF_ERROR      "Could not read (%s) (Make sure config exists and executable is running with Administrative privileges)."
#define GMF_ERROR       "Could not run GetModuleFileName."
#define GMF_BUFF_ERROR  "Could not get path because it is too long and was shrunk by (%d) characters with a max of (%d)."
#define GMF_UNKN_ERROR  "Could not run GetModuleFileName which returned (%ld)."

#endif /* _ERROR_MESSAGES__H */
