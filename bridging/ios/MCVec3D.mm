// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from common.djinni

#import "MCVec3D.h"


@implementation MCVec3D

- (nonnull instancetype)initWithX:(double)x
                                y:(double)y
                                z:(double)z
{
    if (self = [super init]) {
        _x = x;
        _y = y;
        _z = z;
    }
    return self;
}

+ (nonnull instancetype)vec3DWithX:(double)x
                                 y:(double)y
                                 z:(double)z
{
    return [(MCVec3D*)[self alloc] initWithX:x
                                           y:y
                                           z:z];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p x:%@ y:%@ z:%@>", self.class, (void *)self, @(self.x), @(self.y), @(self.z)];
}

@end
