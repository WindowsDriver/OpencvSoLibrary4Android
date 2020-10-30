
#include "include/head/native_head.h"

JNIEXPORT jstring JNICALL
Java_com_example_opencv_1solibrary_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject obj,
        jstring imagepath) {
    std::string hello = "Hello from C++";
    const char *c_str = nullptr;
    c_str = env->GetStringUTFChars(imagepath, nullptr);
    env->ReleaseStringUTFChars(imagepath, c_str);
    cv::Mat a = cv::imread(c_str);
    FILE* file = fopen("sdcard/hello.txt", "w+");
    if (file == nullptr) {
        file = fopen("mnt/sdcard/hello.txt", "w+");
        if (file == nullptr) {
            file = fopen("storage/sdcard/hello.txt", "w+");
        }
    }

    return env->NewStringUTF(hello.c_str());
}
