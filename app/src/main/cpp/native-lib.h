//
// Created by Tomash Mondok on 9/27/16.
//
#include <jni.h>
#include <string>

#ifndef CPLUSSUPPORT_NATIVE_LIB_H
#define CPLUSSUPPORT_NATIVE_LIB_H

#ifdef __cplusplus
extern "C" {
#endif
        void Java_com_pettersonapps_cplussupport_MainActivity_initWebRTC(JNIEnv *env,
                                                                    jobject instance);

        void Java_com_pettersonapps_cplussupport_MainActivity_signalingMessageReceived(JNIEnv *env,
                                                                                  jobject instance,
                                                                                  std::string &msg);

        void Java_com_pettersonapps_cplussupport_MainActivity_initiateCall(JNIEnv *env,
                                                                      jobject instance,
                                                                      const std::string& accountId,
                                                                      const std::string& iceParameters,
                                                                      int maxTalkTime);

        void Java_com_pettersonapps_cplussupport_MainActivity_acceptCall(JNIEnv *env,
                                                                    jobject instance,
                                                                    const std::string& accountId,
                                                                    int resultMaxTalkTime);

        void Java_com_pettersonapps_cplussupport_MainActivity_terminateCall(JNIEnv *env,
                                                                       jobject instance,
                                                                       const std::string& accountId,
                                                                       const std::string& reason);
#ifdef __cplusplus
}
#endif

#endif
