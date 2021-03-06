// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from polygon.djinni

#import "MCPolygonInfo+Private.h"
#import "DJIMarshal+Private.h"
#import "MCColor+Private.h"
#import "MCCoord+Private.h"
#include <cassert>

namespace djinni_generated {

auto PolygonInfo::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.identifier),
            ::djinni::List<::djinni_generated::Coord>::toCpp(obj.coordinates),
            ::djinni::List<::djinni::List<::djinni_generated::Coord>>::toCpp(obj.holes),
            ::djinni::Bool::toCpp(obj.isConvex),
            ::djinni_generated::Color::toCpp(obj.color),
            ::djinni_generated::Color::toCpp(obj.highlightColor)};
}

auto PolygonInfo::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCPolygonInfo alloc] initWithIdentifier:(::djinni::String::fromCpp(cpp.identifier))
                                         coordinates:(::djinni::List<::djinni_generated::Coord>::fromCpp(cpp.coordinates))
                                               holes:(::djinni::List<::djinni::List<::djinni_generated::Coord>>::fromCpp(cpp.holes))
                                            isConvex:(::djinni::Bool::fromCpp(cpp.isConvex))
                                               color:(::djinni_generated::Color::fromCpp(cpp.color))
                                      highlightColor:(::djinni_generated::Color::fromCpp(cpp.highlightColor))];
}

}  // namespace djinni_generated
