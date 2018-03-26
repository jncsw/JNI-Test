#include<iostream>
#include "com_sdu_nativecode_TestNativeCode.h"

using namespace std;

JNIEXPORT void JNICALL Java_com_sdu_nativecode_TestNativeCode_sayHello
(JNIEnv *env, jobject obj) {
	int i = 0;
	
	for (int i = 1; i < 100; i++) {
		cout << i << " ";
	}
		
	


}
