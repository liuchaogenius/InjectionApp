//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#import "SwiftTrace.h"
#import "../../XprobePlugin/Classes/Xprobe.h"

@interface NSObject(InjectionSweep)
- (void)bsweep;
@end
