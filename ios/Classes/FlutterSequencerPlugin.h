#import <Flutter/Flutter.h>

@interface FlutterSequencerPlugin : NSObject<FlutterPlugin>
@end


void setup_engine(int64_t sampleRateCallbackPort);

void destroy_engine();

void add_track_sampler(int64_t sampleRateCallbackPort);

