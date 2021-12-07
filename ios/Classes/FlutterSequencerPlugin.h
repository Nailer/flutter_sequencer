#import <Flutter/Flutter.h>

@interface FlutterSequencerPlugin : NSObject<FlutterPlugin>
@end


void setup_engine(int64_t sampleRateCallbackPort);
void destroy_engine();
void add_track_sfz(char *sfzPath, char *tuningPath, int64_t callbackPort);
void add_track_sfz_string(char *sampleRoot, char *sfzString, int64_t callbackPort);
void add_track_sf2(char *path, bool isAsset, int presetIndex, int64_t callbackPort);
void remove_track(int trackIndex);
void reset_track(int trackIndex);
UInt32 get_position();
Float32 get_track_volume(int trackIndex);
UInt64 get_last_render_time_us();
UInt32 get_buffer_available_count(int trackIndex);
void handle_events_now(int trackIndex, UInt8 *eventData, UInt32 eventsCount);
UInt32 schedule_events(int trackIndex, UInt8 *evemtData, UInt32 eventsCount);
void clear_events(int trackIndex, int fromFrame);
void engine_play();
void engine_pause();
