#import <Foundation/Foundation.h>

@class NMSZone;

@interface NMSBuilding : NSObject <NSCoding>

@property (nonatomic, strong) NSNumber *buildingId;
@property (nonatomic, strong) NSNumber *centerId;
@property (nonatomic, strong) NSNumber *mainBuildingId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSDecimalNumber *latitude;
@property (nonatomic, strong) NSDecimalNumber *longitude;
@property (nonatomic, strong) NSDecimalNumber *radius;
@property (nonatomic, assign) bool calibrated;
@property (nonatomic, strong) NSArray<NMSZone *> *zones;

@end
