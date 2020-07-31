/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jvl_FFmpeg_jni_AVCodecContext */

#ifndef _Included_jvl_FFmpeg_jni_AVCodecContext
#define _Included_jvl_FFmpeg_jni_AVCodecContext
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    freeContext
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_freeContext
  (JNIEnv *, jobject, jlong);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    copyParamsToContext
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_copyParamsToContext
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    open
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_open
  (JNIEnv *, jobject, jlong);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    sendPacket
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_sendPacket
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    receiveFrame
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_receiveFrame
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    setFramerate
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_setFramerate
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    getFramerate
 * Signature: (J)Ljvl/FFmpeg/jni/AVRational;
 */
JNIEXPORT jobject JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_getFramerate
  (JNIEnv *, jobject, jlong);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    setHeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_setHeight
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    setWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_setWidth
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    getHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_getHeight
  (JNIEnv *, jobject, jlong);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    getWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_getWidth
  (JNIEnv *, jobject, jlong);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    getSampleAspectRatio
 * Signature: (J)Ljvl/FFmpeg/jni/AVRational;
 */
JNIEXPORT jobject JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_getSampleAspectRatio
  (JNIEnv *, jobject, jlong);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    setSampleAspectRatio
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_setSampleAspectRatio
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    getPixelFormat
 * Signature: (J)Ljvl/FFmpeg/jni/AVPixelFormat;
 */
JNIEXPORT jobject JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_getPixelFormat
  (JNIEnv *, jobject, jlong);

/*
 * Class:     jvl_FFmpeg_jni_AVCodecContext
 * Method:    setPixelFormat
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_setPixelFormat
  (JNIEnv *, jobject, jlong, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
