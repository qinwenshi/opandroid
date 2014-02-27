/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_openpeer_javaapi_OPLogger */

#ifndef _Included_com_openpeer_javaapi_OPLogger
#define _Included_com_openpeer_javaapi_OPLogger
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    installStdOutLogger
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_installStdOutLogger
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    installFileLogger
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_installFileLogger
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    installTelnetLogger
 * Signature: (SJZ)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_installTelnetLogger
  (JNIEnv *, jclass, jint port, jlong maxSecondsWaitForSocketToBeAvailable, jboolean colorizeOutput);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    installOutgoingTelnetLogger
 * Signature: (Ljava/lang/String;ZLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_installOutgoingTelnetLogger
  (JNIEnv *, jclass, jstring, jboolean, jstring);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    installDebuggerLogger
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_installDebuggerLogger
  (JNIEnv *, jclass);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    installCustomLogger
 * Signature: (Lcom/openpeer/javaapi/OPLoggerDelegate;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_installCustomLogger
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    uninstallStdOutLogger
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_uninstallStdOutLogger
  (JNIEnv *, jclass);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    uninstallFileLogger
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_uninstallFileLogger
  (JNIEnv *, jclass);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    uninstallTelnetLogger
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_uninstallTelnetLogger
  (JNIEnv *, jclass);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    uninstallOutgoingTelnetLogger
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_uninstallOutgoingTelnetLogger
  (JNIEnv *, jclass);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    uninstallDebuggerLogger
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_uninstallDebuggerLogger
  (JNIEnv *, jclass);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    isTelnetLoggerListening
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPLogger_isTelnetLoggerListening
  (JNIEnv *, jclass);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    isTelnetLoggerConnected
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPLogger_isTelnetLoggerConnected
  (JNIEnv *, jclass);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    isOutgoingTelnetLoggerConnected
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPLogger_isOutgoingTelnetLoggerConnected
  (JNIEnv *, jclass);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    getApplicationSubsystemID
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_openpeer_javaapi_OPLogger_getApplicationSubsystemID
  (JNIEnv *, jclass);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    getLogLevel
 * Signature: (I)Lcom/openpeer/javaapi/OPLogLevel;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPLogger_getLogLevel
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    setLogLevel
 * Signature: (Lcom/openpeer/javaapi/OPLogLevel;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_setLogLevel__Lcom_openpeer_javaapi_OPLogLevel_2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    setLogLevel
 * Signature: (ILcom/openpeer/javaapi/OPLogLevel;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_setLogLevel__ILcom_openpeer_javaapi_OPLogLevel_2
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    setLogLevel
 * Signature: (Ljava/lang/String;Lcom/openpeer/javaapi/OPLogLevel;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_setLogLevel__Ljava_lang_String_2Lcom_openpeer_javaapi_OPLogLevel_2
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     com_openpeer_javaapi_OPLogger
 * Method:    log
 * Signature: (ILcom/openpeer/javaapi/OPLogSeverity;Lcom/openpeer/javaapi/OPLogLevel;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPLogger_log
  (JNIEnv *, jclass, jint, jobject, jobject, jstring, jstring, jstring, jlong);

#ifdef __cplusplus
}
#endif
#endif
