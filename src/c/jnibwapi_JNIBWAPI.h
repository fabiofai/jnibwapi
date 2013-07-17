/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jnibwapi_JNIBWAPI */

#ifndef _Included_jnibwapi_JNIBWAPI
#define _Included_jnibwapi_JNIBWAPI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    startClient
 * Signature: (Ljnibwapi/JNIBWAPI;)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_startClient
  (JNIEnv *, jobject, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getFrame
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jnibwapi_JNIBWAPI_getFrame
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getReplayFrameTotal
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jnibwapi_JNIBWAPI_getReplayFrameTotal
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getPlayerInfo
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getPlayerInfo
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getPlayerUpdate
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getPlayerUpdate
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getResearchStatus
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getResearchStatus
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getUpgradeStatus
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getUpgradeStatus
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getAllUnitsData
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getAllUnitsData
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getUnitTypes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getUnitTypes
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getUnitTypeName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getUnitTypeName
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getTechTypes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getTechTypes
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getTechTypeName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getTechTypeName
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getUpgradeTypes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getUpgradeTypes
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getUpgradeTypeName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getUpgradeTypeName
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getWeaponTypes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getWeaponTypes
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getWeaponTypeName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getWeaponTypeName
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getUnitSizeTypes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getUnitSizeTypes
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getUnitSizeTypeName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getUnitSizeTypeName
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getBulletTypes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getBulletTypes
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getBulletTypeName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getBulletTypeName
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getDamageTypes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getDamageTypes
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getDamageTypeName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getDamageTypeName
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getExplosionTypes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getExplosionTypes
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getExplosionTypeName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getExplosionTypeName
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getUnitCommandTypes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getUnitCommandTypes
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getUnitCommandTypeName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getUnitCommandTypeName
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getOrderTypes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getOrderTypes
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getOrderTypeName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getOrderTypeName
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getUnitIdsOnTile
 * Signature: (II)[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getUnitIdsOnTile
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    analyzeTerrain
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_analyzeTerrain
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getMapWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jnibwapi_JNIBWAPI_getMapWidth
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getMapHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jnibwapi_JNIBWAPI_getMapHeight
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getMapName
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_jnibwapi_JNIBWAPI_getMapName
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getMapFileName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getMapFileName
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getMapHash
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnibwapi_JNIBWAPI_getMapHash
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getHeightData
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getHeightData
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getRegionMap
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getRegionMap
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getWalkableData
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getWalkableData
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getBuildableData
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getBuildableData
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getChokePoints
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getChokePoints
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getRegions
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getRegions
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getPolygon
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getPolygon
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getBaseLocations
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_jnibwapi_JNIBWAPI_getBaseLocations
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    attack
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_attack__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    attack
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_attack__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    build
 * Signature: (IIII)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_build
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    buildAddon
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_buildAddon
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    train
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_train
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    morph
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_morph
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    research
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_research
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    upgrade
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_upgrade
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    setRallyPoint
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_setRallyPoint__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    setRallyPoint
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_setRallyPoint__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    move
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_move
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    patrol
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_patrol
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    holdPosition
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_holdPosition
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    stop
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_stop
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    follow
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_follow
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    gather
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_gather
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    returnCargo
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_returnCargo
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    repair
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_repair
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    burrow
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_burrow
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    unburrow
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_unburrow
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    cloak
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_cloak
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    decloak
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_decloak
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    siege
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_siege
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    unsiege
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_unsiege
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    lift
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_lift
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    land
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_land
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    load
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_load
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    unload
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_unload
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    unloadAll
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_unloadAll__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    unloadAll
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_unloadAll__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    rightClick
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_rightClick__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    rightClick
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_rightClick__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    haltConstruction
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_haltConstruction
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    cancelConstruction
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_cancelConstruction
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    cancelAddon
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_cancelAddon
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    cancelTrain
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_cancelTrain
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    cancelMorph
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_cancelMorph
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    cancelResearch
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_cancelResearch
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    cancelUpgrade
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_cancelUpgrade
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    useTech
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_useTech__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    useTech
 * Signature: (IIII)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_useTech__IIII
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    useTech
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_useTech__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    placeCOP
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_placeCOP
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    drawHealth
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_drawHealth
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    drawTargets
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_drawTargets
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    drawIDs
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_drawIDs
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    enableUserInput
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_enableUserInput
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    enablePerfectInformation
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_enablePerfectInformation
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    setGameSpeed
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_setGameSpeed
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    setFrameSkip
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_setFrameSkip
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    leaveGame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_leaveGame
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    drawBox
 * Signature: (IIIIIZZ)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_drawBox
  (JNIEnv *, jobject, jint, jint, jint, jint, jint, jboolean, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    drawCircle
 * Signature: (IIIIZZ)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_drawCircle
  (JNIEnv *, jobject, jint, jint, jint, jint, jboolean, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    drawLine
 * Signature: (IIIIIZ)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_drawLine
  (JNIEnv *, jobject, jint, jint, jint, jint, jint, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    drawDot
 * Signature: (IIIZ)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_drawDot
  (JNIEnv *, jobject, jint, jint, jint, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    drawText
 * Signature: (IILjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_drawText
  (JNIEnv *, jobject, jint, jint, jstring, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    isVisible
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_isVisible
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    isExplored
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_isExplored
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    isBuildable
 * Signature: (IIZ)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_isBuildable
  (JNIEnv *, jobject, jint, jint, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    hasCreep
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_hasCreep
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    hasPower
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_hasPower__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    hasPower
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_hasPower__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    hasPower
 * Signature: (IIII)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_hasPower__IIII
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    hasPower
 * Signature: (IIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_hasPower__IIIII
  (JNIEnv *, jobject, jint, jint, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    hasPowerPrecise
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_hasPowerPrecise
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    hasPath
 * Signature: (IIII)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_hasPath__IIII
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    hasPath
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_hasPath__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    hasPath
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_hasPath__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    hasLoadedUnit
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_hasLoadedUnit
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    canBuildHere
 * Signature: (IIIZ)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_canBuildHere__IIIZ
  (JNIEnv *, jobject, jint, jint, jint, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    canBuildHere
 * Signature: (IIIIZ)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_canBuildHere__IIIIZ
  (JNIEnv *, jobject, jint, jint, jint, jint, jboolean);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    canMake
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_canMake__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    canMake
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_canMake__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    canResearch
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_canResearch__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    canResearch
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_canResearch__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    canUpgrade
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_canUpgrade__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    canUpgrade
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_canUpgrade__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    printText
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_printText
  (JNIEnv *, jobject, jstring);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    sendText
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_sendText
  (JNIEnv *, jobject, jstring);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    setCommandOptimizationLevel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_jnibwapi_JNIBWAPI_setCommandOptimizationLevel
  (JNIEnv *, jobject, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    isReplay
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_isReplay
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    isVisibleToPlayer
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jnibwapi_JNIBWAPI_isVisibleToPlayer
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getLastError
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jnibwapi_JNIBWAPI_getLastError
  (JNIEnv *, jobject);

/*
 * Class:     jnibwapi_JNIBWAPI
 * Method:    getRemainingLatencyFrames
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_jnibwapi_JNIBWAPI_getRemainingLatencyFrames
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
