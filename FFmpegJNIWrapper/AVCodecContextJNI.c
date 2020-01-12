#include <jni.h>
#include <stdio.h>
#include "jvl_FFmpeg_jni_AVCodecContext.h"
#include "libavformat/avformat.h"
#include "libavcodec/avcodec.h"


JNIEXPORT void JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_freeContext(JNIEnv* env, jobject obj, jlong AVCodecContextPointer)
{
    AVCodecContext * pAVCodecContext = (AVCodecContext *)(intptr_t)AVCodecContextPointer;
    
    avcodec_free_context(&pAVCodecContext);
}

JNIEXPORT jint JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_sendPacket(JNIEnv* env, jobject obj, jlong AVCodecContextPointer, jlong AVPacketPointer)
{
    AVCodecContext * pAVCodecContext = (AVCodecContext *)(intptr_t)AVCodecContextPointer;
    AVPacket * pAVPacket = (AVPacket *)(intptr_t)AVPacketPointer;
    
    return avcodec_send_packet(pAVCodecContext, pAVPacket);;
}

JNIEXPORT jint JNICALL Java_jvl_FFmpeg_jni_AVCodecContext_receiveFrame(JNIEnv* env, jobject obj, jlong AVCodecContextPointer, jlong AVFramePointer)
{
    AVCodecContext * pAVCodecContext = (AVCodecContext *)(intptr_t)AVCodecContextPointer;
    AVFrame * pAVFrame = (AVFrame *)(intptr_t)AVFramePointer;
    
    return avcodec_receive_frame(pAVCodecContext, pAVFrame);;
}