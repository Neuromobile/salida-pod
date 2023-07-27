#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

// In this header, you should import all the public headers of your framework using statements like #import <Salida/PublicHeader.h>

#import <Salida/NMSBuilding.h>

typedef NS_ENUM(NSInteger, LocationStatus) {
    OK = 0,
    REQUEST = 1,
    DENIED = 2
};

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
 @brief Is Location Enabled  to redeemCoupon
 */
+(BOOL)isGPSEnabledToRedeemCoupon;
/*!
 @brief Force location Update
 */
+(LocationStatus)forceLocationUpdate;
/*!
 @brief Get Last Location For Redeem Coupon
 */
+(CLLocation *)getLastLocationForRedeemCoupon;
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
@brief Return if optional data are enabled.
*/
+(BOOL)optionalDataEnabled;

/*!
 @brief Return status In Out.
 */
+(BOOL)getLastInOutStatus;

/*!
@brief Set Config
*/
+(void)setSpcConfig:(NSString *)config;
/*!
 @brief Call this method in applicationWillEnterForeground from AppDelegate.
 */
+ (void)applicationWillEnterForeground;

/*!
 @brief Call this method in applicationDidEnterBackground from AppDelegate.
 */
+ (void)applicationDidEnterBackground;

@end
