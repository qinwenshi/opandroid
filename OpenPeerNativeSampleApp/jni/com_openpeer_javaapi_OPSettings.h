/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_openpeer_javaapi_OPSettings */

#ifndef _Included_com_openpeer_javaapi_OPSettings
#define _Included_com_openpeer_javaapi_OPSettings
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_openpeer_javaapi_OPSettings
 * Method:    setup
 * Signature: (Lcom/openpeer/javaapi/OPSettingsDelegate;)V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPSettings_setup
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_openpeer_javaapi_OPSettings
 * Method:    apply
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPSettings_apply
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_openpeer_javaapi_OPSettings
 * Method:    applyDefaults
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPSettings_applyDefaults
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
