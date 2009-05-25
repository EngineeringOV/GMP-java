/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class GMP */

#ifndef _Included_GMP
#define _Included_GMP
#ifdef __cplusplus
extern "C" {
#endif
#undef GMP_serialVersionUID
#define GMP_serialVersionUID -8742448824652078965LL
#undef GMP_serialVersionUID
#define GMP_serialVersionUID -8287574255936472291LL
/*
 * Class:     GMP
 * Method:    natInitializeLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_GMP_natInitializeLibrary
  (JNIEnv *, jclass);

/*
 * Class:     GMP
 * Method:    natInitialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_GMP_natInitialize
  (JNIEnv *, jobject);

/*
 * Class:     GMP
 * Method:    natFinalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_GMP_natFinalize
  (JNIEnv *, jobject);

/*
 * Class:     GMP
 * Method:    natFromLong
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_GMP_natFromLong
  (JNIEnv *, jobject, jlong);

/*
 * Class:     GMP
 * Method:    natFromBI
 * Signature: (LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natFromBI
  (JNIEnv *, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natFromByteArray
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_GMP_natFromByteArray
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     GMP
 * Method:    natFromString
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_GMP_natFromString
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     GMP
 * Method:    natFromSignedMagnitude
 * Signature: ([BZ)V
 */
JNIEXPORT void JNICALL Java_GMP_natFromSignedMagnitude
  (JNIEnv *, jobject, jbyteArray, jboolean);

/*
 * Class:     GMP
 * Method:    natToString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_GMP_natToString
  (JNIEnv *, jobject, jint);

/*
 * Class:     GMP
 * Method:    natToByteArray
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_GMP_natToByteArray
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     GMP
 * Method:    natAbsIntValue
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_GMP_natAbsIntValue
  (JNIEnv *, jobject);

/*
 * Class:     GMP
 * Method:    natDoubleValue
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_GMP_natDoubleValue
  (JNIEnv *, jobject);

/*
 * Class:     GMP
 * Method:    natCompare
 * Signature: (LPointer;)I
 */
JNIEXPORT jint JNICALL Java_GMP_natCompare
  (JNIEnv *, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natAdd
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natAdd
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natSubtract
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natSubtract
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natMultiply
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natMultiply
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natQuotient
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natQuotient
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natRemainder
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natRemainder
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natQuotientAndRemainder
 * Signature: (LPointer;LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natQuotientAndRemainder
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natModulo
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natModulo
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natPow
 * Signature: (ILPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natPow
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     GMP
 * Method:    natModPow
 * Signature: (LPointer;LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natModPow
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natModInverse
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natModInverse
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natGCD
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natGCD
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natTestPrimality
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_GMP_natTestPrimality
  (JNIEnv *, jobject, jint);

/*
 * Class:     GMP
 * Method:    natShiftLeft
 * Signature: (ILPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natShiftLeft
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     GMP
 * Method:    natShiftRight
 * Signature: (ILPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natShiftRight
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     GMP
 * Method:    natLowestSetBit
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_GMP_natLowestSetBit
  (JNIEnv *, jobject);

/*
 * Class:     GMP
 * Method:    natAbs
 * Signature: (LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natAbs
  (JNIEnv *, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natNegate
 * Signature: (LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natNegate
  (JNIEnv *, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natBitLength
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_GMP_natBitLength
  (JNIEnv *, jobject);

/*
 * Class:     GMP
 * Method:    natSetBitCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_GMP_natSetBitCount
  (JNIEnv *, jobject);

/*
 * Class:     GMP
 * Method:    natXor
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natXor
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natOr
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natOr
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natAnd
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natAnd
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natAndNot
 * Signature: (LPointer;LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natAndNot
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     GMP
 * Method:    natFlipBit
 * Signature: (ILPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natFlipBit
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     GMP
 * Method:    natTestBit
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_GMP_natTestBit
  (JNIEnv *, jobject, jint);

/*
 * Class:     GMP
 * Method:    natSetBit
 * Signature: (IZLPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natSetBit
  (JNIEnv *, jobject, jint, jboolean, jobject);

/*
 * Class:     GMP
 * Method:    natNot
 * Signature: (LPointer;)V
 */
JNIEXPORT void JNICALL Java_GMP_natNot
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
