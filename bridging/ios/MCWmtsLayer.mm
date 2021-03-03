// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts.djinni

#import "MCWmtsLayer.h"


@implementation MCWmtsLayer

- (nonnull instancetype)initWithIndentifier:(nonnull NSString *)indentifier
                                  urlFormat:(nonnull NSString *)urlFormat
                                     bounds:(nonnull MCRectCoord *)bounds
                                 dimensions:(nonnull NSArray<MCWmtsDimension *> *)dimensions
{
    if (self = [super init]) {
        _indentifier = [indentifier copy];
        _urlFormat = [urlFormat copy];
        _bounds = bounds;
        _dimensions = [dimensions copy];
    }
    return self;
}

+ (nonnull instancetype)wmtsLayerWithIndentifier:(nonnull NSString *)indentifier
                                       urlFormat:(nonnull NSString *)urlFormat
                                          bounds:(nonnull MCRectCoord *)bounds
                                      dimensions:(nonnull NSArray<MCWmtsDimension *> *)dimensions
{
    return [(MCWmtsLayer*)[self alloc] initWithIndentifier:indentifier
                                                 urlFormat:urlFormat
                                                    bounds:bounds
                                                dimensions:dimensions];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p indentifier:%@ urlFormat:%@ bounds:%@ dimensions:%@>", self.class, (void *)self, self.indentifier, self.urlFormat, self.bounds, self.dimensions];
}

@end