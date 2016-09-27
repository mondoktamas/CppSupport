#include <jni.h>
#include <string>
#include <iostream>
#include "native-lib.h"

void Java_com_pettersonapps_cplussupport_MainActivity_initWebRTC(JNIEnv *env, jobject instance) {
    jstring callbackString = env->NewStringUTF("WebRTC initialized successfully");
    jclass clazz = env->FindClass("com/pettersonapps/cplussupport/MainActivity");
    jmethodID methodId = env->GetMethodID(clazz, "onWebRTCInitialized", "(Ljava/lang/String;)V");
    env->CallVoidMethod(instance, methodId, callbackString);
}

void Java_com_pettersonapps_cplussupport_MainActivity_signalingMessageReceived(JNIEnv *env,
                                                                              jobject instance,
                                                                              std::string &msg) {

}

void Java_com_pettersonapps_cplussupport_MainActivity_initiateCall(JNIEnv *env,
                                                                  jobject instance,
                                                                  const std::string& accountId,
                                                                  const std::string& iceParameters,
                                                                  int maxTalkTime) {

}

void Java_com_pettersonapps_cplussupport_MainActivity_acceptCall(JNIEnv *env,
                                                                jobject instance,
                                                                const std::string& accountId,
                                                                int resultMaxTalkTime) {

}

void Java_com_pettersonapps_cplussupport_MainActivity_terminateCall(JNIEnv *env,
                                                                   jobject instance,
                                                                   const std::string& accountId,
                                                                   const std::string& reason) {

}
