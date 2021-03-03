// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts.djinni

#import "MCRectCoord.h"
#import "MCWmtsDimension.h"
#import <Foundation/Foundation.h>

@interface MCWmtsLayer : NSObject
- (nonnull instancetype)initWithIndentifier:(nonnull NSString *)indentifier
                                  urlFormat:(nonnull NSString *)urlFormat
                                     bounds:(nonnull MCRectCoord *)bounds
                                 dimensions:(nonnull NSArray<MCWmtsDimension *> *)dimensions;
+ (nonnull instancetype)wmtsLayerWithIndentifier:(nonnull NSString *)indentifier
                                       urlFormat:(nonnull NSString *)urlFormat
                                          bounds:(nonnull MCRectCoord *)bounds
                                      dimensions:(nonnull NSArray<MCWmtsDimension *> *)dimensions;

@property (nonatomic, readonly, nonnull) NSString * indentifier;

@property (nonatomic, readonly, nonnull) NSString * urlFormat;

@property (nonatomic, readonly, nonnull) MCRectCoord * bounds;

@property (nonatomic, readonly, nonnull) NSArray<MCWmtsDimension *> * dimensions;

@end