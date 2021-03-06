/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_openpeer_javaapi_OPComposingStatus */

#ifndef _Included_com_openpeer_javaapi_OPComposingStatus
#define _Included_com_openpeer_javaapi_OPComposingStatus
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_openpeer_javaapi_OPComposingStatus
 * Method:    create
 * Signature: (Lcom/openpeer/javaapi/ComposingStates;)Lcom/openpeer/javaapi/OPComposingStatus;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPComposingStatus_create
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_openpeer_javaapi_OPComposingStatus
 * Method:    toString
 * Signature: (Lcom/openpeer/javaapi/ComposingStates;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPComposingStatus_toString
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_openpeer_javaapi_OPComposingStatus
 * Method:    toComposingState
 * Signature: (Ljava/lang/String;)Lcom/openpeer/javaapi/ComposingStates;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPComposingStatus_toComposingState
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_openpeer_javaapi_OPComposingStatus
 * Method:    extract
 * Signature: (Lcom/openpeer/javaapi/OPElement;)Lcom/openpeer/javaapi/OPComposingStatus;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPComposingStatus_extract
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_openpeer_javaapi_OPComposingStatus
 * Method:    insert
 * Signature: (Lcom/openpeer/javaapi/OPElement;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPComposingStatus_insert
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_openpeer_javaapi_OPComposingStatus
 * Method:    hasData
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPComposingStatus_hasData
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPComposingStatus
 * Method:    toDebug
 * Signature: ()Lcom/openpeer/javaapi/OPElement;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPComposingStatus_toDebug
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPComposingStatus
 * Method:    releaseCoreObjects
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPComposingStatus_releaseCoreObjects
  (JNIEnv *, jobject);

JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPComposingStatus_getComposingState
(JNIEnv *, jobject);
#ifdef __cplusplus
}
#endif
#endif
