#import <UIKit/UIKit.h>

// In this header, you should import all the public headers of your framework using statements like #import <Salida/PublicHeader.h>

#import <Salida/NMSBuilding.h>

/*!
 @brief Salida's public inteface
 @version 1.0
 */
@interface Salida : NSObject

/*!
 @brief Asynchronous method to create a new instance of Salida.
 */
+ (void)createInstance:(void(^)(Salida *instance))instanceCreatedBlock withErrorBlock:(void(^)(NSString *error))errorBlock withFinishBlock:(void(^)(void))finishBlock;

/*!
 @brief Returns the version of Salida.
 */
+ (NSString *)getSdkVersion;

/*!
 @brief Return module ID.
 */
+ (NSString *)getModuleIdentifier;
/*!
 @brief Return status location permissions.
 */
+(NSString *)getLocationPermissionStatus;

/*!
 @brief Call this method in performFetchWithCompletionHandler from AppDelegate.
 */
+ (void)performBackgroundFetch;

/*!
 @brief Get list of buildings.
 */
+(void)getListBuildingsSuccess:(void(^)(NSArray *))successCallback onError:(void(^)())errorCallback;

/*!
 @brief Recopile data about SDK status.
 */
+(void)shouldBeDetectedInside;

/*!
 @brief Return is location is active.
 */
+(BOOL)isLocationActive;

/*!
@brief Return Building where user is inside.
*/
+(NMSBuilding *)getBuildingSaved;

/*!
@brief Remove Building where user close session.
*/
+(void)removeBuildingSaved;
/*!
 @brief Return if only allow change coupon inside building.
 */
+(BOOL)changeCouponInsideBuilding;

/*!
 @brief Return status In Out.
 */
+(BOOL)getLastInOutStatus;
/*!
 @brief Call this method in applicationWillEnterForeground from AppDelegate.
 */
+ (void)applicationWillEnterForeground;

/*!
 @brief Call this method in applicationDidEnterBackground from AppDelegate.
 */
+ (void)applicationDidEnterBackground;

@end
