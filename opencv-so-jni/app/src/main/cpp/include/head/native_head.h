//
// Created by 10160097 on 2020/10/30.
//


#ifndef OPENCV_SOLIBRARY_NATIVE_HEAD_H
#define OPENCV_SOLIBRARY_NATIVE_HEAD_H

#include <jni.h>
#include <string>
#include "../opencv2/opencv.hpp"
#include "../opencv2/imgcodecs.hpp"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_opencv_1solibrary_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject obj,
        jstring imagepath);
#endif //OPENCV_SOLIBRARY_NATIVE_HEAD_H
