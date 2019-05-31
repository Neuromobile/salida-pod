#import <Foundation/Foundation.h>

@class NMSZone;

@interface NMSBuilding : NSObject <NSCoding>

@property (nonatomic, copy) NSNumber *buildingId;
@property (nonatomic, copy) NSNumber *centerId;
@property (nonatomic, copy) NSNumber *mainBuildingId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSDecimalNumber *latitude;
@property (nonatomic, copy) NSDecimalNumber *longitude;
@property (nonatomic, copy) NSDecimalNumber *radius;
@property (nonatomic, assign) bool calibrated;
@property (nonatomic, copy) NSArray<NMSZone *> *zones;

@end
